#include "../../os/Parcel.hpp"
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
	SelectWalletCardRequest::SelectWalletCardRequest(jstring arg0)
		: JObject(
			"android.service.quickaccesswallet.SelectWalletCardRequest",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
	jint SelectWalletCardRequest::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jstring SelectWalletCardRequest::getCardId()
	{
		return callObjectMethod(
			"getCardId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void SelectWalletCardRequest::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::service::quickaccesswallet

