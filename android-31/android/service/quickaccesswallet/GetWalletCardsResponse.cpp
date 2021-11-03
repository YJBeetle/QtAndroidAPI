#include "../../os/Parcel.hpp"
#include "./GetWalletCardsResponse.hpp"

namespace android::service::quickaccesswallet
{
	// Fields
	JObject GetWalletCardsResponse::CREATOR()
	{
		return getStaticObjectField(
			"android.service.quickaccesswallet.GetWalletCardsResponse",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	GetWalletCardsResponse::GetWalletCardsResponse(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	GetWalletCardsResponse::GetWalletCardsResponse(JObject arg0, jint arg1)
		: JObject(
			"android.service.quickaccesswallet.GetWalletCardsResponse",
			"(Ljava/util/List;I)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	jint GetWalletCardsResponse::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint GetWalletCardsResponse::getSelectedIndex() const
	{
		return callMethod<jint>(
			"getSelectedIndex",
			"()I"
		);
	}
	JObject GetWalletCardsResponse::getWalletCards() const
	{
		return callObjectMethod(
			"getWalletCards",
			"()Ljava/util/List;"
		);
	}
	void GetWalletCardsResponse::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::service::quickaccesswallet

