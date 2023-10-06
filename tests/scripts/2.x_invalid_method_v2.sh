#!/bin/bash

. init.sh

proto=$(printf "\x02" | bin2hex)
method=$(printf "\x06" | bin2hex)

responseDump=$(printf "${proto}${method}" | hex2bin | client_tool | bin2hex | tr -d '\n')

protoAck=$(printf "\x01" | bin2hex)
methodAck=$(printf "\x03" | bin2hex)

expected="${protoAck}${methodAck}"

if [ "${responseDump}" != "${expected}" ]; then
    showStatus info "Incorrect server response."
    echo 'Expected:' "$expected"
    echo 'Received:' "$responseDump"
    exit 1
fi
