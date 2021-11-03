#include "./PendingIntent.hpp"
#include "../os/Parcel.hpp"
#include "../../JThrowable.hpp"
#include "./AuthenticationRequiredException.hpp"

namespace android::app
{
	// Fields
	JObject AuthenticationRequiredException::CREATOR()
	{
		return getStaticObjectField(
			"android.app.AuthenticationRequiredException",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	AuthenticationRequiredException::AuthenticationRequiredException(QJniObject obj) : java::lang::SecurityException(obj) {}
	
	// Constructors
	AuthenticationRequiredException::AuthenticationRequiredException(JThrowable arg0, android::app::PendingIntent arg1)
		: java::lang::SecurityException(
			"android.app.AuthenticationRequiredException",
			"(Ljava/lang/Throwable;Landroid/app/PendingIntent;)V",
			arg0.object<jthrowable>(),
			arg1.object()
		) {}
	
	// Methods
	jint AuthenticationRequiredException::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	android::app::PendingIntent AuthenticationRequiredException::getUserAction()
	{
		return callObjectMethod(
			"getUserAction",
			"()Landroid/app/PendingIntent;"
		);
	}
	void AuthenticationRequiredException::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app

