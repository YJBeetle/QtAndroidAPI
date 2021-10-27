#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./Violation.hpp"


namespace android::os::strictmode
{
	class UnbufferedIoViolation : public android::os::strictmode::Violation
	{
	public:
		// Fields
		
		UnbufferedIoViolation(QAndroidJniObject obj);
		// Constructors
		UnbufferedIoViolation() = default;
		
		// Methods
	};
} // namespace android::os::strictmode

