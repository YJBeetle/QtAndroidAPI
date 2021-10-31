#include "../../content/res/ColorStateList.hpp"
#include "../../content/res/Resources.hpp"
#include "../../content/res/Resources_Theme.hpp"
#include "../Bitmap.hpp"
#include "../BlendMode.hpp"
#include "../Canvas.hpp"
#include "../ColorFilter.hpp"
#include "../Insets.hpp"
#include "../Outline.hpp"
#include "../Paint.hpp"
#include "../Rect.hpp"
#include "../Shader_TileMode.hpp"
#include "./Drawable.hpp"
#include "./Drawable_ConstantState.hpp"
#include "../../util/DisplayMetrics.hpp"
#include "../../../java/io/InputStream.hpp"
#include "./BitmapDrawable.hpp"

namespace android::graphics::drawable
{
	// Fields
	
	// QJniObject forward
	BitmapDrawable::BitmapDrawable(QJniObject obj) : android::graphics::drawable::Drawable(obj) {}
	
	// Constructors
	BitmapDrawable::BitmapDrawable()
		: android::graphics::drawable::Drawable(
			"android.graphics.drawable.BitmapDrawable",
			"()V"
		) {}
	BitmapDrawable::BitmapDrawable(android::content::res::Resources arg0)
		: android::graphics::drawable::Drawable(
			"android.graphics.drawable.BitmapDrawable",
			"(Landroid/content/res/Resources;)V",
			arg0.object()
		) {}
	BitmapDrawable::BitmapDrawable(android::graphics::Bitmap arg0)
		: android::graphics::drawable::Drawable(
			"android.graphics.drawable.BitmapDrawable",
			"(Landroid/graphics/Bitmap;)V",
			arg0.object()
		) {}
	BitmapDrawable::BitmapDrawable(java::io::InputStream arg0)
		: android::graphics::drawable::Drawable(
			"android.graphics.drawable.BitmapDrawable",
			"(Ljava/io/InputStream;)V",
			arg0.object()
		) {}
	BitmapDrawable::BitmapDrawable(jstring arg0)
		: android::graphics::drawable::Drawable(
			"android.graphics.drawable.BitmapDrawable",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	BitmapDrawable::BitmapDrawable(android::content::res::Resources arg0, android::graphics::Bitmap arg1)
		: android::graphics::drawable::Drawable(
			"android.graphics.drawable.BitmapDrawable",
			"(Landroid/content/res/Resources;Landroid/graphics/Bitmap;)V",
			arg0.object(),
			arg1.object()
		) {}
	BitmapDrawable::BitmapDrawable(android::content::res::Resources arg0, java::io::InputStream arg1)
		: android::graphics::drawable::Drawable(
			"android.graphics.drawable.BitmapDrawable",
			"(Landroid/content/res/Resources;Ljava/io/InputStream;)V",
			arg0.object(),
			arg1.object()
		) {}
	BitmapDrawable::BitmapDrawable(android::content::res::Resources arg0, jstring arg1)
		: android::graphics::drawable::Drawable(
			"android.graphics.drawable.BitmapDrawable",
			"(Landroid/content/res/Resources;Ljava/lang/String;)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	void BitmapDrawable::applyTheme(android::content::res::Resources_Theme arg0)
	{
		callMethod<void>(
			"applyTheme",
			"(Landroid/content/res/Resources$Theme;)V",
			arg0.object()
		);
	}
	jboolean BitmapDrawable::canApplyTheme()
	{
		return callMethod<jboolean>(
			"canApplyTheme",
			"()Z"
		);
	}
	void BitmapDrawable::draw(android::graphics::Canvas arg0)
	{
		callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.object()
		);
	}
	jint BitmapDrawable::getAlpha()
	{
		return callMethod<jint>(
			"getAlpha",
			"()I"
		);
	}
	android::graphics::Bitmap BitmapDrawable::getBitmap()
	{
		return callObjectMethod(
			"getBitmap",
			"()Landroid/graphics/Bitmap;"
		);
	}
	jint BitmapDrawable::getChangingConfigurations()
	{
		return callMethod<jint>(
			"getChangingConfigurations",
			"()I"
		);
	}
	android::graphics::ColorFilter BitmapDrawable::getColorFilter()
	{
		return callObjectMethod(
			"getColorFilter",
			"()Landroid/graphics/ColorFilter;"
		);
	}
	android::graphics::drawable::Drawable_ConstantState BitmapDrawable::getConstantState()
	{
		return callObjectMethod(
			"getConstantState",
			"()Landroid/graphics/drawable/Drawable$ConstantState;"
		);
	}
	jint BitmapDrawable::getGravity()
	{
		return callMethod<jint>(
			"getGravity",
			"()I"
		);
	}
	jint BitmapDrawable::getIntrinsicHeight()
	{
		return callMethod<jint>(
			"getIntrinsicHeight",
			"()I"
		);
	}
	jint BitmapDrawable::getIntrinsicWidth()
	{
		return callMethod<jint>(
			"getIntrinsicWidth",
			"()I"
		);
	}
	jint BitmapDrawable::getOpacity()
	{
		return callMethod<jint>(
			"getOpacity",
			"()I"
		);
	}
	android::graphics::Insets BitmapDrawable::getOpticalInsets()
	{
		return callObjectMethod(
			"getOpticalInsets",
			"()Landroid/graphics/Insets;"
		);
	}
	void BitmapDrawable::getOutline(android::graphics::Outline arg0)
	{
		callMethod<void>(
			"getOutline",
			"(Landroid/graphics/Outline;)V",
			arg0.object()
		);
	}
	android::graphics::Paint BitmapDrawable::getPaint()
	{
		return callObjectMethod(
			"getPaint",
			"()Landroid/graphics/Paint;"
		);
	}
	android::graphics::Shader_TileMode BitmapDrawable::getTileModeX()
	{
		return callObjectMethod(
			"getTileModeX",
			"()Landroid/graphics/Shader$TileMode;"
		);
	}
	android::graphics::Shader_TileMode BitmapDrawable::getTileModeY()
	{
		return callObjectMethod(
			"getTileModeY",
			"()Landroid/graphics/Shader$TileMode;"
		);
	}
	jboolean BitmapDrawable::hasAntiAlias()
	{
		return callMethod<jboolean>(
			"hasAntiAlias",
			"()Z"
		);
	}
	jboolean BitmapDrawable::hasMipMap()
	{
		return callMethod<jboolean>(
			"hasMipMap",
			"()Z"
		);
	}
	void BitmapDrawable::inflate(android::content::res::Resources arg0, __JniBaseClass arg1, __JniBaseClass arg2, android::content::res::Resources_Theme arg3)
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
	jboolean BitmapDrawable::isAutoMirrored()
	{
		return callMethod<jboolean>(
			"isAutoMirrored",
			"()Z"
		);
	}
	jboolean BitmapDrawable::isFilterBitmap()
	{
		return callMethod<jboolean>(
			"isFilterBitmap",
			"()Z"
		);
	}
	jboolean BitmapDrawable::isStateful()
	{
		return callMethod<jboolean>(
			"isStateful",
			"()Z"
		);
	}
	android::graphics::drawable::Drawable BitmapDrawable::mutate()
	{
		return callObjectMethod(
			"mutate",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	void BitmapDrawable::setAlpha(jint arg0)
	{
		callMethod<void>(
			"setAlpha",
			"(I)V",
			arg0
		);
	}
	void BitmapDrawable::setAntiAlias(jboolean arg0)
	{
		callMethod<void>(
			"setAntiAlias",
			"(Z)V",
			arg0
		);
	}
	void BitmapDrawable::setAutoMirrored(jboolean arg0)
	{
		callMethod<void>(
			"setAutoMirrored",
			"(Z)V",
			arg0
		);
	}
	void BitmapDrawable::setColorFilter(android::graphics::ColorFilter arg0)
	{
		callMethod<void>(
			"setColorFilter",
			"(Landroid/graphics/ColorFilter;)V",
			arg0.object()
		);
	}
	void BitmapDrawable::setDither(jboolean arg0)
	{
		callMethod<void>(
			"setDither",
			"(Z)V",
			arg0
		);
	}
	void BitmapDrawable::setFilterBitmap(jboolean arg0)
	{
		callMethod<void>(
			"setFilterBitmap",
			"(Z)V",
			arg0
		);
	}
	void BitmapDrawable::setGravity(jint arg0)
	{
		callMethod<void>(
			"setGravity",
			"(I)V",
			arg0
		);
	}
	void BitmapDrawable::setMipMap(jboolean arg0)
	{
		callMethod<void>(
			"setMipMap",
			"(Z)V",
			arg0
		);
	}
	void BitmapDrawable::setTargetDensity(android::graphics::Canvas arg0)
	{
		callMethod<void>(
			"setTargetDensity",
			"(Landroid/graphics/Canvas;)V",
			arg0.object()
		);
	}
	void BitmapDrawable::setTargetDensity(android::util::DisplayMetrics arg0)
	{
		callMethod<void>(
			"setTargetDensity",
			"(Landroid/util/DisplayMetrics;)V",
			arg0.object()
		);
	}
	void BitmapDrawable::setTargetDensity(jint arg0)
	{
		callMethod<void>(
			"setTargetDensity",
			"(I)V",
			arg0
		);
	}
	void BitmapDrawable::setTileModeX(android::graphics::Shader_TileMode arg0)
	{
		callMethod<void>(
			"setTileModeX",
			"(Landroid/graphics/Shader$TileMode;)V",
			arg0.object()
		);
	}
	void BitmapDrawable::setTileModeXY(android::graphics::Shader_TileMode arg0, android::graphics::Shader_TileMode arg1)
	{
		callMethod<void>(
			"setTileModeXY",
			"(Landroid/graphics/Shader$TileMode;Landroid/graphics/Shader$TileMode;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void BitmapDrawable::setTileModeY(android::graphics::Shader_TileMode arg0)
	{
		callMethod<void>(
			"setTileModeY",
			"(Landroid/graphics/Shader$TileMode;)V",
			arg0.object()
		);
	}
	void BitmapDrawable::setTintBlendMode(android::graphics::BlendMode arg0)
	{
		callMethod<void>(
			"setTintBlendMode",
			"(Landroid/graphics/BlendMode;)V",
			arg0.object()
		);
	}
	void BitmapDrawable::setTintList(android::content::res::ColorStateList arg0)
	{
		callMethod<void>(
			"setTintList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.object()
		);
	}
} // namespace android::graphics::drawable

