#!/bin/bash

# Use ifconfig to list all network interfaces and extract MAC addresses
ifconfig | grep -i ether | awk '{print $2}'
