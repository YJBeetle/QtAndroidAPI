#pragma once

#include "./WallpaperDescription_Builder.def.hpp"
#include "../../content/ComponentName.def.hpp"
#include "../../net/Uri.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../os/PersistableBundle.def.hpp"
#include "../../../JString.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./WallpaperDescription.def.hpp"

namespace android::app::wallpaper
{
	// Fields
	inline JObject WallpaperDescription::CREATOR()
	{
		return getStaticObjectField(
			"android.app.wallpaper.WallpaperDescription",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint WallpaperDescription::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean WallpaperDescription::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::content::ComponentName WallpaperDescription::getComponent() const
	{
		return callObjectMethod(
			"getComponent",
			"()Landroid/content/ComponentName;"
		);
	}
	inline android::os::PersistableBundle WallpaperDescription::getContent() const
	{
		return callObjectMethod(
			"getContent",
			"()Landroid/os/PersistableBundle;"
		);
	}
	inline JString WallpaperDescription::getContextDescription() const
	{
		return callObjectMethod(
			"getContextDescription",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline android::net::Uri WallpaperDescription::getContextUri() const
	{
		return callObjectMethod(
			"getContextUri",
			"()Landroid/net/Uri;"
		);
	}
	inline JObject WallpaperDescription::getDescription() const
	{
		return callObjectMethod(
			"getDescription",
			"()Ljava/util/List;"
		);
	}
	inline JString WallpaperDescription::getId() const
	{
		return callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		);
	}
	inline android::net::Uri WallpaperDescription::getThumbnail() const
	{
		return callObjectMethod(
			"getThumbnail",
			"()Landroid/net/Uri;"
		);
	}
	inline JString WallpaperDescription::getTitle() const
	{
		return callObjectMethod(
			"getTitle",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline jint WallpaperDescription::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline android::app::wallpaper::WallpaperDescription_Builder WallpaperDescription::toBuilder() const
	{
		return callObjectMethod(
			"toBuilder",
			"()Landroid/app/wallpaper/WallpaperDescription$Builder;"
		);
	}
	inline JString WallpaperDescription::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void WallpaperDescription::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
