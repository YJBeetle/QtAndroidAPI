#pragma once

#include "../../graphics/drawable/Icon.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "./GetWalletCardsError.def.hpp"

namespace android::service::quickaccesswallet
{
	// Fields
	inline JObject GetWalletCardsError::CREATOR()
	{
		return getStaticObjectField(
			"android.service.quickaccesswallet.GetWalletCardsError",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline GetWalletCardsError::GetWalletCardsError(android::graphics::drawable::Icon arg0, JString arg1)
		: JObject(
			"android.service.quickaccesswallet.GetWalletCardsError",
			"(Landroid/graphics/drawable/Icon;Ljava/lang/CharSequence;)V",
			arg0.object(),
			arg1.object<jstring>()
		) {}
	
	// Methods
	inline jint GetWalletCardsError::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline android::graphics::drawable::Icon GetWalletCardsError::getIcon() const
	{
		return callObjectMethod(
			"getIcon",
			"()Landroid/graphics/drawable/Icon;"
		);
	}
	inline JString GetWalletCardsError::getMessage() const
	{
		return callObjectMethod(
			"getMessage",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline void GetWalletCardsError::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::service::quickaccesswallet

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::service::quickaccesswallet;
#endif
