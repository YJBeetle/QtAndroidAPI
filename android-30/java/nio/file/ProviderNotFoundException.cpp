#include "../../../JString.hpp"
#include "./ProviderNotFoundException.hpp"

namespace java::nio::file
{
	// Fields
	
	// QAndroidJniObject forward
	ProviderNotFoundException::ProviderNotFoundException(QAndroidJniObject obj) : java::lang::RuntimeException(obj) {}
	
	// Constructors
	ProviderNotFoundException::ProviderNotFoundException()
		: java::lang::RuntimeException(
			"java.nio.file.ProviderNotFoundException",
			"()V"
		) {}
	ProviderNotFoundException::ProviderNotFoundException(JString arg0)
		: java::lang::RuntimeException(
			"java.nio.file.ProviderNotFoundException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace java::nio::file

