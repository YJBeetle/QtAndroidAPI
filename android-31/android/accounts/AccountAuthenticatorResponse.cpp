#include "../os/Bundle.hpp"
#include "../os/Parcel.hpp"
#include "../../JString.hpp"
#include "./AccountAuthenticatorResponse.hpp"

namespace android::accounts
{
	// Fields
	JObject AccountAuthenticatorResponse::CREATOR()
	{
		return getStaticObjectField(
			"android.accounts.AccountAuthenticatorResponse",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	AccountAuthenticatorResponse::AccountAuthenticatorResponse(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	AccountAuthenticatorResponse::AccountAuthenticatorResponse(android::os::Parcel arg0)
		: JObject(
			"android.accounts.AccountAuthenticatorResponse",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	
	// Methods
	jint AccountAuthenticatorResponse::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void AccountAuthenticatorResponse::onError(jint arg0, JString arg1) const
	{
		callMethod<void>(
			"onError",
			"(ILjava/lang/String;)V",
			arg0,
			arg1.object<jstring>()
		);
	}
	void AccountAuthenticatorResponse::onRequestContinued() const
	{
		callMethod<void>(
			"onRequestContinued",
			"()V"
		);
	}
	void AccountAuthenticatorResponse::onResult(android::os::Bundle arg0) const
	{
		callMethod<void>(
			"onResult",
			"(Landroid/os/Bundle;)V",
			arg0.object()
		);
	}
	void AccountAuthenticatorResponse::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::accounts

