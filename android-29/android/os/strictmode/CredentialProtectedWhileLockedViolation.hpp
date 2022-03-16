#pragma once

#include "./Violation.hpp"

class JString;

namespace android::os::strictmode
{
	class CredentialProtectedWhileLockedViolation : public android::os::strictmode::Violation
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CredentialProtectedWhileLockedViolation(const char *className, const char *sig, Ts...agv) : android::os::strictmode::Violation(className, sig, std::forward<Ts>(agv)...) {}
		CredentialProtectedWhileLockedViolation(QAndroidJniObject obj) : android::os::strictmode::Violation(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::os::strictmode

