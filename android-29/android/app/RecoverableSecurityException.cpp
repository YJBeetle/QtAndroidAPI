#include "./RemoteAction.hpp"
#include "../os/Parcel.hpp"
#include "./RecoverableSecurityException.hpp"

namespace android::app
{
	// Fields
	__JniBaseClass RecoverableSecurityException::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.RecoverableSecurityException",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	RecoverableSecurityException::RecoverableSecurityException(QAndroidJniObject obj) : java::lang::SecurityException(obj) {}
	
	// Constructors
	RecoverableSecurityException::RecoverableSecurityException(jthrowable arg0, jstring arg1, android::app::RemoteAction arg2)
		: java::lang::SecurityException(
			"android.app.RecoverableSecurityException",
			"(Ljava/lang/Throwable;Ljava/lang/CharSequence;Landroid/app/RemoteAction;)V",
			arg0,
			arg1,
			arg2.object()
		) {}
	
	// Methods
	jint RecoverableSecurityException::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	android::app::RemoteAction RecoverableSecurityException::getUserAction()
	{
		return callObjectMethod(
			"getUserAction",
			"()Landroid/app/RemoteAction;"
		);
	}
	jstring RecoverableSecurityException::getUserMessage()
	{
		return callObjectMethod(
			"getUserMessage",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	void RecoverableSecurityException::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app

