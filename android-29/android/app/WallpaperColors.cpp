#include "../graphics/Bitmap.hpp"
#include "../graphics/Color.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "../os/Parcel.hpp"
#include "./WallpaperColors.hpp"

namespace android::app
{
	// Fields
	QAndroidJniObject WallpaperColors::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.WallpaperColors",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	WallpaperColors::WallpaperColors(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	WallpaperColors::WallpaperColors(android::os::Parcel &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.app.WallpaperColors",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object()
		);
	}
	WallpaperColors::WallpaperColors(android::graphics::Color &arg0, android::graphics::Color &arg1, android::graphics::Color &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.app.WallpaperColors",
			"(Landroid/graphics/Color;Landroid/graphics/Color;Landroid/graphics/Color;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject WallpaperColors::fromBitmap(android::graphics::Bitmap arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.app.WallpaperColors",
			"fromBitmap",
			"(Landroid/graphics/Bitmap;)Landroid/app/WallpaperColors;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject WallpaperColors::fromDrawable(android::graphics::drawable::Drawable arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.app.WallpaperColors",
			"fromDrawable",
			"(Landroid/graphics/drawable/Drawable;)Landroid/app/WallpaperColors;",
			arg0.__jniObject().object()
		);
	}
	jint WallpaperColors::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean WallpaperColors::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject WallpaperColors::getPrimaryColor()
	{
		return __thiz.callObjectMethod(
			"getPrimaryColor",
			"()Landroid/graphics/Color;"
		);
	}
	QAndroidJniObject WallpaperColors::getSecondaryColor()
	{
		return __thiz.callObjectMethod(
			"getSecondaryColor",
			"()Landroid/graphics/Color;"
		);
	}
	QAndroidJniObject WallpaperColors::getTertiaryColor()
	{
		return __thiz.callObjectMethod(
			"getTertiaryColor",
			"()Landroid/graphics/Color;"
		);
	}
	jint WallpaperColors::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring WallpaperColors::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void WallpaperColors::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::app

