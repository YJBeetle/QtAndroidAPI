#pragma once

#include "../../__JniBaseClass.hpp"


namespace dalvik::bytecode
{
	class OpcodeInfo : public __JniBaseClass
	{
	public:
		// Fields
		static jint MAXIMUM_PACKED_VALUE();
		static jint MAXIMUM_VALUE();
		
		OpcodeInfo(QAndroidJniObject obj);
		// Constructors
		OpcodeInfo() = default;
		
		// Methods
	};
} // namespace dalvik::bytecode

