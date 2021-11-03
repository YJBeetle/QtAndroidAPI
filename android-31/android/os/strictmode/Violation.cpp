#include "../../../JArray.hpp"
#include "../../../JThrowable.hpp"
#include "./Violation.hpp"

namespace android::os::strictmode
{
	// Fields
	
	// QJniObject forward
	Violation::Violation(QJniObject obj) : JThrowable(obj) {}
	
	// Constructors
	
	// Methods
	JThrowable Violation::fillInStackTrace()
	{
		return callObjectMethod(
			"fillInStackTrace",
			"()Ljava/lang/Throwable;"
		);
	}
	jint Violation::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JThrowable Violation::initCause(JThrowable arg0)
	{
		return callObjectMethod(
			"initCause",
			"(Ljava/lang/Throwable;)Ljava/lang/Throwable;",
			arg0.object<jthrowable>()
		);
	}
	void Violation::setStackTrace(JArray arg0)
	{
		callMethod<void>(
			"setStackTrace",
			"([Ljava/lang/StackTraceElement;)V",
			arg0.object<jarray>()
		);
	}
} // namespace android::os::strictmode

