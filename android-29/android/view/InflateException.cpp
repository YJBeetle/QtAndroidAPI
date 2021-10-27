#include "./InflateException.hpp"

namespace android::view
{
	// Fields
	
	InflateException::InflateException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	InflateException::InflateException()
	{
		__thiz = QAndroidJniObject(
			"android.view.InflateException",
			"()V"
		);
	}
	InflateException::InflateException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.InflateException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	InflateException::InflateException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.InflateException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	InflateException::InflateException(jthrowable &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.InflateException",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	InflateException::InflateException(jstring &arg0, jthrowable &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.view.InflateException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	InflateException::InflateException(const QString &arg0, jthrowable &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.view.InflateException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	
	// Methods
} // namespace android::view

