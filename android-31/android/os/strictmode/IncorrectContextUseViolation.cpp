#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "./IncorrectContextUseViolation.hpp"

namespace android::os::strictmode
{
	// Fields
	
	// QAndroidJniObject forward
	IncorrectContextUseViolation::IncorrectContextUseViolation(QAndroidJniObject obj) : android::os::strictmode::Violation(obj) {}
	
	// Constructors
	IncorrectContextUseViolation::IncorrectContextUseViolation(JString arg0, JThrowable arg1)
		: android::os::strictmode::Violation(
			"android.os.strictmode.IncorrectContextUseViolation",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace android::os::strictmode

