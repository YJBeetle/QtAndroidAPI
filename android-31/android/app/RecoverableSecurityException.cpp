#include "./RemoteAction.hpp"
#include "../os/Parcel.hpp"
#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./RecoverableSecurityException.hpp"

namespace android::app
{
	// Fields
	JObject RecoverableSecurityException::CREATOR()
	{
		return getStaticObjectField(
			"android.app.RecoverableSecurityException",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	RecoverableSecurityException::RecoverableSecurityException(JThrowable arg0, JString arg1, android::app::RemoteAction arg2)
		: java::lang::SecurityException(
			"android.app.RecoverableSecurityException",
			"(Ljava/lang/Throwable;Ljava/lang/CharSequence;Landroid/app/RemoteAction;)V",
			arg0.object<jthrowable>(),
			arg1.object<jstring>(),
			arg2.object()
		) {}
	
	// Methods
	jint RecoverableSecurityException::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	android::app::RemoteAction RecoverableSecurityException::getUserAction() const
	{
		return callObjectMethod(
			"getUserAction",
			"()Landroid/app/RemoteAction;"
		);
	}
	JString RecoverableSecurityException::getUserMessage() const
	{
		return callObjectMethod(
			"getUserMessage",
			"()Ljava/lang/CharSequence;"
		);
	}
	void RecoverableSecurityException::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app

