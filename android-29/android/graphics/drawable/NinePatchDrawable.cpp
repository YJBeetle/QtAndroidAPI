#include "../../content/res/ColorStateList.hpp"
#include "../../content/res/Resources.hpp"
#include "../../content/res/Resources_Theme.hpp"
#include "../Bitmap.hpp"
#include "../BlendMode.hpp"
#include "../Canvas.hpp"
#include "../ColorFilter.hpp"
#include "../Insets.hpp"
#include "../NinePatch.hpp"
#include "../Outline.hpp"
#include "../Paint.hpp"
#include "../Rect.hpp"
#include "../Region.hpp"
#include "./Drawable.hpp"
#include "./Drawable_ConstantState.hpp"
#include "../../util/DisplayMetrics.hpp"
#include "./NinePatchDrawable.hpp"

namespace android::graphics::drawable
{
	// Fields
	
	// QAndroidJniObject forward
	NinePatchDrawable::NinePatchDrawable(QAndroidJniObject obj) : android::graphics::drawable::Drawable(obj) {}
	
	// Constructors
	NinePatchDrawable::NinePatchDrawable(android::graphics::NinePatch arg0)
		: android::graphics::drawable::Drawable(
			"android.graphics.drawable.NinePatchDrawable",
			"(Landroid/graphics/NinePatch;)V",
			arg0.object()
		) {}
	NinePatchDrawable::NinePatchDrawable(android::content::res::Resources arg0, android::graphics::NinePatch arg1)
		: android::graphics::drawable::Drawable(
			"android.graphics.drawable.NinePatchDrawable",
			"(Landroid/content/res/Resources;Landroid/graphics/NinePatch;)V",
			arg0.object(),
			arg1.object()
		) {}
	NinePatchDrawable::NinePatchDrawable(android::graphics::Bitmap arg0, jbyteArray arg1, android::graphics::Rect arg2, jstring arg3)
		: android::graphics::drawable::Drawable(
			"android.graphics.drawable.NinePatchDrawable",
			"(Landroid/graphics/Bitmap;[BLandroid/graphics/Rect;Ljava/lang/String;)V",
			arg0.object(),
			arg1,
			arg2.object(),
			arg3
		) {}
	NinePatchDrawable::NinePatchDrawable(android::content::res::Resources arg0, android::graphics::Bitmap arg1, jbyteArray arg2, android::graphics::Rect arg3, jstring arg4)
		: android::graphics::drawable::Drawable(
			"android.graphics.drawable.NinePatchDrawable",
			"(Landroid/content/res/Resources;Landroid/graphics/Bitmap;[BLandroid/graphics/Rect;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3.object(),
			arg4
		) {}
	
