#pragma once

#include "../../../JByteArray.hpp"
#include "../../../JIntArray.hpp"
#include "../../content/res/ColorStateList.def.hpp"
#include "../../content/res/Resources.def.hpp"
#include "../../content/res/Resources_Theme.def.hpp"
#include "../Bitmap.def.hpp"
#include "../Canvas.def.hpp"
#include "../ColorFilter.def.hpp"
#include "../NinePatch.def.hpp"
#include "../Outline.def.hpp"
#include "../Paint.def.hpp"
#include "../PorterDuff_Mode.def.hpp"
#include "../Rect.def.hpp"
#include "../Region.def.hpp"
#include "./Drawable.def.hpp"
#include "./Drawable_ConstantState.def.hpp"
#include "../../util/DisplayMetrics.def.hpp"
#include "../../../JString.hpp"
#include "./NinePatchDrawable.def.hpp"

namespace android::graphics::drawable
{
	// Fields
	
	// Constructors
	inline NinePatchDrawable::NinePatchDrawable(android::graphics::NinePatch arg0)
		: android::graphics::drawable::Drawable(
			"android.graphics.drawable.NinePatchDrawable",
			"(Landroid/graphics/NinePatch;)V",
			arg0.object()
		) {}
	inline NinePatchDrawable::NinePatchDrawable(android::content::res::Resources arg0, android::graphics::NinePatch arg1)
		: android::graphics::drawable::Drawable(
			"android.graphics.drawable.NinePatchDrawable",
			"(Landroid/content/res/Resources;Landroid/graphics/NinePatch;)V",
			arg0.object(),
			arg1.object()
		) {}
	inline NinePatchDrawable::NinePatchDrawable(android::graphics::Bitmap arg0, JByteArray arg1, android::graphics::Rect arg2, JString arg3)
		: android::graphics::drawable::Drawable(
			"android.graphics.drawable.NinePatchDrawable",
			"(Landroid/graphics/Bitmap;[BLandroid/graphics/Rect;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object<jbyteArray>(),
			arg2.object(),
			arg3.object<jstring>()
		) {}
	inline NinePatchDrawable::NinePatchDrawable(android::content::res::Resources arg0, android::graphics::Bitmap arg1, JByteArray arg2, android::graphics::Rect arg3, JString arg4)
		: android::graphics::drawable::Drawable(
			"android.graphics.drawable.NinePatchDrawable",
			"(Landroid/content/res/Resources;Landroid/graphics/Bitmap;[BLandroid/graphics/Rect;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object(),
			arg2.object<jbyteArray>(),
			arg3.object(),
			arg4.object<jstring>()
		) {}
	
