#include "./RemoteAction.hpp"
#include "../os/Parcel.hpp"
#include "./RecoverableSecurityException.hpp"

namespace android::app
{
	// Fields
	QAndroidJniObject RecoverableSecurityException::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.RecoverableSecurityException",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	RecoverableSecurityException::RecoverableSecurityException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	RecoverableSecurityException::RecoverableSecurityException(jthrowable arg0, jstring arg1, android::app::RemoteAction arg2)
	{
		__thiz = QAndroidJniObject(
			"android.app.RecoverableSecurityException",
			"(Ljava/lang/Throwable;Ljava/lang/CharSequence;Landroid/app/RemoteAction;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	
	// Methods
	jint RecoverableSecurityException::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	QAndroidJniObject RecoverableSecurityException::getUserAction()
	{
		return __thiz.callObjectMethod(
			"getUserAction",
			"()Landroid/app/RemoteAction;"
		);
	}
	jstring RecoverableSecurityException::getUserMessage()
	{
		return __thiz.callObjectMethod(
			"getUserMessage",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	void RecoverableSecurityException::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::app

