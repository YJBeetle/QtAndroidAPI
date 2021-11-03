#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./NullPointerException.hpp"

namespace java::lang
{
	// Fields
	
	// QJniObject forward
	NullPointerException::NullPointerException(QJniObject obj) : java::lang::RuntimeException(obj) {}
	
	// Constructors
	NullPointerException::NullPointerException()
		: java::lang::RuntimeException(
			"java.lang.NullPointerException",
			"()V"
		) {}
	NullPointerException::NullPointerException(JString arg0)
		: java::lang::RuntimeException(
			"java.lang.NullPointerException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	JThrowable NullPointerException::fillInStackTrace()
	{
		return callObjectMethod(
			"fillInStackTrace",
			"()Ljava/lang/Throwable;"
		);
	}
	JString NullPointerException::getMessage()
	{
		return callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::lang

