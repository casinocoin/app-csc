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

#ifndef LEDGER_APP_CSC_FORMAT_H
#define LEDGER_APP_CSC_FORMAT_H

#include "fields.h"
#include <stdio.h>

#define SNPRINTF(strbuf, ...) snprintf(strbuf, MAX_FIELD_LEN, __VA_ARGS__)

void formatField(field_t* field, char* dst);

#endif //LEDGER_APP_CSC_FORMAT_H
