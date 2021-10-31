#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./Violation.hpp"


namespace android::os::strictmode
{
	class IncorrectContextUseViolation : public android::os::strictmode::Violation
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit IncorrectContextUseViolation(const char *className, const char *sig, Ts...agv) : android::os::strictmode::Violation(className, sig, std::forward<Ts>(agv)...) {}
		IncorrectContextUseViolation(QJniObject obj);
		
		// Constructors
		IncorrectContextUseViolation(jstring arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace android::os::strictmode

