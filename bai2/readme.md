# SMG Gateway - SIM Slot Manager

## Problem Description
SMG Gateway is a device that manages multiple SIM cards. Each device has N slots for SIM cards.

Each slot contains:
- **Code**: Slot identifier (e.g., S01, S02, S03)
- **Phone number**: 11-digit phone number
- **Carrier**: Network provider name (e.g., Mobi, Viettel, Vinaphone)

## Task
Given a phone number, find all slots that have the same carrier (based on the first 3 digits of the phone number).

## How it works
Vietnamese carriers are identified by phone number prefixes:
- **090, 093**: Mobifone
- **098, 097, 096**: Viettel  
- **091, 094**: Vinaphone
- etc.

## Input Format
- Line 1: Integer N (number of slots)
- Next N lines: Code, Phone number, Carrier name (space-separated)
- Last line: Phone number to search

## Output Format
Print information of all slots with the same carrier prefix, format: