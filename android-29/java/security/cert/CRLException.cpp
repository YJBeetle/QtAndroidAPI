#include "./CRLException.hpp"

namespace java::security::cert
{
	// Fields
	
	CRLException::CRLException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	CRLException::CRLException()
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CRLException",
			"()V"
		);
	}
	CRLException::CRLException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CRLException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	CRLException::CRLException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CRLException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	CRLException::CRLException(jthrowable &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CRLException",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	CRLException::CRLException(jstring &arg0, jthrowable &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CRLException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	CRLException::CRLException(const QString &arg0, jthrowable &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.cert.CRLException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	
	// Methods
} // namespace java::security::cert

