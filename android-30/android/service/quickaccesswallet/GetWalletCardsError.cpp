#include "../../graphics/drawable/Icon.hpp"
#include "../../os/Parcel.hpp"
#include "./GetWalletCardsError.hpp"

namespace android::service::quickaccesswallet
{
	// Fields
	__JniBaseClass GetWalletCardsError::CREATOR()
	{
		return getStaticObjectField(
			"android.service.quickaccesswallet.GetWalletCardsError",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	GetWalletCardsError::GetWalletCardsError(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	GetWalletCardsError::GetWalletCardsError(android::graphics::drawable::Icon arg0, jstring arg1)
		: __JniBaseClass(
			"android.service.quickaccesswallet.GetWalletCardsError",
			"(Landroid/graphics/drawable/Icon;Ljava/lang/CharSequence;)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	jint GetWalletCardsError::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	android::graphics::drawable::Icon GetWalletCardsError::getIcon()
	{
		return callObjectMethod(
			"getIcon",
			"()Landroid/graphics/drawable/Icon;"
		);
	}
	jstring GetWalletCardsError::getMessage()
	{
		return callObjectMethod(
			"getMessage",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	void GetWalletCardsError::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::service::quickaccesswallet

