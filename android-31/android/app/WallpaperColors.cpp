#include "../graphics/Bitmap.hpp"
#include "../graphics/Color.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "../os/Parcel.hpp"
#include "./WallpaperColors.hpp"

namespace android::app
{
	// Fields
	__JniBaseClass WallpaperColors::CREATOR()
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
	
	// QJniObject forward
	WallpaperColors::WallpaperColors(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	WallpaperColors::WallpaperColors(android::os::Parcel arg0)
		: __JniBaseClass(
			"android.app.WallpaperColors",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	WallpaperColors::WallpaperColors(android::graphics::Color arg0, android::graphics::Color arg1, android::graphics::Color arg2)
		: __JniBaseClass(
			"android.app.WallpaperColors",
			"(Landroid/graphics/Color;Landroid/graphics/Color;Landroid/graphics/Color;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		) {}
	WallpaperColors::WallpaperColors(android::graphics::Color arg0, android::graphics::Color arg1, android::graphics::Color arg2, jint arg3)
		: __JniBaseClass(
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
	jint WallpaperColors::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean WallpaperColors::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint WallpaperColors::getColorHints()
	{
		return callMethod<jint>(
			"getColorHints",
			"()I"
		);
	}
	android::graphics::Color WallpaperColors::getPrimaryColor()
	{
		return callObjectMethod(
			"getPrimaryColor",
			"()Landroid/graphics/Color;"
		);
	}
	android::graphics::Color WallpaperColors::getSecondaryColor()
	{
		return callObjectMethod(
			"getSecondaryColor",
			"()Landroid/graphics/Color;"
		);
	}
	android::graphics::Color WallpaperColors::getTertiaryColor()
	{
		return callObjectMethod(
			"getTertiaryColor",
			"()Landroid/graphics/Color;"
		);
	}
	jint WallpaperColors::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring WallpaperColors::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void WallpaperColors::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app

