#include "../graphics/Bitmap.hpp"
#include "../graphics/Color.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "../os/Parcel.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./WallpaperColors.hpp"

namespace android::app
{
	// Fields
	JObject WallpaperColors::CREATOR()
	{
		return getStaticObjectField(
			"android.app.WallpaperColors",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint WallpaperColors::HINT_SUPPORTS_DARK_TEXT()
	{
		return getStaticField<jint>(
			"android.app.WallpaperColors",
			"HINT_SUPPORTS_DARK_TEXT"
		);
	}
	jint WallpaperColors::HINT_SUPPORTS_DARK_THEME()
	{
		return getStaticField<jint>(
			"android.app.WallpaperColors",
			"HINT_SUPPORTS_DARK_THEME"
		);
	}
	
	// Constructors
	WallpaperColors::WallpaperColors(android::os::Parcel arg0)
		: JObject(
			"android.app.WallpaperColors",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	WallpaperColors::WallpaperColors(android::graphics::Color arg0, android::graphics::Color arg1, android::graphics::Color arg2)
		: JObject(
			"android.app.WallpaperColors",
			"(Landroid/graphics/Color;Landroid/graphics/Color;Landroid/graphics/Color;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		) {}
	WallpaperColors::WallpaperColors(android::graphics::Color arg0, android::graphics::Color arg1, android::graphics::Color arg2, jint arg3)
		: JObject(
			"android.app.WallpaperColors",
			"(Landroid/graphics/Color;Landroid/graphics/Color;Landroid/graphics/Color;I)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3
		) {}
	
	// Methods
	android::app::WallpaperColors WallpaperColors::fromBitmap(android::graphics::Bitmap arg0)
	{
		return callStaticObjectMethod(
			"android.app.WallpaperColors",
			"fromBitmap",
			"(Landroid/graphics/Bitmap;)Landroid/app/WallpaperColors;",
			arg0.object()
		);
	}
	android::app::WallpaperColors WallpaperColors::fromDrawable(android::graphics::drawable::Drawable arg0)
	{
		return callStaticObjectMethod(
			"android.app.WallpaperColors",
			"fromDrawable",
			"(Landroid/graphics/drawable/Drawable;)Landroid/app/WallpaperColors;",
			arg0.object()
		);
	}
	jint WallpaperColors::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean WallpaperColors::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint WallpaperColors::getColorHints() const
	{
		return callMethod<jint>(
			"getColorHints",
			"()I"
		);
	}
	android::graphics::Color WallpaperColors::getPrimaryColor() const
	{
		return callObjectMethod(
			"getPrimaryColor",
			"()Landroid/graphics/Color;"
		);
	}
	android::graphics::Color WallpaperColors::getSecondaryColor() const
	{
		return callObjectMethod(
			"getSecondaryColor",
			"()Landroid/graphics/Color;"
		);
	}
	android::graphics::Color WallpaperColors::getTertiaryColor() const
	{
		return callObjectMethod(
			"getTertiaryColor",
			"()Landroid/graphics/Color;"
		);
	}
	jint WallpaperColors::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString WallpaperColors::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void WallpaperColors::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app

