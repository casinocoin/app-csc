/*******************************************************************************
*   CSC Wallet
*   (c) 2017 Ledger
*   (c) 2020 Towo Labs
*
*  Licensed under the Apache License, Version 2.0 (the "License");
*  you may not use this file except in compliance with the License.
*  You may obtain a copy of the License at
*
*      http://www.apache.org/licenses/LICENSE-2.0
*
*  Unless required by applicable law or agreed to in writing, software
*  distributed under the License is distributed on an "AS IS" BASIS,
*  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
*  See the License for the specific language governing permissions and
*  limitations under the License.
********************************************************************************/

#include "stringUtils.h"
#include <os.h>
#include <string.h>

char* appendString(char *out, char *in) {
    os_memmove(out, in, strlen(in));
    return out + strlen(in);
}

char* appendItem(char *out, char *in) {
    if (out[0] != '\0') {
        out[1] = ',';
        out[2] = ' ';
        out += 3;
    }

    return appendString(out, in) - 1;
}
