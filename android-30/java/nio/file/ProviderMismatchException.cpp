#include "../../../JString.hpp"
#include "./ProviderMismatchException.hpp"

namespace java::nio::file
{
	// Fields
	
	// Constructors
	ProviderMismatchException::ProviderMismatchException()
		: java::lang::IllegalArgumentException(
			"java.nio.file.ProviderMismatchException",
			"()V"
		) {}
	ProviderMismatchException::ProviderMismatchException(JString arg0)
		: java::lang::IllegalArgumentException(
			"java.nio.file.ProviderMismatchException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::nio::file

