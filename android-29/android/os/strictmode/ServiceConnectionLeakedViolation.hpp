#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./Violation.hpp"


namespace android::os::strictmode
{
	class ServiceConnectionLeakedViolation : public android::os::strictmode::Violation
	{
	public:
		// Fields
		
		ServiceConnectionLeakedViolation(QAndroidJniObject obj);
		// Constructors
		ServiceConnectionLeakedViolation() = default;
		
		// Methods
	};
} // namespace android::os::strictmode

