#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./KeyChainException.hpp"

namespace android::security
{
	// Fields
	
	// QAndroidJniObject forward
	KeyChainException::KeyChainException(QAndroidJniObject obj) : java::lang::Exception(obj) {}
	
	// Constructors
	KeyChainException::KeyChainException()
		: java::lang::Exception(
			"android.security.KeyChainException",
			"()V"
		) {}
	KeyChainException::KeyChainException(JString arg0)
		: java::lang::Exception(
			"android.security.KeyChainException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	KeyChainException::KeyChainException(JThrowable arg0)
		: java::lang::Exception(
			"android.security.KeyChainException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	KeyChainException::KeyChainException(JString arg0, JThrowable arg1)
		: java::lang::Exception(
			"android.security.KeyChainException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace android::security

