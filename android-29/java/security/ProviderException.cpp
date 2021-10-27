#include "./ProviderException.hpp"

namespace java::security
{
	// Fields
	
	ProviderException::ProviderException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ProviderException::ProviderException()
	{
		__thiz = QAndroidJniObject(
			"java.security.ProviderException",
			"()V"
		);
	}
	ProviderException::ProviderException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.ProviderException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	ProviderException::ProviderException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.ProviderException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	ProviderException::ProviderException(jthrowable &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.ProviderException",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	ProviderException::ProviderException(jstring &arg0, jthrowable &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.ProviderException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	ProviderException::ProviderException(const QString &arg0, jthrowable &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.ProviderException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	
	// Methods
} // namespace java::security

