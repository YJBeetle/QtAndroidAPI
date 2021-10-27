#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./Violation.hpp"


namespace android::os::strictmode
{
	class DiskReadViolation : public android::os::strictmode::Violation
	{
	public:
		// Fields
		
		DiskReadViolation(QAndroidJniObject obj);
		// Constructors
		DiskReadViolation() = default;
		
		// Methods
	};
} // namespace android::os::strictmode

