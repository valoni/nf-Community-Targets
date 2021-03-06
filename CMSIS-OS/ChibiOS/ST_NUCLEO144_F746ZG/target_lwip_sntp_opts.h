//
// Copyright (c) .NET Foundation and Contributors
// See LICENSE file in the project root for full license information.
//

#define SNTP_SERVER_DEFAULT_ADDRESS "0.pool.ntp.org"

// update delay (default 1 hour)
// (value in milliseconds)
#define SNTP_UPDATE_DELAY       3600000

// better have a startup delay because we can have DHCP enabled (default 30 seconds)
// value in milliseconds
#define SNTP_STARTUP_DELAY      5000

// retry timeout (2 minutes)
// value in milliseconds
#define SNTP_RETRY_TIMEOUT      2*6000
