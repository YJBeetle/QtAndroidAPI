#pragma once

#include "./OpcodeInfo.def.hpp"

namespace dalvik::bytecode
{
	// Fields
	inline jint OpcodeInfo::MAXIMUM_PACKED_VALUE()
	{
		return getStaticField<jint>(
			"dalvik.bytecode.OpcodeInfo",
			"MAXIMUM_PACKED_VALUE"
		);
	}
	inline jint OpcodeInfo::MAXIMUM_VALUE()
	{
		return getStaticField<jint>(
			"dalvik.bytecode.OpcodeInfo",
			"MAXIMUM_VALUE"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace dalvik::bytecode

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace dalvik::bytecode;
#endif
