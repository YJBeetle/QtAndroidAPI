#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./Violation.hpp"


namespace android::os::strictmode
{
	class NetworkViolation : public android::os::strictmode::Violation
	{
	public:
		// Fields
		
		NetworkViolation(QAndroidJniObject obj);
		// Constructors
		NetworkViolation() = default;
		
		// Methods
	};
} // namespace android::os::strictmode

