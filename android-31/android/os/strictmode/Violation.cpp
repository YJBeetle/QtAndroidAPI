#include "../../../JArray.hpp"
#include "../../../JThrowable.hpp"
#include "./Violation.hpp"

namespace android::os::strictmode
{
	// Fields
	
	// QAndroidJniObject forward
	Violation::Violation(QAndroidJniObject obj) : JThrowable(obj) {}
	
	// Constructors
	
	// Methods
	JThrowable Violation::fillInStackTrace() const
	{
		return callObjectMethod(
			"fillInStackTrace",
			"()Ljava/lang/Throwable;"
		);
	}
	jint Violation::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JThrowable Violation::initCause(JThrowable arg0) const
	{
		return callObjectMethod(
			"initCause",
			"(Ljava/lang/Throwable;)Ljava/lang/Throwable;",
			arg0.object<jthrowable>()
		);
	}
	void Violation::setStackTrace(JArray arg0) const
	{
		callMethod<void>(
			"setStackTrace",
			"([Ljava/lang/StackTraceElement;)V",
			arg0.object<jarray>()
		);
	}
} // namespace android::os::strictmode

