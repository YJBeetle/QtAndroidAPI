#include "./IncorrectContextUseViolation.hpp"

namespace android::os::strictmode
{
	// Fields
	
	// QAndroidJniObject forward
	IncorrectContextUseViolation::IncorrectContextUseViolation(QAndroidJniObject obj) : android::os::strictmode::Violation(obj) {}
	
	// Constructors
	IncorrectContextUseViolation::IncorrectContextUseViolation(jstring arg0, jthrowable arg1)
		: android::os::strictmode::Violation(
			"android.os.strictmode.IncorrectContextUseViolation",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace android::os::strictmode

