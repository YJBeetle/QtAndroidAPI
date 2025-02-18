#pragma once

#include "./Violation.def.hpp"

namespace android::os::strictmode
{
	class NonSdkApiUsedViolation : public android::os::strictmode::Violation
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit NonSdkApiUsedViolation(const char *className, const char *sig, Ts...agv) : android::os::strictmode::Violation(className, sig, std::forward<Ts>(agv)...) {}
		NonSdkApiUsedViolation(QJniObject obj) : android::os::strictmode::Violation(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::os::strictmode

