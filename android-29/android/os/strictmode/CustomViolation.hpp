#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./Violation.hpp"


namespace android::os::strictmode
{
	class CustomViolation : public android::os::strictmode::Violation
	{
	public:
		// Fields
		
		CustomViolation(QAndroidJniObject obj);
		// Constructors
		CustomViolation() = default;
		
		// Methods
	};
} // namespace android::os::strictmode

