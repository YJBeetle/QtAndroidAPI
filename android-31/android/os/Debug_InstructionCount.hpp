#pragma once

#include "../../JObject.hpp"


namespace android::os
{
	class Debug_InstructionCount : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Debug_InstructionCount(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Debug_InstructionCount(QJniObject obj);
		
		// Constructors
		Debug_InstructionCount();
		
		// Methods
		jboolean collect();
		jint globalMethodInvocations();
		jint globalTotal();
		jboolean resetAndStart();
	};
} // namespace android::os

