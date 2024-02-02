#pragma once

#include "./WallpaperColors.def.hpp"
#include "./WallpaperInfo.def.hpp"
#include "../content/Context.def.hpp"
#include "../content/Intent.def.hpp"
#include "../graphics/Bitmap.def.hpp"
#include "../graphics/Rect.def.hpp"
#include "../graphics/drawable/Drawable.def.hpp"
#include "../net/Uri.def.hpp"
#include "../os/Bundle.def.hpp"
#include "../os/Handler.def.hpp"
#include "../os/ParcelFileDescriptor.def.hpp"
#include "../../java/io/InputStream.def.hpp"
#include "../../JString.hpp"
#include "./WallpaperManager.def.hpp"

namespace android::app
{
	// Fields
	inline JString WallpaperManager::ACTION_CHANGE_LIVE_WALLPAPER()
	{
		return getStaticObjectField(
			"android.app.WallpaperManager",
			"ACTION_CHANGE_LIVE_WALLPAPER",
			"Ljava/lang/String;"
		);
	}
	inline JString WallpaperManager::ACTION_CROP_AND_SET_WALLPAPER()
	{
		return getStaticObjectField(
			"android.app.WallpaperManager",
			"ACTION_CROP_AND_SET_WALLPAPER",
			"Ljava/lang/String;"
		);
	}
	inline JString WallpaperManager::ACTION_LIVE_WALLPAPER_CHOOSER()
	{
		return getStaticObjectField(
			"android.app.WallpaperManager",
			"ACTION_LIVE_WALLPAPER_CHOOSER",
			"Ljava/lang/String;"
		);
	}
	inline JString WallpaperManager::COMMAND_DROP()
	{
		return getStaticObjectField(
			"android.app.WallpaperManager",
			"COMMAND_DROP",
			"Ljava/lang/String;"
		);
	}
	inline JString WallpaperManager::COMMAND_SECONDARY_TAP()
	{
		return getStaticObjectField(
			"android.app.WallpaperManager",
			"COMMAND_SECONDARY_TAP",
			"Ljava/lang/String;"
		);
	}
	inline JString WallpaperManager::COMMAND_TAP()
	{
		return getStaticObjectField(
			"android.app.WallpaperManager",
			"COMMAND_TAP",
			"Ljava/lang/String;"
		);
	}
	inline JString WallpaperManager::EXTRA_LIVE_WALLPAPER_COMPONENT()
	{
		return getStaticObjectField(
			"android.app.WallpaperManager",
			"EXTRA_LIVE_WALLPAPER_COMPONENT",
			"Ljava/lang/String;"
		);
	}
	inline jint WallpaperManager::FLAG_LOCK()
	{
		return getStaticField<jint>(
			"android.app.WallpaperManager",
			"FLAG_LOCK"
		);
	}
	inline jint WallpaperManager::FLAG_SYSTEM()
	{
		return getStaticField<jint>(
			"android.app.WallpaperManager",
			"FLAG_SYSTEM"
		);
	}
	inline JString WallpaperManager::WALLPAPER_PREVIEW_META_DATA()
	{
		return getStaticObjectField(
			"android.app.WallpaperManager",
			"WALLPAPER_PREVIEW_META_DATA",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::app::WallpaperManager WallpaperManager::getInstance(android::content::Context arg0)
	{
		return callStaticObjectMethod(
			"android.app.WallpaperManager",
			"getInstance",
			"(Landroid/content/Context;)Landroid/app/WallpaperManager;",
			arg0.object()
		);
	}
	inline void WallpaperManager::addOnColorsChangedListener(JObject arg0, android::os::Handler arg1) const
	{
		callMethod<void>(
			"addOnColorsChangedListener",
			"(Landroid/app/WallpaperManager$OnColorsChangedListener;Landroid/os/Handler;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void WallpaperManager::clear() const
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	inline void WallpaperManager::clear(jint arg0) const
	{
		callMethod<void>(
			"clear",
			"(I)V",
			arg0
		);
	}
	inline void WallpaperManager::clearWallpaper() const
	{
		callMethod<void>(
			"clearWallpaper",
			"()V"
		);
	}
	inline void WallpaperManager::clearWallpaperOffsets(JObject arg0) const
	{
		callMethod<void>(
			"clearWallpaperOffsets",
			"(Landroid/os/IBinder;)V",
			arg0.object()
		);
	}
	inline void WallpaperManager::forgetLoadedWallpaper() const
	{
		callMethod<void>(
			"forgetLoadedWallpaper",
			"()V"
		);
	}
	inline android::graphics::drawable::Drawable WallpaperManager::getBuiltInDrawable() const
	{
		return callObjectMethod(
			"getBuiltInDrawable",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	inline android::graphics::drawable::Drawable WallpaperManager::getBuiltInDrawable(jint arg0) const
	{
		return callObjectMethod(
			"getBuiltInDrawable",
			"(I)Landroid/graphics/drawable/Drawable;",
			arg0
		);
	}
	inline android::graphics::drawable::Drawable WallpaperManager::getBuiltInDrawable(jint arg0, jint arg1, jboolean arg2, jfloat arg3, jfloat arg4) const
	{
		return callObjectMethod(
			"getBuiltInDrawable",
			"(IIZFF)Landroid/graphics/drawable/Drawable;",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	inline android::graphics::drawable::Drawable WallpaperManager::getBuiltInDrawable(jint arg0, jint arg1, jboolean arg2, jfloat arg3, jfloat arg4, jint arg5) const
	{
		return callObjectMethod(
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
	inline android::content::Intent WallpaperManager::getCropAndSetWallpaperIntent(android::net::Uri arg0) const
	{
		return callObjectMethod(
			"getCropAndSetWallpaperIntent",
			"(Landroid/net/Uri;)Landroid/content/Intent;",
			arg0.object()
		);
	}
	inline jint WallpaperManager::getDesiredMinimumHeight() const
	{
		return callMethod<jint>(
			"getDesiredMinimumHeight",
			"()I"
		);
	}
	inline jint WallpaperManager::getDesiredMinimumWidth() const
	{
		return callMethod<jint>(
			"getDesiredMinimumWidth",
			"()I"
		);
	}
	inline android::graphics::drawable::Drawable WallpaperManager::getDrawable() const
	{
		return callObjectMethod(
			"getDrawable",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	inline android::graphics::drawable::Drawable WallpaperManager::getDrawable(jint arg0) const
	{
		return callObjectMethod(
			"getDrawable",
			"(I)Landroid/graphics/drawable/Drawable;",
			arg0
		);
	}
	inline android::graphics::drawable::Drawable WallpaperManager::getFastDrawable() const
	{
		return callObjectMethod(
			"getFastDrawable",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	inline android::graphics::drawable::Drawable WallpaperManager::getFastDrawable(jint arg0) const
	{
		return callObjectMethod(
			"getFastDrawable",
			"(I)Landroid/graphics/drawable/Drawable;",
			arg0
		);
	}
	inline android::app::WallpaperColors WallpaperManager::getWallpaperColors(jint arg0) const
	{
		return callObjectMethod(
			"getWallpaperColors",
			"(I)Landroid/app/WallpaperColors;",
			arg0
		);
	}
	inline android::os::ParcelFileDescriptor WallpaperManager::getWallpaperFile(jint arg0) const
	{
		return callObjectMethod(
			"getWallpaperFile",
			"(I)Landroid/os/ParcelFileDescriptor;",
			arg0
		);
	}
	inline jint WallpaperManager::getWallpaperId(jint arg0) const
	{
		return callMethod<jint>(
			"getWallpaperId",
			"(I)I",
			arg0
		);
	}
	inline android::app::WallpaperInfo WallpaperManager::getWallpaperInfo() const
	{
		return callObjectMethod(
			"getWallpaperInfo",
			"()Landroid/app/WallpaperInfo;"
		);
	}
	inline android::app::WallpaperInfo WallpaperManager::getWallpaperInfo(jint arg0) const
	{
		return callObjectMethod(
			"getWallpaperInfo",
			"(I)Landroid/app/WallpaperInfo;",
			arg0
		);
	}
	inline jboolean WallpaperManager::hasResourceWallpaper(jint arg0) const
	{
		return callMethod<jboolean>(
			"hasResourceWallpaper",
			"(I)Z",
			arg0
		);
	}
	inline jboolean WallpaperManager::isSetWallpaperAllowed() const
	{
		return callMethod<jboolean>(
			"isSetWallpaperAllowed",
			"()Z"
		);
	}
	inline jboolean WallpaperManager::isWallpaperSupported() const
	{
		return callMethod<jboolean>(
			"isWallpaperSupported",
			"()Z"
		);
	}
	inline android::graphics::drawable::Drawable WallpaperManager::peekDrawable() const
	{
		return callObjectMethod(
			"peekDrawable",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	inline android::graphics::drawable::Drawable WallpaperManager::peekDrawable(jint arg0) const
	{
		return callObjectMethod(
			"peekDrawable",
			"(I)Landroid/graphics/drawable/Drawable;",
			arg0
		);
	}
	inline android::graphics::drawable::Drawable WallpaperManager::peekFastDrawable() const
	{
		return callObjectMethod(
			"peekFastDrawable",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	inline android::graphics::drawable::Drawable WallpaperManager::peekFastDrawable(jint arg0) const
	{
		return callObjectMethod(
			"peekFastDrawable",
			"(I)Landroid/graphics/drawable/Drawable;",
			arg0
		);
	}
	inline void WallpaperManager::removeOnColorsChangedListener(JObject arg0) const
	{
		callMethod<void>(
			"removeOnColorsChangedListener",
			"(Landroid/app/WallpaperManager$OnColorsChangedListener;)V",
			arg0.object()
		);
	}
	inline void WallpaperManager::sendWallpaperCommand(JObject arg0, JString arg1, jint arg2, jint arg3, jint arg4, android::os::Bundle arg5) const
	{
		callMethod<void>(
			"sendWallpaperCommand",
			"(Landroid/os/IBinder;Ljava/lang/String;IIILandroid/os/Bundle;)V",
			arg0.object(),
			arg1.object<jstring>(),
			arg2,
			arg3,
			arg4,
			arg5.object()
		);
	}
	inline jint WallpaperManager::setBitmap(android::graphics::Bitmap arg0, android::graphics::Rect arg1, jboolean arg2) const
	{
		return callMethod<jint>(
			"setBitmap",
			"(Landroid/graphics/Bitmap;Landroid/graphics/Rect;Z)I",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	inline jint WallpaperManager::setBitmap(android::graphics::Bitmap arg0, android::graphics::Rect arg1, jboolean arg2, jint arg3) const
	{
		return callMethod<jint>(
			"setBitmap",
			"(Landroid/graphics/Bitmap;Landroid/graphics/Rect;ZI)I",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		);
	}
	inline void WallpaperManager::setBitmap(android::graphics::Bitmap arg0) const
	{
		callMethod<void>(
			"setBitmap",
			"(Landroid/graphics/Bitmap;)V",
			arg0.object()
		);
	}
	inline void WallpaperManager::setDisplayPadding(android::graphics::Rect arg0) const
	{
		callMethod<void>(
			"setDisplayPadding",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		);
	}
	inline jint WallpaperManager::setResource(jint arg0, jint arg1) const
	{
		return callMethod<jint>(
			"setResource",
			"(II)I",
			arg0,
			arg1
		);
	}
	inline void WallpaperManager::setResource(jint arg0) const
	{
		callMethod<void>(
			"setResource",
			"(I)V",
			arg0
		);
	}
	inline jint WallpaperManager::setStream(java::io::InputStream arg0, android::graphics::Rect arg1, jboolean arg2) const
	{
		return callMethod<jint>(
			"setStream",
			"(Ljava/io/InputStream;Landroid/graphics/Rect;Z)I",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	inline jint WallpaperManager::setStream(java::io::InputStream arg0, android::graphics::Rect arg1, jboolean arg2, jint arg3) const
	{
		return callMethod<jint>(
			"setStream",
			"(Ljava/io/InputStream;Landroid/graphics/Rect;ZI)I",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3
		);
	}
	inline void WallpaperManager::setStream(java::io::InputStream arg0) const
	{
		callMethod<void>(
			"setStream",
			"(Ljava/io/InputStream;)V",
			arg0.object()
		);
	}
	inline void WallpaperManager::setWallpaperOffsetSteps(jfloat arg0, jfloat arg1) const
	{
		callMethod<void>(
			"setWallpaperOffsetSteps",
			"(FF)V",
			arg0,
			arg1
		);
	}
	inline void WallpaperManager::setWallpaperOffsets(JObject arg0, jfloat arg1, jfloat arg2) const
	{
		callMethod<void>(
			"setWallpaperOffsets",
			"(Landroid/os/IBinder;FF)V",
			arg0.object(),
			arg1,
			arg2
		);
	}
	inline void WallpaperManager::suggestDesiredDimensions(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"suggestDesiredDimensions",
			"(II)V",
			arg0,
			arg1
		);
	}
} // namespace android::app

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app;
#endif
