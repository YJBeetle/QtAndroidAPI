#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "./AitInfo.def.hpp"

namespace android::media::tv
{
	// Fields
	inline JObject AitInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.media.tv.AitInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline AitInfo::AitInfo(jint arg0, jint arg1)
		: JObject(
			"android.media.tv.AitInfo",
			"(II)V",
			arg0,
			arg1
		) {}
	
	// Methods
	inline jint AitInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jint AitInfo::getType() const
	{
		return callMethod<jint>(
			"getType",
			"()I"
		);
	}
	inline jint AitInfo::getVersion() const
	{
		return callMethod<jint>(
			"getVersion",
			"()I"
		);
	}
	inline JString AitInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void AitInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::media::tv

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media::tv;
#endif
