#include "../../java/lang/Exception.hpp"
#include "./AndroidException.hpp"

namespace android::util
{
	// Fields
	
	AndroidException::AndroidException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AndroidException::AndroidException()
	{
		__thiz = QAndroidJniObject(
			"android.util.AndroidException",
			"()V"
		);
	}
	AndroidException::AndroidException(java::lang::Exception arg0)
	{
		__thiz = QAndroidJniObject(
			"android.util.AndroidException",
			"(Ljava/lang/Exception;)V",
			arg0.__jniObject().object()
		);
	}
	AndroidException::AndroidException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.util.AndroidException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	AndroidException::AndroidException(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"android.util.AndroidException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	
	// Methods
} // namespace android::util

