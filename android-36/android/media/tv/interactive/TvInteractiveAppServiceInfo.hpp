#pragma once

#include "../../../content/ComponentName.def.hpp"
#include "../../../content/Context.def.hpp"
#include "../../../content/pm/ServiceInfo.def.hpp"
#include "../../../os/Parcel.def.hpp"
#include "../../../../JString.hpp"
#include "./TvInteractiveAppServiceInfo.def.hpp"

namespace android::media::tv::interactive
{
	// Fields
	inline JObject TvInteractiveAppServiceInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.media.tv.interactive.TvInteractiveAppServiceInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint TvInteractiveAppServiceInfo::INTERACTIVE_APP_TYPE_ATSC()
	{
		return getStaticField<jint>(
			"android.media.tv.interactive.TvInteractiveAppServiceInfo",
			"INTERACTIVE_APP_TYPE_ATSC"
		);
	}
	inline jint TvInteractiveAppServiceInfo::INTERACTIVE_APP_TYPE_GINGA()
	{
		return getStaticField<jint>(
			"android.media.tv.interactive.TvInteractiveAppServiceInfo",
			"INTERACTIVE_APP_TYPE_GINGA"
		);
	}
	inline jint TvInteractiveAppServiceInfo::INTERACTIVE_APP_TYPE_HBBTV()
	{
		return getStaticField<jint>(
			"android.media.tv.interactive.TvInteractiveAppServiceInfo",
			"INTERACTIVE_APP_TYPE_HBBTV"
		);
	}
	inline jint TvInteractiveAppServiceInfo::INTERACTIVE_APP_TYPE_OTHER()
	{
		return getStaticField<jint>(
			"android.media.tv.interactive.TvInteractiveAppServiceInfo",
			"INTERACTIVE_APP_TYPE_OTHER"
		);
	}
	inline jint TvInteractiveAppServiceInfo::INTERACTIVE_APP_TYPE_TARGETED_AD()
	{
		return getStaticField<jint>(
			"android.media.tv.interactive.TvInteractiveAppServiceInfo",
			"INTERACTIVE_APP_TYPE_TARGETED_AD"
		);
	}
	
	// Constructors
	inline TvInteractiveAppServiceInfo::TvInteractiveAppServiceInfo(android::content::Context arg0, android::content::ComponentName arg1)
		: JObject(
			"android.media.tv.interactive.TvInteractiveAppServiceInfo",
			"(Landroid/content/Context;Landroid/content/ComponentName;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline jint TvInteractiveAppServiceInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JObject TvInteractiveAppServiceInfo::getCustomSupportedTypes() const
	{
		return callObjectMethod(
			"getCustomSupportedTypes",
			"()Ljava/util/List;"
		);
	}
	inline JString TvInteractiveAppServiceInfo::getId() const
	{
		return callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		);
	}
	inline android::content::pm::ServiceInfo TvInteractiveAppServiceInfo::getServiceInfo() const
	{
		return callObjectMethod(
			"getServiceInfo",
			"()Landroid/content/pm/ServiceInfo;"
		);
	}
	inline jint TvInteractiveAppServiceInfo::getSupportedTypes() const
	{
		return callMethod<jint>(
			"getSupportedTypes",
			"()I"
		);
	}
	inline void TvInteractiveAppServiceInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::media::tv::interactive

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media::tv::interactive;
#endif
