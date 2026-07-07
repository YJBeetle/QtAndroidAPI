#pragma once

#include "../WallpaperInfo.def.hpp"
#include "./WallpaperDescription.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./WallpaperInstance.def.hpp"

namespace android::app::wallpaper
{
	// Fields
	inline JObject WallpaperInstance::CREATOR()
	{
		return getStaticObjectField(
			"android.app.wallpaper.WallpaperInstance",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline WallpaperInstance::WallpaperInstance(android::app::WallpaperInfo arg0, android::app::wallpaper::WallpaperDescription arg1)
		: JObject(
			"android.app.wallpaper.WallpaperInstance",
			"(Landroid/app/WallpaperInfo;Landroid/app/wallpaper/WallpaperDescription;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline jint WallpaperInstance::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean WallpaperInstance::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::app::wallpaper::WallpaperDescription WallpaperInstance::getDescription() const
	{
		return callObjectMethod(
			"getDescription",
			"()Landroid/app/wallpaper/WallpaperDescription;"
		);
	}
	inline JString WallpaperInstance::getId() const
	{
		return callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		);
	}
	inline android::app::WallpaperInfo WallpaperInstance::getInfo() const
	{
		return callObjectMethod(
			"getInfo",
			"()Landroid/app/WallpaperInfo;"
		);
	}
	inline jint WallpaperInstance::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline void WallpaperInstance::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app::wallpaper

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::wallpaper;
#endif
