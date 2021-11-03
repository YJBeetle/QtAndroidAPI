#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./Error.hpp"

namespace java::lang
{
	// Fields
	
	// QAndroidJniObject forward
	Error::Error(QAndroidJniObject obj) : JThrowable(obj) {}
	
	// Constructors
	Error::Error()
		: JThrowable(
			"java.lang.Error",
			"()V"
		) {}
	Error::Error(JString arg0)
		: JThrowable(
			"java.lang.Error",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	Error::Error(JThrowable arg0)
		: JThrowable(
			"java.lang.Error",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	Error::Error(JString arg0, JThrowable arg1)
		: JThrowable(
			"java.lang.Error",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace java::lang

