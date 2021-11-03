#include "../../app/PendingIntent.hpp"
#include "../../graphics/drawable/Icon.hpp"
#include "../../os/Parcel.hpp"
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
	jint WalletCard::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	android::graphics::drawable::Icon WalletCard::getCardIcon()
	{
		return callObjectMethod(
			"getCardIcon",
			"()Landroid/graphics/drawable/Icon;"
		);
	}
	jstring WalletCard::getCardId()
	{
		return callObjectMethod(
			"getCardId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	android::graphics::drawable::Icon WalletCard::getCardImage()
	{
		return callObjectMethod(
			"getCardImage",
			"()Landroid/graphics/drawable/Icon;"
		);
	}
	jstring WalletCard::getCardLabel()
	{
		return callObjectMethod(
			"getCardLabel",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jstring WalletCard::getContentDescription()
	{
		return callObjectMethod(
			"getContentDescription",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	android::app::PendingIntent WalletCard::getPendingIntent()
	{
		return callObjectMethod(
			"getPendingIntent",
			"()Landroid/app/PendingIntent;"
		);
	}
	void WalletCard::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::service::quickaccesswallet