	// Methods
	inline void NinePatchDrawable::applyTheme(android::content::res::Resources_Theme arg0) const
	{
		callMethod<void>(
			"applyTheme",
			"(Landroid/content/res/Resources$Theme;)V",
			arg0.object()
		);
	}
	inline jboolean NinePatchDrawable::canApplyTheme() const
	{
		return callMethod<jboolean>(
			"canApplyTheme",
			"()Z"
		);
	}
	inline void NinePatchDrawable::draw(android::graphics::Canvas arg0) const
	{
		callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.object()
		);
	}
	inline jint NinePatchDrawable::getAlpha() const
	{
		return callMethod<jint>(
			"getAlpha",
			"()I"
		);
	}
	inline jint NinePatchDrawable::getChangingConfigurations() const
	{
		return callMethod<jint>(
			"getChangingConfigurations",
			"()I"
		);
	}
	inline android::graphics::drawable::Drawable_ConstantState NinePatchDrawable::getConstantState() const
	{
		return callObjectMethod(
			"getConstantState",
			"()Landroid/graphics/drawable/Drawable$ConstantState;"
		);
	}
	inline jint NinePatchDrawable::getIntrinsicHeight() const
	{
		return callMethod<jint>(
			"getIntrinsicHeight",
			"()I"
		);
	}
	inline jint NinePatchDrawable::getIntrinsicWidth() const
	{
		return callMethod<jint>(
			"getIntrinsicWidth",
			"()I"
		);
	}
	inline jint NinePatchDrawable::getOpacity() const
	{
		return callMethod<jint>(
			"getOpacity",
			"()I"
		);
	}
	inline void NinePatchDrawable::getOutline(android::graphics::Outline arg0) const
	{
		callMethod<void>(
			"getOutline",
			"(Landroid/graphics/Outline;)V",
			arg0.object()
		);
	}
	inline jboolean NinePatchDrawable::getPadding(android::graphics::Rect arg0) const
	{
		return callMethod<jboolean>(
			"getPadding",
			"(Landroid/graphics/Rect;)Z",
			arg0.object()
		);
	}
	inline android::graphics::Paint NinePatchDrawable::getPaint() const
	{
		return callObjectMethod(
			"getPaint",
			"()Landroid/graphics/Paint;"
		);
	}
	inline android::graphics::Region NinePatchDrawable::getTransparentRegion() const
	{
		return callObjectMethod(
			"getTransparentRegion",
			"()Landroid/graphics/Region;"
		);
	}
	inline void NinePatchDrawable::inflate(android::content::res::Resources arg0, JObject arg1, JObject arg2, android::content::res::Resources_Theme arg3) const
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
	inline jboolean NinePatchDrawable::isAutoMirrored() const
	{
		return callMethod<jboolean>(
			"isAutoMirrored",
			"()Z"
		);
	}
	inline jboolean NinePatchDrawable::isFilterBitmap() const
	{
		return callMethod<jboolean>(
			"isFilterBitmap",
			"()Z"
		);
	}
	inline jboolean NinePatchDrawable::isStateful() const
	{
		return callMethod<jboolean>(
			"isStateful",
			"()Z"
		);
	}
	inline android::graphics::drawable::Drawable NinePatchDrawable::mutate() const
	{
		return callObjectMethod(
			"mutate",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	inline void NinePatchDrawable::setAlpha(jint arg0) const
	{
		callMethod<void>(
			"setAlpha",
			"(I)V",
			arg0
		);
	}
	inline void NinePatchDrawable::setAutoMirrored(jboolean arg0) const
	{
		callMethod<void>(
			"setAutoMirrored",
			"(Z)V",
			arg0
		);
	}
	inline void NinePatchDrawable::setColorFilter(android::graphics::ColorFilter arg0) const
	{
		callMethod<void>(
			"setColorFilter",
			"(Landroid/graphics/ColorFilter;)V",
			arg0.object()
		);
	}
	inline void NinePatchDrawable::setDither(jboolean arg0) const
	{
		callMethod<void>(
			"setDither",
			"(Z)V",
			arg0
		);
	}
	inline void NinePatchDrawable::setFilterBitmap(jboolean arg0) const
	{
		callMethod<void>(
			"setFilterBitmap",
			"(Z)V",
			arg0
		);
	}
	inline void NinePatchDrawable::setTargetDensity(android::graphics::Canvas arg0) const
	{
		callMethod<void>(
			"setTargetDensity",
			"(Landroid/graphics/Canvas;)V",
			arg0.object()
		);
	}
	inline void NinePatchDrawable::setTargetDensity(android::util::DisplayMetrics arg0) const
	{
		callMethod<void>(
			"setTargetDensity",
			"(Landroid/util/DisplayMetrics;)V",
			arg0.object()
		);
	}
	inline void NinePatchDrawable::setTargetDensity(jint arg0) const
	{
		callMethod<void>(
			"setTargetDensity",
			"(I)V",
			arg0
		);
	}
	inline void NinePatchDrawable::setTintList(android::content::res::ColorStateList arg0) const
	{
		callMethod<void>(
			"setTintList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.object()
		);
	}
	inline void NinePatchDrawable::setTintMode(android::graphics::PorterDuff_Mode arg0) const
	{
		callMethod<void>(
			"setTintMode",
			"(Landroid/graphics/PorterDuff$Mode;)V",
			arg0.object()
		);
	}
} // namespace android::graphics::drawable

// Base class headers
#include "./Drawable.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::graphics::drawable;
#endif
