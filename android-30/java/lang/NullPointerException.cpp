#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./NullPointerException.hpp"

namespace java::lang
{
	// Fields
	
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
	JThrowable NullPointerException::fillInStackTrace() const
	{
		return callObjectMethod(
			"fillInStackTrace",
			"()Ljava/lang/Throwable;"
		);
	}
	JString NullPointerException::getMessage() const
	{
		return callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::lang

