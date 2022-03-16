#include "./OpcodeInfo.hpp"

namespace dalvik::bytecode
{
	// Fields
	jint OpcodeInfo::MAXIMUM_PACKED_VALUE()
	{
		return getStaticField<jint>(
			"dalvik.bytecode.OpcodeInfo",
			"MAXIMUM_PACKED_VALUE"
		);
	}
	jint OpcodeInfo::MAXIMUM_VALUE()
	{
		return getStaticField<jint>(
			"dalvik.bytecode.OpcodeInfo",
			"MAXIMUM_VALUE"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace dalvik::bytecode

