#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./Violation.hpp"


namespace android::os::strictmode
{
	class LeakedClosableViolation : public android::os::strictmode::Violation
	{
	public:
		// Fields
		
		LeakedClosableViolation(QAndroidJniObject obj);
		// Constructors
		LeakedClosableViolation() = default;
		
		// Methods
	};
} // namespace android::os::strictmode

