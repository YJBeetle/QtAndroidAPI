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
	ProviderException::ProviderException(jstring arg0)
		: java::lang::RuntimeException(
			"java.security.ProviderException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	ProviderException::ProviderException(jthrowable arg0)
		: java::lang::RuntimeException(
			"java.security.ProviderException",
			"(Ljava/lang/Throwable;)V",
			arg0
		) {}
	ProviderException::ProviderException(jstring arg0, jthrowable arg1)
		: java::lang::RuntimeException(
			"java.security.ProviderException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace java::security

