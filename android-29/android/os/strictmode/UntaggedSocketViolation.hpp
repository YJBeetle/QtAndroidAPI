#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./Violation.hpp"


namespace android::os::strictmode
{
	class UntaggedSocketViolation : public android::os::strictmode::Violation
	{
	public:
		// Fields
		
		UntaggedSocketViolation(QAndroidJniObject obj);
		// Constructors
		UntaggedSocketViolation() = default;
		
		// Methods
	};
} // namespace android::os::strictmode

