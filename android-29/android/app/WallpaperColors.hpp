#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::graphics
{
	class Bitmap;
}
namespace __jni_impl::android::graphics
{
	class Color;
}
namespace __jni_impl::android::graphics::drawable
{
	class Drawable;
}
namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::app
{
	class WallpaperColors : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor(__jni_impl::android::os::Parcel arg0);
		void __constructor(__jni_impl::android::graphics::Color arg0, __jni_impl::android::graphics::Color arg1, __jni_impl::android::graphics::Color arg2);
		
		// Methods
		static QAndroidJniObject fromBitmap(__jni_impl::android::graphics::Bitmap arg0);
		static QAndroidJniObject fromDrawable(__jni_impl::android::graphics::drawable::Drawable arg0);
		jint describeContents();
		jboolean equals(jobject arg0);
		QAndroidJniObject getPrimaryColor();
		QAndroidJniObject getSecondaryColor();
		QAndroidJniObject getTertiaryColor();
		jint hashCode();
		jstring toString();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::app

#include "../graphics/Bitmap.hpp"
#include "../graphics/Color.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "../os/Parcel.hpp"

namespace __jni_impl::android::app
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
	
	// Constructors
	void WallpaperColors::__constructor(__jni_impl::android::os::Parcel arg0)
	{
		__thiz = QAndroidJniObject(
			"android.app.WallpaperColors",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object()
		);
	}
	void WallpaperColors::__constructor(__jni_impl::android::graphics::Color arg0, __jni_impl::android::graphics::Color arg1, __jni_impl::android::graphics::Color arg2)
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
	QAndroidJniObject WallpaperColors::fromBitmap(__jni_impl::android::graphics::Bitmap arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.app.WallpaperColors",
			"fromBitmap",
			"(Landroid/graphics/Bitmap;)Landroid/app/WallpaperColors;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject WallpaperColors::fromDrawable(__jni_impl::android::graphics::drawable::Drawable arg0)
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
	void WallpaperColors::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::app

namespace android::app
{
	class WallpaperColors : public __jni_impl::android::app::WallpaperColors
	{
	public:
		WallpaperColors(QAndroidJniObject obj) { __thiz = obj; }
		WallpaperColors(__jni_impl::android::os::Parcel arg0)
		{
			__constructor(
				arg0);
		}
		WallpaperColors(__jni_impl::android::graphics::Color arg0, __jni_impl::android::graphics::Color arg1, __jni_impl::android::graphics::Color arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace android::app

