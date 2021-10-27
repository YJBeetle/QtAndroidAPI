#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./Violation.hpp"


namespace android::os::strictmode
{
	class ImplicitDirectBootViolation : public android::os::strictmode::Violation
	{
	public:
		// Fields
		
		ImplicitDirectBootViolation(QAndroidJniObject obj);
		// Constructors
		ImplicitDirectBootViolation() = default;
		
		// Methods
	};
} // namespace android::os::strictmode

