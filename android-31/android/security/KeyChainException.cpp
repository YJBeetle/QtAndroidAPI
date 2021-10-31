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
	KeyChainException::KeyChainException(jstring arg0)
		: java::lang::Exception(
			"android.security.KeyChainException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	KeyChainException::KeyChainException(jthrowable arg0)
		: java::lang::Exception(
			"android.security.KeyChainException",
			"(Ljava/lang/Throwable;)V",
			arg0
		) {}
	KeyChainException::KeyChainException(jstring arg0, jthrowable arg1)
		: java::lang::Exception(
			"android.security.KeyChainException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace android::security

