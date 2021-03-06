/*
 * Copyright (C) 2014 Mellnik
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

#ifndef _UTILITY_H_
#define _UTILITY_H_

#include <string>
#include <stack>

#include <boost/variant.hpp>

#include "main.h"

typedef struct
{
	std::string Name;
	std::stack< boost::variant<cell, std::string> > Params;
} CallbackData;

namespace Utility
{
	void sha256(std::string input, std::string &output);
	void sha384(std::string input, std::string &output);
	void sha512(std::string input, std::string &output);
	void sha3(std::string input, std::string &output);
	void whirlpool(std::string input, std::string &output);
	void ripemd160(std::string input, std::string &output);
	void ripemd256(std::string input, std::string &output);
	void ripemd320(std::string input, std::string &output);
	void base64_encode(std::string input, std::string &output);
	void base64_decode(std::string input, std::string &output);
	void hex_encode(std::string input, std::string &output);
	void hex_decode(std::string input, std::string &output);

	void random_string(std::string &output, unsigned length);
};

#endif