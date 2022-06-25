/*
 * Copyright (C) 2018 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "exynos-thermal.h"
bool debugLogEnable = true;

int main(int argc, char *argv[])
{
	string confPath = "/vendor/exynos-thermal.conf";
	string envPath = "/vendor/exynos-thermal.env";

	if (argc == 2) {
		string arg;
		arg.assign(argv[1], 10);
		if (arg == "nolog")
			debugLogEnable = false;
	}

	ThermalMain(confPath, envPath);

	return 0;
}
