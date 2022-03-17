#pragma once

#include "../../../JIntArray.hpp"
#include "../../content/res/ColorStateList.def.hpp"
#include "../../content/res/Resources.def.hpp"
#include "../../content/res/Resources_Theme.def.hpp"
#include "../Bitmap.def.hpp"
#include "../BlendMode.def.hpp"
#include "../Canvas.def.hpp"
#include "../ColorFilter.def.hpp"
#include "../Insets.def.hpp"
#include "../Outline.def.hpp"
#include "../Paint.def.hpp"
#include "../Rect.def.hpp"
#include "../Shader_TileMode.def.hpp"
#include "./Drawable.def.hpp"
#include "./Drawable_ConstantState.def.hpp"
#include "../../util/DisplayMetrics.def.hpp"
#include "../../../java/io/InputStream.def.hpp"
#include "../../../JString.hpp"
#include "./BitmapDrawable.def.hpp"

namespace android::graphics::drawable
{
	// Fields
	
	// Constructors
	inline BitmapDrawable::BitmapDrawable()
		: android::graphics::drawable::Drawable(
			"android.graphics.drawable.BitmapDrawable",
			"()V"
		) {}
	inline BitmapDrawable::BitmapDrawable(android::content::res::Resources arg0)
		: android::graphics::drawable::Drawable(
			"android.graphics.drawable.BitmapDrawable",
			"(Landroid/content/res/Resources;)V",
			arg0.object()
		) {}
	inline BitmapDrawable::BitmapDrawable(android::graphics::Bitmap arg0)
		: android::graphics::drawable::Drawable(
			"android.graphics.drawable.BitmapDrawable",
			"(Landroid/graphics/Bitmap;)V",
			arg0.object()
		) {}
	inline BitmapDrawable::BitmapDrawable(java::io::InputStream arg0)
		: android::graphics::drawable::Drawable(
			"android.graphics.drawable.BitmapDrawable",
			"(Ljava/io/InputStream;)V",
			arg0.object()
		) {}
	inline BitmapDrawable::BitmapDrawable(JString arg0)
		: android::graphics::drawable::Drawable(
			"android.graphics.drawable.BitmapDrawable",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline BitmapDrawable::BitmapDrawable(android::content::res::Resources arg0, android::graphics::Bitmap arg1)
		: android::graphics::drawable::Drawable(
			"android.graphics.drawable.BitmapDrawable",
			"(Landroid/content/res/Resources;Landroid/graphics/Bitmap;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline BitmapDrawable::BitmapDrawable(android::content::res::Resources arg0, java::io::InputStream arg1)
		: android::graphics::drawable::Drawable(
			"android.graphics.drawable.BitmapDrawable",
			"(Landroid/content/res/Resources;Ljava/io/InputStream;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline BitmapDrawable::BitmapDrawable(android::content::res::Resources arg0, JString arg1)
		: android::graphics::drawable::Drawable(
			"android.graphics.drawable.BitmapDrawable",
			"(Landroid/content/res/Resources;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jstring>()
		) {}
	
	// Methods
	inline void BitmapDrawable::applyTheme(android::content::res::Resources_Theme arg0) const
	{
		callMethod<void>(
			"applyTheme",
			"(Landroid/content/res/Resources$Theme;)V",
			arg0.object()
		);
	}
	inline jboolean BitmapDrawable::canApplyTheme() const
	{
		return callMethod<jboolean>(
			"canApplyTheme",
			"()Z"
		);
	}
	inline void BitmapDrawable::draw(android::graphics::Canvas arg0) const
	{
		callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.object()
		);
	}
	inline jint BitmapDrawable::getAlpha() const
	{
		return callMethod<jint>(
			"getAlpha",
			"()I"
		);
	}
	inline android::graphics::Bitmap BitmapDrawable::getBitmap() const
	{
		return callObjectMethod(
			"getBitmap",
			"()Landroid/graphics/Bitmap;"
		);
	}
	inline jint BitmapDrawable::getChangingConfigurations() const
	{
		return callMethod<jint>(
			"getChangingConfigurations",
			"()I"
		);
	}
	inline android::graphics::ColorFilter BitmapDrawable::getColorFilter() const
	{
		return callObjectMethod(
			"getColorFilter",
			"()Landroid/graphics/ColorFilter;"
		);
	}
	inline android::graphics::drawable::Drawable_ConstantState BitmapDrawable::getConstantState() const
	{
		return callObjectMethod(
			"getConstantState",
			"()Landroid/graphics/drawable/Drawable$ConstantState;"
		);
	}
	inline jint BitmapDrawable::getGravity() const
	{
		return callMethod<jint>(
			"getGravity",
			"()I"
		);
	}
	inline jint BitmapDrawable::getIntrinsicHeight() const
	{
		return callMethod<jint>(
			"getIntrinsicHeight",
			"()I"
		);
	}
	inline jint BitmapDrawable::getIntrinsicWidth() const
	{
		return callMethod<jint>(
			"getIntrinsicWidth",
			"()I"
		);
	}
	inline jint BitmapDrawable::getOpacity() const
	{
		return callMethod<jint>(
			"getOpacity",
			"()I"
		);
	}
	inline android::graphics::Insets BitmapDrawable::getOpticalInsets() const
	{
		return callObjectMethod(
			"getOpticalInsets",
			"()Landroid/graphics/Insets;"
		);
	}
	inline void BitmapDrawable::getOutline(android::graphics::Outline arg0) const
	{
		callMethod<void>(
			"getOutline",
			"(Landroid/graphics/Outline;)V",
			arg0.object()
		);
	}
	inline android::graphics::Paint BitmapDrawable::getPaint() const
	{
		return callObjectMethod(
			"getPaint",
			"()Landroid/graphics/Paint;"
		);
	}
	inline android::graphics::Shader_TileMode BitmapDrawable::getTileModeX() const
	{
		return callObjectMethod(
			"getTileModeX",
			"()Landroid/graphics/Shader$TileMode;"
		);
	}
	inline android::graphics::Shader_TileMode BitmapDrawable::getTileModeY() const
	{
		return callObjectMethod(
			"getTileModeY",
			"()Landroid/graphics/Shader$TileMode;"
		);
	}
	inline jboolean BitmapDrawable::hasAntiAlias() const
	{
		return callMethod<jboolean>(
			"hasAntiAlias",
			"()Z"
		);
	}
	inline jboolean BitmapDrawable::hasMipMap() const
	{
		return callMethod<jboolean>(
			"hasMipMap",
			"()Z"
		);
	}
	inline void BitmapDrawable::inflate(android::content::res::Resources arg0, JObject arg1, JObject arg2, android::content::res::Resources_Theme arg3) const
	{
		callMethod<void>(
			"inflate",
			"(Landroid/content/res/Resources;Lorg/xmlpull/v1/XmlPullParser;Landroid/util/AttributeSet;Landroid/content/res/Resources$Theme;)V",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		);
	}
	inline jboolean BitmapDrawable::isAutoMirrored() const
	{
		return callMethod<jboolean>(
			"isAutoMirrored",
			"()Z"
		);
	}
	inline jboolean BitmapDrawable::isFilterBitmap() const
	{
		return callMethod<jboolean>(
			"isFilterBitmap",
			"()Z"
		);
	}
	inline jboolean BitmapDrawable::isStateful() const
	{
		return callMethod<jboolean>(
			"isStateful",
			"()Z"
		);
	}
	inline android::graphics::drawable::Drawable BitmapDrawable::mutate() const
	{
		return callObjectMethod(
			"mutate",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	inline void BitmapDrawable::setAlpha(jint arg0) const
	{
		callMethod<void>(
			"setAlpha",
			"(I)V",
			arg0
		);
	}
	inline void BitmapDrawable::setAntiAlias(jboolean arg0) const
	{
		callMethod<void>(
			"setAntiAlias",
			"(Z)V",
			arg0
		);
	}
	inline void BitmapDrawable::setAutoMirrored(jboolean arg0) const
	{
		callMethod<void>(
			"setAutoMirrored",
			"(Z)V",
			arg0
		);
	}
	inline void BitmapDrawable::setColorFilter(android::graphics::ColorFilter arg0) const
	{
		callMethod<void>(
			"setColorFilter",
			"(Landroid/graphics/ColorFilter;)V",
			arg0.object()
		);
	}
	inline void BitmapDrawable::setDither(jboolean arg0) const
	{
		callMethod<void>(
			"setDither",
			"(Z)V",
			arg0
		);
	}
	inline void BitmapDrawable::setFilterBitmap(jboolean arg0) const
	{
		callMethod<void>(
			"setFilterBitmap",
			"(Z)V",
			arg0
		);
	}
	inline void BitmapDrawable::setGravity(jint arg0) const
	{
		callMethod<void>(
			"setGravity",
			"(I)V",
			arg0
		);
	}
	inline void BitmapDrawable::setMipMap(jboolean arg0) const
	{
		callMethod<void>(
			"setMipMap",
			"(Z)V",
			arg0
		);
	}
	inline void BitmapDrawable::setTargetDensity(android::graphics::Canvas arg0) const
	{
		callMethod<void>(
			"setTargetDensity",
			"(Landroid/graphics/Canvas;)V",
			arg0.object()
		);
	}
	inline void BitmapDrawable::setTargetDensity(android::util::DisplayMetrics arg0) const
	{
		callMethod<void>(
			"setTargetDensity",
			"(Landroid/util/DisplayMetrics;)V",
			arg0.object()
		);
	}
	inline void BitmapDrawable::setTargetDensity(jint arg0) const
	{
		callMethod<void>(
			"setTargetDensity",
			"(I)V",
			arg0
		);
	}
	inline void BitmapDrawable::setTileModeX(android::graphics::Shader_TileMode arg0) const
	{
		callMethod<void>(
			"setTileModeX",
			"(Landroid/graphics/Shader$TileMode;)V",
			arg0.object()
		);
	}
	inline void BitmapDrawable::setTileModeXY(android::graphics::Shader_TileMode arg0, android::graphics::Shader_TileMode arg1) const
	{
		callMethod<void>(
			"setTileModeXY",
			"(Landroid/graphics/Shader$TileMode;Landroid/graphics/Shader$TileMode;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void BitmapDrawable::setTileModeY(android::graphics::Shader_TileMode arg0) const
	{
		callMethod<void>(
			"setTileModeY",
			"(Landroid/graphics/Shader$TileMode;)V",
			arg0.object()
		);
	}
	inline void BitmapDrawable::setTintBlendMode(android::graphics::BlendMode arg0) const
	{
		callMethod<void>(
			"setTintBlendMode",
			"(Landroid/graphics/BlendMode;)V",
			arg0.object()
		);
	}
	inline void BitmapDrawable::setTintList(android::content::res::ColorStateList arg0) const
	{
		callMethod<void>(
			"setTintList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.object()
		);
	}
} // namespace android::graphics::drawable

// Base class headers
#include "./Drawable.hpp"

