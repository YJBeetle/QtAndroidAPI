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
	
	// QAndroidJniObject forward
	OpcodeInfo::OpcodeInfo(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
} // namespace dalvik::bytecode

