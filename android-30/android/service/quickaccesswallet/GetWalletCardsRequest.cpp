#include "../../os/Parcel.hpp"
#include "./GetWalletCardsRequest.hpp"

namespace android::service::quickaccesswallet
{
	// Fields
	JObject GetWalletCardsRequest::CREATOR()
	{
		return getStaticObjectField(
			"android.service.quickaccesswallet.GetWalletCardsRequest",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	GetWalletCardsRequest::GetWalletCardsRequest(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	GetWalletCardsRequest::GetWalletCardsRequest(jint arg0, jint arg1, jint arg2, jint arg3)
		: JObject(
			"android.service.quickaccesswallet.GetWalletCardsRequest",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		) {}
	
	// Methods
	jint GetWalletCardsRequest::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint GetWalletCardsRequest::getCardHeightPx()
	{
		return callMethod<jint>(
			"getCardHeightPx",
			"()I"
		);
	}
	jint GetWalletCardsRequest::getCardWidthPx()
	{
		return callMethod<jint>(
			"getCardWidthPx",
			"()I"
		);
	}
	jint GetWalletCardsRequest::getIconSizePx()
	{
		return callMethod<jint>(
			"getIconSizePx",
			"()I"
		);
	}
	jint GetWalletCardsRequest::getMaxCards()
	{
		return callMethod<jint>(
			"getMaxCards",
			"()I"
		);
	}
	void GetWalletCardsRequest::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::service::quickaccesswallet

