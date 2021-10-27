#include "./ProviderNotFoundException.hpp"

namespace java::nio::file
{
	// Fields
	
	ProviderNotFoundException::ProviderNotFoundException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ProviderNotFoundException::ProviderNotFoundException()
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.ProviderNotFoundException",
			"()V"
		);
	}
	ProviderNotFoundException::ProviderNotFoundException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.ProviderNotFoundException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	ProviderNotFoundException::ProviderNotFoundException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.ProviderNotFoundException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace java::nio::file

