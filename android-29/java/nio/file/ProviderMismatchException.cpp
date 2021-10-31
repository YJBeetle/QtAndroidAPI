#include "./ProviderMismatchException.hpp"

namespace java::nio::file
{
	// Fields
	
	ProviderMismatchException::ProviderMismatchException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ProviderMismatchException::ProviderMismatchException()
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.ProviderMismatchException",
			"()V"
		);
	}
	ProviderMismatchException::ProviderMismatchException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.ProviderMismatchException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
} // namespace java::nio::file

