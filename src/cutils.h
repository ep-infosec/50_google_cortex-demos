/*******************************************************************************
    Copyright 2018 Google LLC

    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

        https://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License.
*******************************************************************************/

#pragma once

#define ARRAY_SIZE(a)   (sizeof(a)/sizeof(a[0]))

#define ABSDIFF(a, b) \
    ({\
        __typeof__(a) _a = (a);\
        __typeof__(b) _b = (b);\
        _a > _b ? (_a - _b) : (_b - _a);})

#define MAX(a, b) \
    ({\
        __typeof__(a) _a = (a);\
        __typeof__(b) _b = (b);\
        _a > _b ? _a : _b;})

#define MIN(a, b) \
    ({\
        __typeof__(a) _a = (a);\
        __typeof__(b) _b = (b);\
        _a < _b ? _a : _b;})
