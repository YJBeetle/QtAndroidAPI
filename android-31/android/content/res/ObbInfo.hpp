#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "./ObbInfo.def.hpp"

namespace android::content::res
{
	// Fields
	inline JObject ObbInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.content.res.ObbInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint ObbInfo::OBB_OVERLAY()
	{
		return getStaticField<jint>(
			"android.content.res.ObbInfo",
			"OBB_OVERLAY"
		);
	}
	inline JString ObbInfo::filename()
	{
		return getObjectField(
			"filename",
			"Ljava/lang/String;"
		);
	}
	inline jint ObbInfo::flags()
	{
		return getField<jint>(
			"flags"
		);
	}
	inline JString ObbInfo::packageName()
	{
		return getObjectField(
			"packageName",
			"Ljava/lang/String;"
		);
	}
	inline jint ObbInfo::version()
	{
		return getField<jint>(
			"version"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint ObbInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JString ObbInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void ObbInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::content::res

// Base class headers

