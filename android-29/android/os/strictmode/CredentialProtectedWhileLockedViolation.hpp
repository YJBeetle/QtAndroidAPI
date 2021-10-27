#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./Violation.hpp"


namespace android::os::strictmode
{
	class CredentialProtectedWhileLockedViolation : public android::os::strictmode::Violation
	{
	public:
		// Fields
		
		CredentialProtectedWhileLockedViolation(QAndroidJniObject obj);
		// Constructors
		CredentialProtectedWhileLockedViolation() = default;
		
		// Methods
	};
} // namespace android::os::strictmode

