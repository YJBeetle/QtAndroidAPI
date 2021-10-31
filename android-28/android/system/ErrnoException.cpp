#include "./ErrnoException.hpp"

namespace android::system
{
	// Fields
	jint ErrnoException::errno()
	{
		return getField<jint>(
			"errno"
		);
	}
	
	// QAndroidJniObject forward
	ErrnoException::ErrnoException(QAndroidJniObject obj) : java::lang::Exception(obj) {}
	
	// Constructors
	ErrnoException::ErrnoException(jstring arg0, jint arg1)
		: java::lang::Exception(
			"android.system.ErrnoException",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1
		) {}
	ErrnoException::ErrnoException(jstring arg0, jint arg1, jthrowable arg2)
		: java::lang::Exception(
			"android.system.ErrnoException",
			"(Ljava/lang/String;ILjava/lang/Throwable;)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
	jstring ErrnoException::getMessage()
	{
		return callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::system

