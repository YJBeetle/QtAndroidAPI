#include "./ErrnoException.hpp"

namespace android::system
{
	// Fields
	jint ErrnoException::errno()
	{
		return __thiz.getField<jint>(
			"errno"
		);
	}
	
	ErrnoException::ErrnoException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ErrnoException::ErrnoException(jstring arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.system.ErrnoException",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1
		);
	}
	ErrnoException::ErrnoException(jstring arg0, jint arg1, jthrowable arg2)
	{
		__thiz = QAndroidJniObject(
			"android.system.ErrnoException",
			"(Ljava/lang/String;ILjava/lang/Throwable;)V",
			arg0,
			arg1,
			arg2
		);
	}
	
	// Methods
	jstring ErrnoException::getMessage()
	{
		return __thiz.callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::system

