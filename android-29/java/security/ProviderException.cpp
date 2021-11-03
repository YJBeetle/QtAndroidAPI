#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./ProviderException.hpp"

namespace java::security
{
	// Fields
	
	// QJniObject forward
	ProviderException::ProviderException(QJniObject obj) : java::lang::RuntimeException(obj) {}
	
	// Constructors
	ProviderException::ProviderException()
		: java::lang::RuntimeException(
			"java.security.ProviderException",
			"()V"
		) {}
	ProviderException::ProviderException(JString arg0)
		: java::lang::RuntimeException(
			"java.security.ProviderException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	ProviderException::ProviderException(JThrowable arg0)
		: java::lang::RuntimeException(
			"java.security.ProviderException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	ProviderException::ProviderException(JString arg0, JThrowable arg1)
		: java::lang::RuntimeException(
			"java.security.ProviderException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace java::security

