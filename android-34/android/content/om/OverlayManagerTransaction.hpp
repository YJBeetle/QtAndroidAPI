#pragma once

#include "./FabricatedOverlay.def.hpp"
#include "./OverlayIdentifier.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "./OverlayManagerTransaction.def.hpp"

namespace android::content::om
{
	// Fields
	inline JObject OverlayManagerTransaction::CREATOR()
	{
		return getStaticObjectField(
			"android.content.om.OverlayManagerTransaction",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::content::om::OverlayManagerTransaction OverlayManagerTransaction::newInstance()
	{
		return callStaticObjectMethod(
			"android.content.om.OverlayManagerTransaction",
			"newInstance",
			"()Landroid/content/om/OverlayManagerTransaction;"
		);
	}
	inline jint OverlayManagerTransaction::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline void OverlayManagerTransaction::registerFabricatedOverlay(android::content::om::FabricatedOverlay arg0) const
	{
		callMethod<void>(
			"registerFabricatedOverlay",
			"(Landroid/content/om/FabricatedOverlay;)V",
			arg0.object()
		);
	}
	inline JString OverlayManagerTransaction::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void OverlayManagerTransaction::unregisterFabricatedOverlay(android::content::om::OverlayIdentifier arg0) const
	{
		callMethod<void>(
			"unregisterFabricatedOverlay",
			"(Landroid/content/om/OverlayIdentifier;)V",
			arg0.object()
		);
	}
	inline void OverlayManagerTransaction::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content::om

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::content::om;
#endif
