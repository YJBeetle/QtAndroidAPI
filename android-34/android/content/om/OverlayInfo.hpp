#pragma once

#include "./OverlayIdentifier.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./OverlayInfo.def.hpp"

namespace android::content::om
{
	// Fields
	inline JObject OverlayInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.content.om.OverlayInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint OverlayInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean OverlayInfo::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::content::om::OverlayIdentifier OverlayInfo::getOverlayIdentifier() const
	{
		return callObjectMethod(
			"getOverlayIdentifier",
			"()Landroid/content/om/OverlayIdentifier;"
		);
	}
	inline JString OverlayInfo::getOverlayName() const
	{
		return callObjectMethod(
			"getOverlayName",
			"()Ljava/lang/String;"
		);
	}
	inline JString OverlayInfo::getTargetOverlayableName() const
	{
		return callObjectMethod(
			"getTargetOverlayableName",
			"()Ljava/lang/String;"
		);
	}
	inline JString OverlayInfo::getTargetPackageName() const
	{
		return callObjectMethod(
			"getTargetPackageName",
			"()Ljava/lang/String;"
		);
	}
	inline jint OverlayInfo::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString OverlayInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void OverlayInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
