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
	
	// QJniObject forward
	GetWalletCardsError::GetWalletCardsError(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	GetWalletCardsError::GetWalletCardsError(android::graphics::drawable::Icon arg0, JString arg1)
		: JObject(
			"android.service.quickaccesswallet.GetWalletCardsError",
			"(Landroid/graphics/drawable/Icon;Ljava/lang/CharSequence;)V",
			arg0.object(),
			arg1.object<jstring>()
		) {}
	
	// Methods
	jint GetWalletCardsError::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	android::graphics::drawable::Icon GetWalletCardsError::getIcon() const
	{
		return callObjectMethod(
			"getIcon",
			"()Landroid/graphics/drawable/Icon;"
		);
	}
	JString GetWalletCardsError::getMessage() const
	{
		return callObjectMethod(
			"getMessage",
			"()Ljava/lang/CharSequence;"
		);
	}
	void GetWalletCardsError::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::service::quickaccesswallet

