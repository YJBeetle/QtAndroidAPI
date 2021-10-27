#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./Violation.hpp"


namespace android::os::strictmode
{
	class IntentReceiverLeakedViolation : public android::os::strictmode::Violation
	{
	public:
		// Fields
		
		IntentReceiverLeakedViolation(QAndroidJniObject obj);
		// Constructors
		IntentReceiverLeakedViolation() = default;
		
		// Methods
	};
} // namespace android::os::strictmode

