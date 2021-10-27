#include "../../java/lang/Exception.hpp"
#include "./AndroidRuntimeException.hpp"

namespace android::util
{
	// Fields
	
	AndroidRuntimeException::AndroidRuntimeException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AndroidRuntimeException::AndroidRuntimeException()
	{
		__thiz = QAndroidJniObject(
			"android.util.AndroidRuntimeException",
			"()V"
		);
	}
	AndroidRuntimeException::AndroidRuntimeException(java::lang::Exception &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.util.AndroidRuntimeException",
			"(Ljava/lang/Exception;)V",
			arg0.__jniObject().object()
		);
	}
	AndroidRuntimeException::AndroidRuntimeException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.util.AndroidRuntimeException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	AndroidRuntimeException::AndroidRuntimeException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.util.AndroidRuntimeException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	AndroidRuntimeException::AndroidRuntimeException(jstring &arg0, jthrowable &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.util.AndroidRuntimeException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	AndroidRuntimeException::AndroidRuntimeException(const QString &arg0, jthrowable &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.util.AndroidRuntimeException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	
	// Methods
} // namespace android::util

