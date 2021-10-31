#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::os
{
	class Debug_InstructionCount : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Debug_InstructionCount(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
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

