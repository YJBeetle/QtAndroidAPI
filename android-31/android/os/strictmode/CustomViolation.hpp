#pragma once

#include "./Violation.hpp"

namespace android::os::strictmode
{
	class CustomViolation : public android::os::strictmode::Violation
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CustomViolation(const char *className, const char *sig, Ts...agv) : android::os::strictmode::Violation(className, sig, std::forward<Ts>(agv)...) {}
		CustomViolation(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::os::strictmode

