#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::os
{
	class Debug_InstructionCount : public __JniBaseClass
	{
	public:
		// Fields
		
		Debug_InstructionCount(QAndroidJniObject obj);
		// Constructors
		Debug_InstructionCount();
		
		// Methods
		jboolean collect();
		jint globalMethodInvocations();
		jint globalTotal();
		jboolean resetAndStart();
	};
} // namespace android::os

