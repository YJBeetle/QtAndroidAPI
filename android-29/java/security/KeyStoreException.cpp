#include "./KeyStoreException.hpp"

namespace java::security
{
	// Fields
	
	KeyStoreException::KeyStoreException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	KeyStoreException::KeyStoreException()
	{
		__thiz = QAndroidJniObject(
			"java.security.KeyStoreException",
			"()V"
		);
	}
	KeyStoreException::KeyStoreException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.KeyStoreException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	KeyStoreException::KeyStoreException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.KeyStoreException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	KeyStoreException::KeyStoreException(jthrowable &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.KeyStoreException",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	KeyStoreException::KeyStoreException(jstring &arg0, jthrowable &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.KeyStoreException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	KeyStoreException::KeyStoreException(const QString &arg0, jthrowable &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.KeyStoreException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	
	// Methods
} // namespace java::security

