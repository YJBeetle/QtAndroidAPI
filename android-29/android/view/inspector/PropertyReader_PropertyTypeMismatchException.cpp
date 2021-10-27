#include "./PropertyReader_PropertyTypeMismatchException.hpp"

namespace android::view::inspector
{
	// Fields
	
	PropertyReader_PropertyTypeMismatchException::PropertyReader_PropertyTypeMismatchException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	PropertyReader_PropertyTypeMismatchException::PropertyReader_PropertyTypeMismatchException(jint &arg0, jstring &arg1, jstring &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.view.inspector.PropertyReader$PropertyTypeMismatchException",
			"(ILjava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2
		);
	}
	PropertyReader_PropertyTypeMismatchException::PropertyReader_PropertyTypeMismatchException(jint &arg0, const QString &arg1, const QString &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.view.inspector.PropertyReader$PropertyTypeMismatchException",
			"(ILjava/lang/String;Ljava/lang/String;)V",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>()
		);
	}
	PropertyReader_PropertyTypeMismatchException::PropertyReader_PropertyTypeMismatchException(jint &arg0, jstring &arg1, jstring &arg2, jstring &arg3)
	{
		__thiz = QAndroidJniObject(
			"android.view.inspector.PropertyReader$PropertyTypeMismatchException",
			"(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	PropertyReader_PropertyTypeMismatchException::PropertyReader_PropertyTypeMismatchException(jint &arg0, const QString &arg1, const QString &arg2, const QString &arg3)
	{
		__thiz = QAndroidJniObject(
			"android.view.inspector.PropertyReader$PropertyTypeMismatchException",
			"(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			QAndroidJniObject::fromString(arg3).object<jstring>()
		);
	}
	
	// Methods
} // namespace android::view::inspector

