================================
Release Notes
================================

===1.2.8===
Initial Support for Y-adapter (periodically send metadata packet when BT module is in read only mode)
Fixed Lua hang issue when scripts above one page size (256) are uploaded
more logging about about memory usage of Lua runtime

===1.2.7===
RPM/Timer input value now goes to zero when input signal goes away (i.e. when internal timer counter overflows)
Fixed problem where zero values in log file were not being recorded (treated as nulls)
Optimized code that read channels and populated the sample record object.
Auto file recovery attempt if file write error occurs; falls back to creating a new log file if it cannot auto-recover.
Improved SD performance/reliability when writing at high logging rates (>=100Hz)
Updated to ChanFS 0.10

===1.2.6===
Fixed problem where saving an empty lua script caused garbage script to be saved
Trimmed clock frequency to make logging more accurate (was about 1% off)
Fixed error around omitting samples if samples did not fall on even sample boundaries (specific problem with 30Hz sampling rate)
Implemented experimental 200Hz logging rate
Switched OS preemption tick rate from 300Hz to 200Hz (performance optimization)
Only poll the ADCs when the sample record needs to be written (performance optimziation)
Removed AccelInstalled configuration feature (Accelerometer is always installed)

===1.2.5===
Implemented smoothing algorithm for accelerometer channels using Exponential Moving Average IIR filter
Continuous streaming via connectivity port - added start/stop logging messages
Implemented rate limiting for cellular telemetry & bluetooth - bluetooth limited to 50Hz, Cellular 10Hz. SD still logs at configured rate.
Various code improvements / internal architecture

===1.2.4===
Bluetooth provisioning only attempts once before falling through - to deal with cases if Bluetooth is already connected and can't respond to AT commands

===1.2.3===
Added support for RaceCapture Mobile app and Petrel Data Solo Storm
Redesigned Bluetooth / telemetry streaming API to 2.2


===1.1.14===
Added - and : characters as allowed characters in filtered text fields

===1.1.13===
Fixed 10% too fast logging rate (improved dramatically but still seems about 0.5 - 1% off; needs measurement on scope for fine tuning)
Fixed analog scaling divide by zero issue with raw values outside of configured scaling map
Fixed accelerometer mappings for invert settings and changed mapping to match industry standards
More JSON APIs implemented

===1.1.12===
Fixed regression in cellular APN initialization
Additional JSON API
Additional fixes around scaling value on timer channels

===1.1.11===
Fixed issue where timer scaling was not being recalculated upon changes to pulse per revolution
Work in progress for new JSON API to enable mobile app
Initial work for making cellular modem APN configurable

===1.1.10===
Fixed periodic glitch in accelerometer readings
Fixed periodic SD card file corruption
Disabled accelerometer averaging based on user feedback
Added beginning of logging infrastructure

===1.1.9===
Fixed corrupted data in analog and timer channels when logging precision is zero

===1.1.8===
PWM fixes (logical -> hardware channel mapping was wrong) and general refactoring
Various changes to support testability
Fixed up modp_ftoa temporarily to deal with overflow condition (0xDEADBEEF)
Added lua garbage collect before processing interactive command


===1.1.7===
added metadata preamble to telemetry stream
expanded default GPS target radius to 0.0004 degrees

===1.1.6===
fixed bug in split time data logging (float vs int)

===1.1.5===
removed gps quality field
added split time configuration, detection and logging field
fixed usb comm race issue

===1.1.3===
Fixed lua binding range check issues

===1.1.2===
Fixed accelerometer calibration issues

===1.1.1===
* changed to use new bootloader. install bootloader using SAM-BA then use bootloader to flash
  RaceCapture/Pro firmware
* Fixed SD card compatibility issue
* added metadata in header for CSV file format

===0.4.0===
* added bluetooth module telemetry/connectivity
* fixed yaw sensor calibration
* other fixes

===0.3.4===
- Handles no telemetry authorizations scenario correctly

===0.3.3===
- Added wait for telemetry authorization in cellTelemetry.c

===0.3.2===
- Fixed bug where telemetry task would not start

===0.3.1===
- Select telemetry logging mode at strup based on configuration
- Fixed SD card detection / init bug
- Removed extraneous debug code
- Removed activation of LED3 during cellular initialization 

===0.3.0===

- initial cut of cellular telemetry
- refactored P2P telemetry into it's own module
- removed a stray debug output in the SD writing routine

===0.2.0===

- Various fixes/ updates to support RaceAnalyzer application
- Fixed script flashing routine
- Added sample runtime channels




