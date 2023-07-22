#pragma once

#include "./Violation.def.hpp"

class JString;
class JThrowable;

namespace android::os::strictmode
{
	class IncorrectContextUseViolation : public android::os::strictmode::Violation
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit IncorrectContextUseViolation(const char *className, const char *sig, Ts...agv) : android::os::strictmode::Violation(className, sig, std::forward<Ts>(agv)...) {}
		IncorrectContextUseViolation(QAndroidJniObject obj) : android::os::strictmode::Violation(obj) {}
		
		// Constructors
		IncorrectContextUseViolation(JString arg0, JThrowable arg1);
		
		// Methods
	};
} // namespace android::os::strictmode

