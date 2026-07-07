#pragma once

#include "../../../content/ComponentName.def.hpp"
#include "../../../content/Context.def.hpp"
#include "../../../content/pm/ServiceInfo.def.hpp"
#include "../../../os/Parcel.def.hpp"
#include "../../../../JString.hpp"
#include "./TvAdServiceInfo.def.hpp"

namespace android::media::tv::ad
{
	// Fields
	inline JObject TvAdServiceInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.media.tv.ad.TvAdServiceInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline TvAdServiceInfo::TvAdServiceInfo(android::content::Context arg0, android::content::ComponentName arg1)
		: JObject(
			"android.media.tv.ad.TvAdServiceInfo",
			"(Landroid/content/Context;Landroid/content/ComponentName;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline jint TvAdServiceInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JString TvAdServiceInfo::getId() const
	{
		return callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		);
	}
	inline android::content::pm::ServiceInfo TvAdServiceInfo::getServiceInfo() const
	{
		return callObjectMethod(
			"getServiceInfo",
			"()Landroid/content/pm/ServiceInfo;"
		);
	}
	inline JObject TvAdServiceInfo::getSupportedTypes() const
	{
		return callObjectMethod(
			"getSupportedTypes",
			"()Ljava/util/List;"
		);
	}
	inline void TvAdServiceInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::media::tv::ad

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media::tv::ad;
#endif
