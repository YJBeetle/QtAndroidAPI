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
	AndroidException::AndroidException(java::lang::Exception &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.util.AndroidException",
			"(Ljava/lang/Exception;)V",
			arg0.__jniObject().object()
		);
	}
	AndroidException::AndroidException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.util.AndroidException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	AndroidException::AndroidException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.util.AndroidException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	AndroidException::AndroidException(jstring &arg0, jthrowable &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.util.AndroidException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	AndroidException::AndroidException(const QString &arg0, jthrowable &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.util.AndroidException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	
	// Methods
} // namespace android::util

