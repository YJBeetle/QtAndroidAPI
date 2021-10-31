#include "./ProviderMismatchException.hpp"

namespace java::nio::file
{
	// Fields
	
	// QJniObject forward
	ProviderMismatchException::ProviderMismatchException(QJniObject obj) : java::lang::IllegalArgumentException(obj) {}
	
	// Constructors
	ProviderMismatchException::ProviderMismatchException()
		: java::lang::IllegalArgumentException(
			"java.nio.file.ProviderMismatchException",
			"()V"
		) {}
	ProviderMismatchException::ProviderMismatchException(jstring arg0)
		: java::lang::IllegalArgumentException(
			"java.nio.file.ProviderMismatchException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace java::nio::file

