#include "../io/ObjectInputStream.hpp"
#include "../io/ObjectOutputStream.hpp"
#include "../lang/Exception.hpp"
#include "./PrivilegedActionException.hpp"

namespace java::security
{
	// Fields
	
	// QAndroidJniObject forward
	PrivilegedActionException::PrivilegedActionException(QAndroidJniObject obj) : java::lang::Exception(obj) {}
	
	// Constructors
	PrivilegedActionException::PrivilegedActionException(java::lang::Exception arg0)
		: java::lang::Exception(
			"java.security.PrivilegedActionException",
			"(Ljava/lang/Exception;)V",
			arg0.object()
		) {}
	
	// Methods
	QAndroidJniObject PrivilegedActionException::getException()
	{
		return callObjectMethod(
			"getException",
			"()Ljava/lang/Exception;"
		);
	}
	jstring PrivilegedActionException::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::security

