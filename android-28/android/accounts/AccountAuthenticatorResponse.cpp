#include "../os/Bundle.hpp"
#include "../os/Parcel.hpp"
#include "./AccountAuthenticatorResponse.hpp"

namespace android::accounts
{
	// Fields
	__JniBaseClass AccountAuthenticatorResponse::CREATOR()
	{
		return getStaticObjectField(
			"android.accounts.AccountAuthenticatorResponse",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	AccountAuthenticatorResponse::AccountAuthenticatorResponse(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	AccountAuthenticatorResponse::AccountAuthenticatorResponse(android::os::Parcel arg0)
		: __JniBaseClass(
			"android.accounts.AccountAuthenticatorResponse",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	
	// Methods
	jint AccountAuthenticatorResponse::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void AccountAuthenticatorResponse::onError(jint arg0, jstring arg1)
	{
		callMethod<void>(
			"onError",
			"(ILjava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void AccountAuthenticatorResponse::onRequestContinued()
	{
		callMethod<void>(
			"onRequestContinued",
			"()V"
		);
	}
	void AccountAuthenticatorResponse::onResult(android::os::Bundle arg0)
	{
		callMethod<void>(
			"onResult",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	void AccountAuthenticatorResponse::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::accounts

