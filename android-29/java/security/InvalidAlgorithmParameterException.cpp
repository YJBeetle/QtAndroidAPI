#include "./InvalidAlgorithmParameterException.hpp"

namespace java::security
{
	// Fields
	
	InvalidAlgorithmParameterException::InvalidAlgorithmParameterException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	InvalidAlgorithmParameterException::InvalidAlgorithmParameterException()
	{
		__thiz = QAndroidJniObject(
			"java.security.InvalidAlgorithmParameterException",
			"()V"
		);
	}
	InvalidAlgorithmParameterException::InvalidAlgorithmParameterException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.InvalidAlgorithmParameterException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	InvalidAlgorithmParameterException::InvalidAlgorithmParameterException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.InvalidAlgorithmParameterException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	InvalidAlgorithmParameterException::InvalidAlgorithmParameterException(jthrowable &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.InvalidAlgorithmParameterException",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	InvalidAlgorithmParameterException::InvalidAlgorithmParameterException(jstring &arg0, jthrowable &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.InvalidAlgorithmParameterException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	InvalidAlgorithmParameterException::InvalidAlgorithmParameterException(const QString &arg0, jthrowable &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.security.InvalidAlgorithmParameterException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	
	// Methods
} // namespace java::security

