#include "./OperationApplicationException.hpp"

namespace android::content
{
	// Fields
	
	OperationApplicationException::OperationApplicationException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	OperationApplicationException::OperationApplicationException()
	{
		__thiz = QAndroidJniObject(
			"android.content.OperationApplicationException",
			"()V"
		);
	}
	OperationApplicationException::OperationApplicationException(jint &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.OperationApplicationException",
			"(I)V",
			arg0
		);
	}
	OperationApplicationException::OperationApplicationException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.OperationApplicationException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	OperationApplicationException::OperationApplicationException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.OperationApplicationException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	OperationApplicationException::OperationApplicationException(jthrowable &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.OperationApplicationException",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	OperationApplicationException::OperationApplicationException(jstring &arg0, jint &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.content.OperationApplicationException",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1
		);
	}
	OperationApplicationException::OperationApplicationException(const QString &arg0, jint &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.content.OperationApplicationException",
			"(Ljava/lang/String;I)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	OperationApplicationException::OperationApplicationException(jstring &arg0, jthrowable &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.content.OperationApplicationException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	OperationApplicationException::OperationApplicationException(const QString &arg0, jthrowable &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.content.OperationApplicationException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	
	// Methods
	jint OperationApplicationException::getNumSuccessfulYieldPoints()
	{
		return __thiz.callMethod<jint>(
			"getNumSuccessfulYieldPoints",
			"()I"
		);
	}
} // namespace android::content

