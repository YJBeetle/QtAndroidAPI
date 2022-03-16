#pragma once

#include "./Violation.hpp"

class JThrowable;

namespace android::os::strictmode
{
	class IntentReceiverLeakedViolation : public android::os::strictmode::Violation
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit IntentReceiverLeakedViolation(const char *className, const char *sig, Ts...agv) : android::os::strictmode::Violation(className, sig, std::forward<Ts>(agv)...) {}
		IntentReceiverLeakedViolation(QAndroidJniObject obj) : android::os::strictmode::Violation(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::os::strictmode

