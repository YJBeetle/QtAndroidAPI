#include "./ProviderNotFoundException.hpp"

namespace java::nio::file
{
	// Fields
	
	// QJniObject forward
	ProviderNotFoundException::ProviderNotFoundException(QJniObject obj) : java::lang::RuntimeException(obj) {}
	
	// Constructors
	ProviderNotFoundException::ProviderNotFoundException()
		: java::lang::RuntimeException(
			"java.nio.file.ProviderNotFoundException",
			"()V"
		) {}
	ProviderNotFoundException::ProviderNotFoundException(jstring arg0)
		: java::lang::RuntimeException(
			"java.nio.file.ProviderNotFoundException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace java::nio::file

