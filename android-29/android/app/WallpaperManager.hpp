#pragma once

#ifndef ANDROID_APP_WALLPAPERMANAGER
#define ANDROID_APP_WALLPAPERMANAGER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::app
{
	class WallpaperColors;
}
namespace __jni_impl::android::app
{
	class WallpaperInfo;
}
namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::content
{
	class Intent;
}
namespace __jni_impl::android::graphics
{
	class Bitmap;
}
namespace __jni_impl::android::graphics
{
	class Rect;
}
namespace __jni_impl::android::graphics::drawable
{
	class Drawable;
}
namespace __jni_impl::android::net
{
	class Uri;
}
namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::os
{
	class Handler;
}
namespace __jni_impl::android::os
{
	class ParcelFileDescriptor;
}
namespace __jni_impl::java::io
{
	class InputStream;
}

namespace __jni_impl::android::app
{
	class WallpaperManager : public __JniBaseClass
	{
	public:
		// Fields
		static jstring ACTION_CHANGE_LIVE_WALLPAPER();
		static jstring ACTION_CROP_AND_SET_WALLPAPER();
		static jstring ACTION_LIVE_WALLPAPER_CHOOSER();
		static jstring COMMAND_DROP();
		static jstring COMMAND_SECONDARY_TAP();
		static jstring COMMAND_TAP();
		static jstring EXTRA_LIVE_WALLPAPER_COMPONENT();
		static jint FLAG_LOCK();
		static jint FLAG_SYSTEM();
		static jstring WALLPAPER_PREVIEW_META_DATA();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject getInstance(__jni_impl::android::content::Context arg0);
		void addOnColorsChangedListener(__jni_impl::__JniBaseClass arg0, __jni_impl::android::os::Handler arg1);
		void clear();
		void clear(jint arg0);
		void clearWallpaper();
		void clearWallpaperOffsets(__jni_impl::__JniBaseClass arg0);
		void forgetLoadedWallpaper();
		QAndroidJniObject getBuiltInDrawable();
		QAndroidJniObject getBuiltInDrawable(jint arg0);
		QAndroidJniObject getBuiltInDrawable(jint arg0, jint arg1, jboolean arg2, jfloat arg3, jfloat arg4);
		QAndroidJniObject getBuiltInDrawable(jint arg0, jint arg1, jboolean arg2, jfloat arg3, jfloat arg4, jint arg5);
		QAndroidJniObject getCropAndSetWallpaperIntent(__jni_impl::android::net::Uri arg0);
		jint getDesiredMinimumHeight();
		jint getDesiredMinimumWidth();
		QAndroidJniObject getDrawable();
		QAndroidJniObject getFastDrawable();
		QAndroidJniObject getWallpaperColors(jint arg0);
		QAndroidJniObject getWallpaperFile(jint arg0);
		jint getWallpaperId(jint arg0);
		QAndroidJniObject getWallpaperInfo();
		jboolean hasResourceWallpaper(jint arg0);
		jboolean isSetWallpaperAllowed();
		jboolean isWallpaperSupported();
		QAndroidJniObject peekDrawable();
		QAndroidJniObject peekFastDrawable();
		void removeOnColorsChangedListener(__jni_impl::__JniBaseClass arg0);
		void sendWallpaperCommand(__jni_impl::__JniBaseClass arg0, jstring arg1, jint arg2, jint arg3, jint arg4, __jni_impl::android::os::Bundle arg5);
		void sendWallpaperCommand(__jni_impl::__JniBaseClass arg0, const QString &arg1, jint arg2, jint arg3, jint arg4, __jni_impl::android::os::Bundle arg5);
		jint setBitmap(__jni_impl::android::graphics::Bitmap arg0, __jni_impl::android::graphics::Rect arg1, jboolean arg2);
		jint setBitmap(__jni_impl::android::graphics::Bitmap arg0, __jni_impl::android::graphics::Rect arg1, jboolean arg2, jint arg3);
		void setBitmap(__jni_impl::android::graphics::Bitmap arg0);
		void setDisplayPadding(__jni_impl::android::graphics::Rect arg0);
		jint setResource(jint arg0, jint arg1);
		void setResource(jint arg0);
		jint setStream(__jni_impl::java::io::InputStream arg0, __jni_impl::android::graphics::Rect arg1, jboolean arg2);
		jint setStream(__jni_impl::java::io::InputStream arg0, __jni_impl::android::graphics::Rect arg1, jboolean arg2, jint arg3);
		void setStream(__jni_impl::java::io::InputStream arg0);
		void setWallpaperOffsetSteps(jfloat arg0, jfloat arg1);
		void setWallpaperOffsets(__jni_impl::__JniBaseClass arg0, jfloat arg1, jfloat arg2);
		void suggestDesiredDimensions(jint arg0, jint arg1);
	};
} // namespace __jni_impl::android::app

