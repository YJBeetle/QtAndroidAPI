#include "../../os/Parcel.hpp"
#include "../../../JString.hpp"
#include "./SelectWalletCardRequest.hpp"

namespace android::service::quickaccesswallet
{
	// Fields
	JObject SelectWalletCardRequest::CREATOR()
	{
		return getStaticObjectField(
			"android.service.quickaccesswallet.SelectWalletCardRequest",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	SelectWalletCardRequest::SelectWalletCardRequest(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	SelectWalletCardRequest::SelectWalletCardRequest(JString arg0)
		: JObject(
			"android.service.quickaccesswallet.SelectWalletCardRequest",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	jint SelectWalletCardRequest::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	JString SelectWalletCardRequest::getCardId() const
	{
		return callObjectMethod(
			"getCardId",
			"()Ljava/lang/String;"
		);
	}
	void SelectWalletCardRequest::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::service::quickaccesswallet

