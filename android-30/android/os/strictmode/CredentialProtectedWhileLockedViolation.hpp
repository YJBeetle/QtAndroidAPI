#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./Violation.hpp"


namespace android::os::strictmode
{
	class CredentialProtectedWhileLockedViolation : public android::os::strictmode::Violation
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CredentialProtectedWhileLockedViolation(const char *className, const char *sig, Ts...agv) : android::os::strictmode::Violation(className, sig, std::forward<Ts>(agv)...) {}
		CredentialProtectedWhileLockedViolation(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::os::strictmode

