#include "./InvalidParameterSpecException.hpp"

namespace java::security::spec
{
	// Fields
	
	InvalidParameterSpecException::InvalidParameterSpecException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	InvalidParameterSpecException::InvalidParameterSpecException()
	{
		__thiz = QAndroidJniObject(
			"java.security.spec.InvalidParameterSpecException",
			"()V"
		);
	}
	InvalidParameterSpecException::InvalidParameterSpecException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.spec.InvalidParameterSpecException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	InvalidParameterSpecException::InvalidParameterSpecException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.spec.InvalidParameterSpecException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace java::security::spec

