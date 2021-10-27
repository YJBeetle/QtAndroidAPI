#include "./WallpaperColors.hpp"
#include "./WallpaperInfo.hpp"
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
#include "./WallpaperManager.hpp"

namespace android::app
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
	
	WallpaperManager::WallpaperManager(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject WallpaperManager::getInstance(android::content::Context arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.app.WallpaperManager",
			"getInstance",
			"(Landroid/content/Context;)Landroid/app/WallpaperManager;",
			arg0.__jniObject().object()
		);
	}
	void WallpaperManager::addOnColorsChangedListener(__JniBaseClass arg0, android::os::Handler arg1)
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
	void WallpaperManager::clearWallpaperOffsets(__JniBaseClass arg0)
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
	QAndroidJniObject WallpaperManager::getCropAndSetWallpaperIntent(android::net::Uri arg0)
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
	void WallpaperManager::removeOnColorsChangedListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"removeOnColorsChangedListener",
			"(Landroid/app/WallpaperManager$OnColorsChangedListener;)V",
			arg0.__jniObject().object()
		);
	}
	void WallpaperManager::sendWallpaperCommand(__JniBaseClass arg0, jstring arg1, jint arg2, jint arg3, jint arg4, android::os::Bundle arg5)
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
	void WallpaperManager::sendWallpaperCommand(__JniBaseClass arg0, const QString &arg1, jint arg2, jint arg3, jint arg4, android::os::Bundle arg5)
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
	jint WallpaperManager::setBitmap(android::graphics::Bitmap arg0, android::graphics::Rect arg1, jboolean arg2)
	{
		return __thiz.callMethod<jint>(
			"setBitmap",
			"(Landroid/graphics/Bitmap;Landroid/graphics/Rect;Z)I",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	jint WallpaperManager::setBitmap(android::graphics::Bitmap arg0, android::graphics::Rect arg1, jboolean arg2, jint arg3)
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
	void WallpaperManager::setBitmap(android::graphics::Bitmap arg0)
	{
		__thiz.callMethod<void>(
			"setBitmap",
			"(Landroid/graphics/Bitmap;)V",
			arg0.__jniObject().object()
		);
	}
	void WallpaperManager::setDisplayPadding(android::graphics::Rect arg0)
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
	jint WallpaperManager::setStream(java::io::InputStream arg0, android::graphics::Rect arg1, jboolean arg2)
	{
		return __thiz.callMethod<jint>(
			"setStream",
			"(Ljava/io/InputStream;Landroid/graphics/Rect;Z)I",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	jint WallpaperManager::setStream(java::io::InputStream arg0, android::graphics::Rect arg1, jboolean arg2, jint arg3)
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
	void WallpaperManager::setStream(java::io::InputStream arg0)
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
	void WallpaperManager::setWallpaperOffsets(__JniBaseClass arg0, jfloat arg1, jfloat arg2)
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
} // namespace android::app

