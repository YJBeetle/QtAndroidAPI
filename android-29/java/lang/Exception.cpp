#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./Exception.hpp"

namespace java::lang
{
	// Fields
	
	// Constructors
	Exception::Exception()
		: JThrowable(
			"java.lang.Exception",
			"()V"
		) {}
	Exception::Exception(JString arg0)
		: JThrowable(
			"java.lang.Exception",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	Exception::Exception(JThrowable arg0)
		: JThrowable(
			"java.lang.Exception",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	Exception::Exception(JString arg0, JThrowable arg1)
		: JThrowable(
			"java.lang.Exception",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace java::lang

