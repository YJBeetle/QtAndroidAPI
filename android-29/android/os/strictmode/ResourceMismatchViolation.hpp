#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./Violation.hpp"


namespace android::os::strictmode
{
	class ResourceMismatchViolation : public android::os::strictmode::Violation
	{
	public:
		// Fields
		
		ResourceMismatchViolation(QAndroidJniObject obj);
		// Constructors
		ResourceMismatchViolation() = default;
		
		// Methods
	};
} // namespace android::os::strictmode

