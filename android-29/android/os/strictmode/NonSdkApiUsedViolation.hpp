#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./Violation.hpp"


namespace android::os::strictmode
{
	class NonSdkApiUsedViolation : public android::os::strictmode::Violation
	{
	public:
		// Fields
		
		NonSdkApiUsedViolation(QAndroidJniObject obj);
		// Constructors
		NonSdkApiUsedViolation() = default;
		
		// Methods
	};
} // namespace android::os::strictmode

