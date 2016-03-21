#ifndef _VKDEVICEUTIL_HPP
#define _VKDEVICEUTIL_HPP
/*-------------------------------------------------------------------------
 * Vulkan CTS Framework
 * --------------------
 *
 * Copyright (c) 2015 Google Inc.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and/or associated documentation files (the
 * "Materials"), to deal in the Materials without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sublicense, and/or sell copies of the Materials, and to
 * permit persons to whom the Materials are furnished to do so, subject to
 * the following conditions:
 *
 * The above copyright notice(s) and this permission notice shall be
 * included in all copies or substantial portions of the Materials.
 *
 * THE MATERIALS ARE PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 * IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
 * CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
 * TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
 * MATERIALS OR THE USE OR OTHER DEALINGS IN THE MATERIALS.
 *
 *//*!
 * \file
 * \brief Instance and device initialization utilities.
 *//*--------------------------------------------------------------------*/

#include "vkDefs.hpp"
#include "vkRef.hpp"

#include <vector>
#include <string>

namespace tcu
{
class CommandLine;
}

namespace vk
{

Move<VkInstance>	createDefaultInstance	(const PlatformInterface&			vkPlatform);
Move<VkInstance>	createDefaultInstance	(const PlatformInterface&			vkPlatform,
											 const std::vector<std::string>&	enabledLayers,
											 const std::vector<std::string>&	enabledExtensions,
											 const VkAllocationCallbacks*		pAllocator	= DE_NULL);

VkPhysicalDevice	chooseDevice			(const InstanceInterface&			vkInstance,
											 VkInstance							instance,
											 const tcu::CommandLine&			cmdLine);

} // vk

#endif // _VKDEVICEUTIL_HPP
