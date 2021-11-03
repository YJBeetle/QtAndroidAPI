#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Debug_InstructionCount : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Debug_InstructionCount(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Debug_InstructionCount(QAndroidJniObject obj);
		
		// Constructors
		Debug_InstructionCount();
		
		// Methods
		jboolean collect() const;
		jint globalMethodInvocations() const;
		jint globalTotal() const;
		jboolean resetAndStart() const;
	};
} // namespace android::os

