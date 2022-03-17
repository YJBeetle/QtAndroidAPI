#pragma once

#include "../graphics/Bitmap.def.hpp"
#include "../graphics/Color.def.hpp"
#include "../graphics/drawable/Drawable.def.hpp"
#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./WallpaperColors.def.hpp"

namespace android::app
{
	// Fields
	inline JObject WallpaperColors::CREATOR()
	{
		return getStaticObjectField(
			"android.app.WallpaperColors",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline WallpaperColors::WallpaperColors(android::os::Parcel arg0)
		: JObject(
			"android.app.WallpaperColors",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	inline WallpaperColors::WallpaperColors(android::graphics::Color arg0, android::graphics::Color arg1, android::graphics::Color arg2)
		: JObject(
			"android.app.WallpaperColors",
			"(Landroid/graphics/Color;Landroid/graphics/Color;Landroid/graphics/Color;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		) {}
	
	// Methods
	inline android::app::WallpaperColors WallpaperColors::fromBitmap(android::graphics::Bitmap arg0)
	{
		return callStaticObjectMethod(
			"android.app.WallpaperColors",
			"fromBitmap",
			"(Landroid/graphics/Bitmap;)Landroid/app/WallpaperColors;",
			arg0.object()
		);
	}
	inline android::app::WallpaperColors WallpaperColors::fromDrawable(android::graphics::drawable::Drawable arg0)
	{
		return callStaticObjectMethod(
			"android.app.WallpaperColors",
			"fromDrawable",
			"(Landroid/graphics/drawable/Drawable;)Landroid/app/WallpaperColors;",
			arg0.object()
		);
	}
	inline jint WallpaperColors::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean WallpaperColors::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::graphics::Color WallpaperColors::getPrimaryColor() const
	{
		return callObjectMethod(
			"getPrimaryColor",
			"()Landroid/graphics/Color;"
		);
	}
	inline android::graphics::Color WallpaperColors::getSecondaryColor() const
	{
		return callObjectMethod(
			"getSecondaryColor",
			"()Landroid/graphics/Color;"
		);
	}
	inline android::graphics::Color WallpaperColors::getTertiaryColor() const
	{
		return callObjectMethod(
			"getTertiaryColor",
			"()Landroid/graphics/Color;"
		);
	}
	inline jint WallpaperColors::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString WallpaperColors::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void WallpaperColors::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app;
#endif