#include "WallpaperColors.hpp"
#include "WallpaperInfo.hpp"
#include "../content/Context.hpp"
#include "../content/Intent.hpp"
#include "../graphics/Bitmap.hpp"
#include "../graphics/Rect.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "../net/Uri.hpp"
#include "../os/Bundle.hpp"
#include "../os/Handler.hpp"
#include "../os/ParcelFileDescriptor.hpp"
#include "../../java/io/InputStream.hpp"

namespace __jni_impl::android::app
{
	// Fields
	jstring WallpaperManager::ACTION_CHANGE_LIVE_WALLPAPER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.WallpaperManager",
			"ACTION_CHANGE_LIVE_WALLPAPER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring WallpaperManager::ACTION_CROP_AND_SET_WALLPAPER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.WallpaperManager",
			"ACTION_CROP_AND_SET_WALLPAPER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring WallpaperManager::ACTION_LIVE_WALLPAPER_CHOOSER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.WallpaperManager",
			"ACTION_LIVE_WALLPAPER_CHOOSER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring WallpaperManager::COMMAND_DROP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.WallpaperManager",
			"COMMAND_DROP",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring WallpaperManager::COMMAND_SECONDARY_TAP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.WallpaperManager",
			"COMMAND_SECONDARY_TAP",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring WallpaperManager::COMMAND_TAP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.WallpaperManager",
			"COMMAND_TAP",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring WallpaperManager::EXTRA_LIVE_WALLPAPER_COMPONENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.WallpaperManager",
			"EXTRA_LIVE_WALLPAPER_COMPONENT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint WallpaperManager::FLAG_LOCK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.WallpaperManager",
			"FLAG_LOCK"
		);
	}
	jint WallpaperManager::FLAG_SYSTEM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.WallpaperManager",
			"FLAG_SYSTEM"
		);
	}
	jstring WallpaperManager::WALLPAPER_PREVIEW_META_DATA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.WallpaperManager",
			"WALLPAPER_PREVIEW_META_DATA",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void WallpaperManager::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.WallpaperManager",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject WallpaperManager::getInstance(__jni_impl::android::content::Context arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.app.WallpaperManager",
			"getInstance",
			"(Landroid/content/Context;)Landroid/app/WallpaperManager;",
			arg0.__jniObject().object()
		);
	}
	void WallpaperManager::addOnColorsChangedListener(__jni_impl::__JniBaseClass arg0, __jni_impl::android::os::Handler arg1)
	{
		__thiz.callMethod<void>(
			"addOnColorsChangedListener",
			"(Landroid/app/WallpaperManager$OnColorsChangedListener;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void WallpaperManager::clear()
	{
		__thiz.callMethod<void>(
			"clear",
			"()V"
		);
	}
	void WallpaperManager::clear(jint arg0)
	{
		__thiz.callMethod<void>(
			"clear",
			"(I)V",
			arg0
		);
	}
	void WallpaperManager::clearWallpaper()
	{
		__thiz.callMethod<void>(
			"clearWallpaper",
			"()V"
		);
	}
	void WallpaperManager::clearWallpaperOffsets(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"clearWallpaperOffsets",
			"(Landroid/os/IBinder;)V",
			arg0.__jniObject().object()
		);
	}
	void WallpaperManager::forgetLoadedWallpaper()
	{
		__thiz.callMethod<void>(
			"forgetLoadedWallpaper",
			"()V"
		);
	}
	QAndroidJniObject WallpaperManager::getBuiltInDrawable()
	{
		return __thiz.callObjectMethod(
			"getBuiltInDrawable",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	QAndroidJniObject WallpaperManager::getBuiltInDrawable(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getBuiltInDrawable",
			"(I)Landroid/graphics/drawable/Drawable;",
			arg0
		);
	}
	QAndroidJniObject WallpaperManager::getBuiltInDrawable(jint arg0, jint arg1, jboolean arg2, jfloat arg3, jfloat arg4)
	{
		return __thiz.callObjectMethod(
			"getBuiltInDrawable",
			"(IIZFF)Landroid/graphics/drawable/Drawable;",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	QAndroidJniObject WallpaperManager::getBuiltInDrawable(jint arg0, jint arg1, jboolean arg2, jfloat arg3, jfloat arg4, jint arg5)
	{
		return __thiz.callObjectMethod(
			"getBuiltInDrawable",
			"(IIZFFI)Landroid/graphics/drawable/Drawable;",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	QAndroidJniObject WallpaperManager::getCropAndSetWallpaperIntent(__jni_impl::android::net::Uri arg0)
	{
		return __thiz.callObjectMethod(
			"getCropAndSetWallpaperIntent",
			"(Landroid/net/Uri;)Landroid/content/Intent;",
			arg0.__jniObject().object()
		);
	}
	jint WallpaperManager::getDesiredMinimumHeight()
	{
		return __thiz.callMethod<jint>(
			"getDesiredMinimumHeight",
			"()I"
		);
	}
	jint WallpaperManager::getDesiredMinimumWidth()
	{
		return __thiz.callMethod<jint>(
			"getDesiredMinimumWidth",
			"()I"
		);
	}
	QAndroidJniObject WallpaperManager::getDrawable()
	{
		return __thiz.callObjectMethod(
			"getDrawable",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	QAndroidJniObject WallpaperManager::getFastDrawable()
	{
		return __thiz.callObjectMethod(
			"getFastDrawable",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	QAndroidJniObject WallpaperManager::getWallpaperColors(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getWallpaperColors",
			"(I)Landroid/app/WallpaperColors;",
			arg0
		);
	}
	QAndroidJniObject WallpaperManager::getWallpaperFile(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getWallpaperFile",
			"(I)Landroid/os/ParcelFileDescriptor;",
			arg0
		);
	}
	jint WallpaperManager::getWallpaperId(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getWallpaperId",
			"(I)I",
			arg0
		);
	}
	QAndroidJniObject WallpaperManager::getWallpaperInfo()
	{
		return __thiz.callObjectMethod(
			"getWallpaperInfo",
			"()Landroid/app/WallpaperInfo;"
		);
	}
	jboolean WallpaperManager::hasResourceWallpaper(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"hasResourceWallpaper",
			"(I)Z",
			arg0
		);
	}
	jboolean WallpaperManager::isSetWallpaperAllowed()
	{
		return __thiz.callMethod<jboolean>(
			"isSetWallpaperAllowed",
			"()Z"
		);
	}
	jboolean WallpaperManager::isWallpaperSupported()
	{
		return __thiz.callMethod<jboolean>(
			"isWallpaperSupported",
			"()Z"
		);
	}
	QAndroidJniObject WallpaperManager::peekDrawable()
	{
		return __thiz.callObjectMethod(
			"peekDrawable",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	QAndroidJniObject WallpaperManager::peekFastDrawable()
	{
		return __thiz.callObjectMethod(
			"peekFastDrawable",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	void WallpaperManager::removeOnColorsChangedListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"removeOnColorsChangedListener",
			"(Landroid/app/WallpaperManager$OnColorsChangedListener;)V",
			arg0.__jniObject().object()
		);
	}
	void WallpaperManager::sendWallpaperCommand(__jni_impl::__JniBaseClass arg0, jstring arg1, jint arg2, jint arg3, jint arg4, __jni_impl::android::os::Bundle arg5)
	{
		__thiz.callMethod<void>(
			"sendWallpaperCommand",
			"(Landroid/os/IBinder;Ljava/lang/String;IIILandroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4,
			arg5.__jniObject().object()
		);
	}
	void WallpaperManager::sendWallpaperCommand(__jni_impl::__JniBaseClass arg0, const QString &arg1, jint arg2, jint arg3, jint arg4, __jni_impl::android::os::Bundle arg5)
	{
		__thiz.callMethod<void>(
			"sendWallpaperCommand",
			"(Landroid/os/IBinder;Ljava/lang/String;IIILandroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2,
			arg3,
			arg4,
			arg5.__jniObject().object()
		);
	}
	jint WallpaperManager::setBitmap(__jni_impl::android::graphics::Bitmap arg0, __jni_impl::android::graphics::Rect arg1, jboolean arg2)
	{
		return __thiz.callMethod<jint>(
			"setBitmap",
			"(Landroid/graphics/Bitmap;Landroid/graphics/Rect;Z)I",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	jint WallpaperManager::setBitmap(__jni_impl::android::graphics::Bitmap arg0, __jni_impl::android::graphics::Rect arg1, jboolean arg2, jint arg3)
	{
		return __thiz.callMethod<jint>(
			"setBitmap",
			"(Landroid/graphics/Bitmap;Landroid/graphics/Rect;ZI)I",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	void WallpaperManager::setBitmap(__jni_impl::android::graphics::Bitmap arg0)
	{
		__thiz.callMethod<void>(
			"setBitmap",
			"(Landroid/graphics/Bitmap;)V",
			arg0.__jniObject().object()
		);
	}
	void WallpaperManager::setDisplayPadding(__jni_impl::android::graphics::Rect arg0)
	{
		__thiz.callMethod<void>(
			"setDisplayPadding",
			"(Landroid/graphics/Rect;)V",
			arg0.__jniObject().object()
		);
	}
	jint WallpaperManager::setResource(jint arg0, jint arg1)
	{
		return __thiz.callMethod<jint>(
			"setResource",
			"(II)I",
			arg0,
			arg1
		);
	}
	void WallpaperManager::setResource(jint arg0)
	{
		__thiz.callMethod<void>(
			"setResource",
			"(I)V",
			arg0
		);
	}
	jint WallpaperManager::setStream(__jni_impl::java::io::InputStream arg0, __jni_impl::android::graphics::Rect arg1, jboolean arg2)
	{
		return __thiz.callMethod<jint>(
			"setStream",
			"(Ljava/io/InputStream;Landroid/graphics/Rect;Z)I",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	jint WallpaperManager::setStream(__jni_impl::java::io::InputStream arg0, __jni_impl::android::graphics::Rect arg1, jboolean arg2, jint arg3)
	{
		return __thiz.callMethod<jint>(
			"setStream",
			"(Ljava/io/InputStream;Landroid/graphics/Rect;ZI)I",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	void WallpaperManager::setStream(__jni_impl::java::io::InputStream arg0)
	{
		__thiz.callMethod<void>(
			"setStream",
			"(Ljava/io/InputStream;)V",
			arg0.__jniObject().object()
		);
	}
	void WallpaperManager::setWallpaperOffsetSteps(jfloat arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"setWallpaperOffsetSteps",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void WallpaperManager::setWallpaperOffsets(__jni_impl::__JniBaseClass arg0, jfloat arg1, jfloat arg2)
	{
		__thiz.callMethod<void>(
			"setWallpaperOffsets",
			"(Landroid/os/IBinder;FF)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void WallpaperManager::suggestDesiredDimensions(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"suggestDesiredDimensions",
			"(II)V",
			arg0,
			arg1
		);
	}
} // namespace __jni_impl::android::app

namespace android::app
{
	class WallpaperManager : public __jni_impl::android::app::WallpaperManager
	{
	public:
		WallpaperManager(QAndroidJniObject obj) { __thiz = obj; }
		WallpaperManager()
		{
			__constructor();
		}
	};
} // namespace android::app

#endif // ANDROID_APP_WALLPAPERMANAGER

