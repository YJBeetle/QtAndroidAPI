#include "../../graphics/drawable/Icon.hpp"
#include "../../os/Parcel.hpp"
#include "../../../JString.hpp"
#include "./GetWalletCardsError.hpp"

namespace android::service::quickaccesswallet
{
	// Fields
	JObject GetWalletCardsError::CREATOR()
	{
		return getStaticObjectField(
			"android.service.quickaccesswallet.GetWalletCardsError",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	GetWalletCardsError::GetWalletCardsError(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	GetWalletCardsError::GetWalletCardsError(android::graphics::drawable::Icon arg0, JString arg1)
		: JObject(
			"android.service.quickaccesswallet.GetWalletCardsError",
			"(Landroid/graphics/drawable/Icon;Ljava/lang/CharSequence;)V",
			arg0.object(),
			arg1.object<jstring>()
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
	JString GetWalletCardsError::getMessage()
	{
		return callObjectMethod(
			"getMessage",
			"()Ljava/lang/CharSequence;"
		);
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

