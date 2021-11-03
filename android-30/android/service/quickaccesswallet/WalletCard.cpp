#include "../../app/PendingIntent.hpp"
#include "../../graphics/drawable/Icon.hpp"
#include "../../os/Parcel.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "./WalletCard.hpp"

namespace android::service::quickaccesswallet
{
	// Fields
	JObject WalletCard::CREATOR()
	{
		return getStaticObjectField(
			"android.service.quickaccesswallet.WalletCard",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	WalletCard::WalletCard(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint WalletCard::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	android::graphics::drawable::Icon WalletCard::getCardIcon() const
	{
		return callObjectMethod(
			"getCardIcon",
			"()Landroid/graphics/drawable/Icon;"
		);
	}
	JString WalletCard::getCardId() const
	{
		return callObjectMethod(
			"getCardId",
			"()Ljava/lang/String;"
		);
	}
	android::graphics::drawable::Icon WalletCard::getCardImage() const
	{
		return callObjectMethod(
			"getCardImage",
			"()Landroid/graphics/drawable/Icon;"
		);
	}
	JString WalletCard::getCardLabel() const
	{
		return callObjectMethod(
			"getCardLabel",
			"()Ljava/lang/CharSequence;"
		);
	}
	JString WalletCard::getContentDescription() const
	{
		return callObjectMethod(
			"getContentDescription",
			"()Ljava/lang/CharSequence;"
		);
	}
	android::app::PendingIntent WalletCard::getPendingIntent() const
	{
		return callObjectMethod(
			"getPendingIntent",
			"()Landroid/app/PendingIntent;"
		);
	}
	void WalletCard::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::service::quickaccesswallet

