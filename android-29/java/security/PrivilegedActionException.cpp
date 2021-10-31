#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"
#include "../lang/Exception.hpp"
#include "./PrivilegedActionException.hpp"

namespace java::security
{
	// Fields
	
	PrivilegedActionException::PrivilegedActionException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	PrivilegedActionException::PrivilegedActionException(java::lang::Exception arg0)
	{
		__thiz = QAndroidJniObject(
			"java.security.PrivilegedActionException",
			"(Ljava/lang/Exception;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject PrivilegedActionException::getException()
	{
		return __thiz.callObjectMethod(
			"getException",
			"()Ljava/lang/Exception;"
		);
	}
	jstring PrivilegedActionException::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::security

