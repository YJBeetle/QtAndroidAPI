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
	
	BitmapDrawable::BitmapDrawable(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	BitmapDrawable::BitmapDrawable()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.drawable.BitmapDrawable",
			"()V"
		);
	}
	BitmapDrawable::BitmapDrawable(android::content::res::Resources arg0)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.drawable.BitmapDrawable",
			"(Landroid/content/res/Resources;)V",
			arg0.__jniObject().object()
		);
	}
	BitmapDrawable::BitmapDrawable(android::graphics::Bitmap arg0)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.drawable.BitmapDrawable",
			"(Landroid/graphics/Bitmap;)V",
			arg0.__jniObject().object()
		);
	}
	BitmapDrawable::BitmapDrawable(java::io::InputStream arg0)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.drawable.BitmapDrawable",
			"(Ljava/io/InputStream;)V",
			arg0.__jniObject().object()
		);
	}
	BitmapDrawable::BitmapDrawable(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.drawable.BitmapDrawable",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	BitmapDrawable::BitmapDrawable(android::content::res::Resources arg0, android::graphics::Bitmap arg1)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.drawable.BitmapDrawable",
			"(Landroid/content/res/Resources;Landroid/graphics/Bitmap;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	BitmapDrawable::BitmapDrawable(android::content::res::Resources arg0, java::io::InputStream arg1)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.drawable.BitmapDrawable",
			"(Landroid/content/res/Resources;Ljava/io/InputStream;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	BitmapDrawable::BitmapDrawable(android::content::res::Resources arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.drawable.BitmapDrawable",
			"(Landroid/content/res/Resources;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	
	// Methods
	void BitmapDrawable::applyTheme(android::content::res::Resources_Theme arg0)
	{
		__thiz.callMethod<void>(
			"applyTheme",
			"(Landroid/content/res/Resources$Theme;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean BitmapDrawable::canApplyTheme()
	{
		return __thiz.callMethod<jboolean>(
			"canApplyTheme",
			"()Z"
		);
	}
	void BitmapDrawable::draw(android::graphics::Canvas arg0)
	{
		__thiz.callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.__jniObject().object()
		);
	}
	jint BitmapDrawable::getAlpha()
	{
		return __thiz.callMethod<jint>(
			"getAlpha",
			"()I"
		);
	}
	QAndroidJniObject BitmapDrawable::getBitmap()
	{
		return __thiz.callObjectMethod(
			"getBitmap",
			"()Landroid/graphics/Bitmap;"
		);
	}
	jint BitmapDrawable::getChangingConfigurations()
	{
		return __thiz.callMethod<jint>(
			"getChangingConfigurations",
			"()I"
		);
	}
	QAndroidJniObject BitmapDrawable::getColorFilter()
	{
		return __thiz.callObjectMethod(
			"getColorFilter",
			"()Landroid/graphics/ColorFilter;"
		);
	}
	QAndroidJniObject BitmapDrawable::getConstantState()
	{
		return __thiz.callObjectMethod(
			"getConstantState",
			"()Landroid/graphics/drawable/Drawable$ConstantState;"
		);
	}
	jint BitmapDrawable::getGravity()
	{
		return __thiz.callMethod<jint>(
			"getGravity",
			"()I"
		);
	}
	jint BitmapDrawable::getIntrinsicHeight()
	{
		return __thiz.callMethod<jint>(
			"getIntrinsicHeight",
			"()I"
		);
	}
	jint BitmapDrawable::getIntrinsicWidth()
	{
		return __thiz.callMethod<jint>(
			"getIntrinsicWidth",
			"()I"
		);
	}
	jint BitmapDrawable::getOpacity()
	{
		return __thiz.callMethod<jint>(
			"getOpacity",
			"()I"
		);
	}
	QAndroidJniObject BitmapDrawable::getOpticalInsets()
	{
		return __thiz.callObjectMethod(
			"getOpticalInsets",
			"()Landroid/graphics/Insets;"
		);
	}
	void BitmapDrawable::getOutline(android::graphics::Outline arg0)
	{
		__thiz.callMethod<void>(
			"getOutline",
			"(Landroid/graphics/Outline;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject BitmapDrawable::getPaint()
	{
		return __thiz.callObjectMethod(
			"getPaint",
			"()Landroid/graphics/Paint;"
		);
	}
	QAndroidJniObject BitmapDrawable::getTileModeX()
	{
		return __thiz.callObjectMethod(
			"getTileModeX",
			"()Landroid/graphics/Shader$TileMode;"
		);
	}
	QAndroidJniObject BitmapDrawable::getTileModeY()
	{
		return __thiz.callObjectMethod(
			"getTileModeY",
			"()Landroid/graphics/Shader$TileMode;"
		);
	}
	jboolean BitmapDrawable::hasAntiAlias()
	{
		return __thiz.callMethod<jboolean>(
			"hasAntiAlias",
			"()Z"
		);
	}
	jboolean BitmapDrawable::hasMipMap()
	{
		return __thiz.callMethod<jboolean>(
			"hasMipMap",
			"()Z"
		);
	}
	void BitmapDrawable::inflate(android::content::res::Resources arg0, __JniBaseClass arg1, __JniBaseClass arg2, android::content::res::Resources_Theme arg3)
	{
		__thiz.callMethod<void>(
			"inflate",
			"(Landroid/content/res/Resources;Lorg/xmlpull/v1/XmlPullParser;Landroid/util/AttributeSet;Landroid/content/res/Resources$Theme;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	jboolean BitmapDrawable::isAutoMirrored()
	{
		return __thiz.callMethod<jboolean>(
			"isAutoMirrored",
			"()Z"
		);
	}
	jboolean BitmapDrawable::isFilterBitmap()
	{
		return __thiz.callMethod<jboolean>(
			"isFilterBitmap",
			"()Z"
		);
	}
	jboolean BitmapDrawable::isStateful()
	{
		return __thiz.callMethod<jboolean>(
			"isStateful",
			"()Z"
		);
	}
	QAndroidJniObject BitmapDrawable::mutate()
	{
		return __thiz.callObjectMethod(
			"mutate",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	void BitmapDrawable::setAlpha(jint arg0)
	{
		__thiz.callMethod<void>(
			"setAlpha",
			"(I)V",
			arg0
		);
	}
	void BitmapDrawable::setAntiAlias(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setAntiAlias",
			"(Z)V",
			arg0
		);
	}
	void BitmapDrawable::setAutoMirrored(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setAutoMirrored",
			"(Z)V",
			arg0
		);
	}
	void BitmapDrawable::setColorFilter(android::graphics::ColorFilter arg0)
	{
		__thiz.callMethod<void>(
			"setColorFilter",
			"(Landroid/graphics/ColorFilter;)V",
			arg0.__jniObject().object()
		);
	}
	void BitmapDrawable::setDither(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setDither",
			"(Z)V",
			arg0
		);
	}
	void BitmapDrawable::setFilterBitmap(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setFilterBitmap",
			"(Z)V",
			arg0
		);
	}
	void BitmapDrawable::setGravity(jint arg0)
	{
		__thiz.callMethod<void>(
			"setGravity",
			"(I)V",
			arg0
		);
	}
	void BitmapDrawable::setMipMap(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setMipMap",
			"(Z)V",
			arg0
		);
	}
	void BitmapDrawable::setTargetDensity(android::graphics::Canvas arg0)
	{
		__thiz.callMethod<void>(
			"setTargetDensity",
			"(Landroid/graphics/Canvas;)V",
			arg0.__jniObject().object()
		);
	}
	void BitmapDrawable::setTargetDensity(android::util::DisplayMetrics arg0)
	{
		__thiz.callMethod<void>(
			"setTargetDensity",
			"(Landroid/util/DisplayMetrics;)V",
			arg0.__jniObject().object()
		);
	}
	void BitmapDrawable::setTargetDensity(jint arg0)
	{
		__thiz.callMethod<void>(
			"setTargetDensity",
			"(I)V",
			arg0
		);
	}
	void BitmapDrawable::setTileModeX(android::graphics::Shader_TileMode arg0)
	{
		__thiz.callMethod<void>(
			"setTileModeX",
			"(Landroid/graphics/Shader$TileMode;)V",
			arg0.__jniObject().object()
		);
	}
	void BitmapDrawable::setTileModeXY(android::graphics::Shader_TileMode arg0, android::graphics::Shader_TileMode arg1)
	{
		__thiz.callMethod<void>(
			"setTileModeXY",
			"(Landroid/graphics/Shader$TileMode;Landroid/graphics/Shader$TileMode;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void BitmapDrawable::setTileModeY(android::graphics::Shader_TileMode arg0)
	{
		__thiz.callMethod<void>(
			"setTileModeY",
			"(Landroid/graphics/Shader$TileMode;)V",
			arg0.__jniObject().object()
		);
	}
	void BitmapDrawable::setTintBlendMode(android::graphics::BlendMode arg0)
	{
		__thiz.callMethod<void>(
			"setTintBlendMode",
			"(Landroid/graphics/BlendMode;)V",
			arg0.__jniObject().object()
		);
	}
	void BitmapDrawable::setTintList(android::content::res::ColorStateList arg0)
	{
		__thiz.callMethod<void>(
			"setTintList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::graphics::drawable

