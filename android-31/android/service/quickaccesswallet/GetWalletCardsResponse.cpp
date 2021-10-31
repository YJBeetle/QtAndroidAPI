#include "../../os/Parcel.hpp"
#include "./GetWalletCardsResponse.hpp"

namespace android::service::quickaccesswallet
{
	// Fields
	__JniBaseClass GetWalletCardsResponse::CREATOR()
	{
		return getStaticObjectField(
			"android.service.quickaccesswallet.GetWalletCardsResponse",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	GetWalletCardsResponse::GetWalletCardsResponse(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	GetWalletCardsResponse::GetWalletCardsResponse(__JniBaseClass arg0, jint arg1)
		: __JniBaseClass(
			"android.service.quickaccesswallet.GetWalletCardsResponse",
			"(Ljava/util/List;I)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	jint GetWalletCardsResponse::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jint GetWalletCardsResponse::getSelectedIndex()
	{
		return callMethod<jint>(
			"getSelectedIndex",
			"()I"
		);
	}
	__JniBaseClass GetWalletCardsResponse::getWalletCards()
	{
		return callObjectMethod(
			"getWalletCards",
			"()Ljava/util/List;"
		);
	}
	void GetWalletCardsResponse::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::service::quickaccesswallet