	// Methods
	void NinePatchDrawable::applyTheme(android::content::res::Resources_Theme arg0)
	{
		callMethod<void>(
			"applyTheme",
			"(Landroid/content/res/Resources$Theme;)V",
			arg0.object()
		);
	}
	jboolean NinePatchDrawable::canApplyTheme()
	{
		return callMethod<jboolean>(
			"canApplyTheme",
			"()Z"
		);
	}
	void NinePatchDrawable::draw(android::graphics::Canvas arg0)
	{
		callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.object()
		);
	}
	jint NinePatchDrawable::getAlpha()
	{
		return callMethod<jint>(
			"getAlpha",
			"()I"
		);
	}
	jint NinePatchDrawable::getChangingConfigurations()
	{
		return callMethod<jint>(
			"getChangingConfigurations",
			"()I"
		);
	}
	android::graphics::drawable::Drawable_ConstantState NinePatchDrawable::getConstantState()
	{
		return callObjectMethod(
			"getConstantState",
			"()Landroid/graphics/drawable/Drawable$ConstantState;"
		);
	}
	jint NinePatchDrawable::getIntrinsicHeight()
	{
		return callMethod<jint>(
			"getIntrinsicHeight",
			"()I"
		);
	}
	jint NinePatchDrawable::getIntrinsicWidth()
	{
		return callMethod<jint>(
			"getIntrinsicWidth",
			"()I"
		);
	}
	jint NinePatchDrawable::getOpacity()
	{
		return callMethod<jint>(
			"getOpacity",
			"()I"
		);
	}
	android::graphics::Insets NinePatchDrawable::getOpticalInsets()
	{
		return callObjectMethod(
			"getOpticalInsets",
			"()Landroid/graphics/Insets;"
		);
	}
	void NinePatchDrawable::getOutline(android::graphics::Outline arg0)
	{
		callMethod<void>(
			"getOutline",
			"(Landroid/graphics/Outline;)V",
			arg0.object()
		);
	}
	jboolean NinePatchDrawable::getPadding(android::graphics::Rect arg0)
	{
		return callMethod<jboolean>(
			"getPadding",
			"(Landroid/graphics/Rect;)Z",
			arg0.object()
		);
	}
	android::graphics::Paint NinePatchDrawable::getPaint()
	{
		return callObjectMethod(
			"getPaint",
			"()Landroid/graphics/Paint;"
		);
	}
	android::graphics::Region NinePatchDrawable::getTransparentRegion()
	{
		return callObjectMethod(
			"getTransparentRegion",
			"()Landroid/graphics/Region;"
		);
	}
	void NinePatchDrawable::inflate(android::content::res::Resources arg0, JObject arg1, JObject arg2, android::content::res::Resources_Theme arg3)
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
	jboolean NinePatchDrawable::isAutoMirrored()
	{
		return callMethod<jboolean>(
			"isAutoMirrored",
			"()Z"
		);
	}
	jboolean NinePatchDrawable::isFilterBitmap()
	{
		return callMethod<jboolean>(
			"isFilterBitmap",
			"()Z"
		);
	}
	jboolean NinePatchDrawable::isStateful()
	{
		return callMethod<jboolean>(
			"isStateful",
			"()Z"
		);
	}
	android::graphics::drawable::Drawable NinePatchDrawable::mutate()
	{
		return callObjectMethod(
			"mutate",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	void NinePatchDrawable::setAlpha(jint arg0)
	{
		callMethod<void>(
			"setAlpha",
			"(I)V",
			arg0
		);
	}
	void NinePatchDrawable::setAutoMirrored(jboolean arg0)
	{
		callMethod<void>(
			"setAutoMirrored",
			"(Z)V",
			arg0
		);
	}
	void NinePatchDrawable::setColorFilter(android::graphics::ColorFilter arg0)
	{
		callMethod<void>(
			"setColorFilter",
			"(Landroid/graphics/ColorFilter;)V",
			arg0.object()
		);
	}
	void NinePatchDrawable::setDither(jboolean arg0)
	{
		callMethod<void>(
			"setDither",
			"(Z)V",
			arg0
		);
	}
	void NinePatchDrawable::setFilterBitmap(jboolean arg0)
	{
		callMethod<void>(
			"setFilterBitmap",
			"(Z)V",
			arg0
		);
	}
	void NinePatchDrawable::setTargetDensity(android::graphics::Canvas arg0)
	{
		callMethod<void>(
			"setTargetDensity",
			"(Landroid/graphics/Canvas;)V",
			arg0.object()
		);
	}
	void NinePatchDrawable::setTargetDensity(android::util::DisplayMetrics arg0)
	{
		callMethod<void>(
			"setTargetDensity",
			"(Landroid/util/DisplayMetrics;)V",
			arg0.object()
		);
	}
	void NinePatchDrawable::setTargetDensity(jint arg0)
	{
		callMethod<void>(
			"setTargetDensity",
			"(I)V",
			arg0
		);
	}
	void NinePatchDrawable::setTintBlendMode(android::graphics::BlendMode arg0)
	{
		callMethod<void>(
			"setTintBlendMode",
			"(Landroid/graphics/BlendMode;)V",
			arg0.object()
		);
	}
	void NinePatchDrawable::setTintList(android::content::res::ColorStateList arg0)
	{
		callMethod<void>(
			"setTintList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.object()
		);
	}
} // namespace android::graphics::drawable

