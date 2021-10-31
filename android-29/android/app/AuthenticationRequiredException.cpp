#include "./PendingIntent.hpp"
#include "../os/Parcel.hpp"
#include "./AuthenticationRequiredException.hpp"

namespace android::app
{
	// Fields
	QAndroidJniObject AuthenticationRequiredException::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.AuthenticationRequiredException",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	AuthenticationRequiredException::AuthenticationRequiredException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AuthenticationRequiredException::AuthenticationRequiredException(jthrowable arg0, android::app::PendingIntent arg1)
	{
		__thiz = QAndroidJniObject(
			"android.app.AuthenticationRequiredException",
			"(Ljava/lang/Throwable;Landroid/app/PendingIntent;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	jint AuthenticationRequiredException::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	QAndroidJniObject AuthenticationRequiredException::getUserAction()
	{
		return __thiz.callObjectMethod(
			"getUserAction",
			"()Landroid/app/PendingIntent;"
		);
	}
	void AuthenticationRequiredException::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::app

