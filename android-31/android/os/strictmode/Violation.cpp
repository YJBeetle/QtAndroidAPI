#include "./Violation.hpp"

namespace android::os::strictmode
{
	// Fields
	
	// QAndroidJniObject forward
	Violation::Violation(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jthrowable Violation::fillInStackTrace()
	{
		return callObjectMethod(
			"fillInStackTrace",
			"()Ljava/lang/Throwable;"
		).object<jthrowable>();
	}
	jint Violation::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jthrowable Violation::initCause(jthrowable arg0)
	{
		return callObjectMethod(
			"initCause",
			"(Ljava/lang/Throwable;)Ljava/lang/Throwable;",
			arg0
		).object<jthrowable>();
	}
	void Violation::setStackTrace(jarray arg0)
	{
		callMethod<void>(
			"setStackTrace",
			"([Ljava/lang/StackTraceElement;)V",
			arg0
		);
	}
} // namespace android::os::strictmode

