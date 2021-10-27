#include "./CertStoreException.hpp"

namespace java::security::cert
{
	// Fields
	
	CertStoreException::CertStoreException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	CertStoreException::CertStoreException()
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CertStoreException",
			"()V"
		);
	}
	CertStoreException::CertStoreException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CertStoreException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	CertStoreException::CertStoreException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CertStoreException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	CertStoreException::CertStoreException(jthrowable &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CertStoreException",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	CertStoreException::CertStoreException(jstring &arg0, jthrowable &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CertStoreException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	CertStoreException::CertStoreException(const QString &arg0, jthrowable &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CertStoreException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	
	// Methods
} // namespace java::security::cert

