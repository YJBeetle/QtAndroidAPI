#include "../../content/res/ColorStateList.hpp"
#include "../../content/res/Resources.hpp"
#include "../../content/res/Resources_Theme.hpp"
#include "../BlendMode.hpp"
#include "../Canvas.hpp"
#include "../ColorFilter.hpp"
#include "../Outline.hpp"
#include "../Paint.hpp"
#include "../Rect.hpp"
#include "./Drawable.hpp"
#include "./Drawable_ConstantState.hpp"
#include "./ShapeDrawable_ShaderFactory.hpp"
#include "./shapes/Shape.hpp"
#include "./ShapeDrawable.hpp"

namespace android::graphics::drawable
{
	// Fields
	
	ShapeDrawable::ShapeDrawable(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ShapeDrawable::ShapeDrawable()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.drawable.ShapeDrawable",
			"()V"
		);
	}
	ShapeDrawable::ShapeDrawable(android::graphics::drawable::shapes::Shape arg0)
	{
		__thiz = QAndroidJniObject(
			"android.graphics.drawable.ShapeDrawable",
			"(Landroid/graphics/drawable/shapes/Shape;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	void ShapeDrawable::applyTheme(android::content::res::Resources_Theme arg0)
	{
		__thiz.callMethod<void>(
			"applyTheme",
			"(Landroid/content/res/Resources$Theme;)V",
			arg0.__jniObject().object()
		);
	}
	void ShapeDrawable::draw(android::graphics::Canvas arg0)
	{
		__thiz.callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.__jniObject().object()
		);
	}
	jint ShapeDrawable::getAlpha()
	{
		return __thiz.callMethod<jint>(
			"getAlpha",
			"()I"
		);
	}
	jint ShapeDrawable::getChangingConfigurations()
	{
		return __thiz.callMethod<jint>(
			"getChangingConfigurations",
			"()I"
		);
	}
	QAndroidJniObject ShapeDrawable::getConstantState()
	{
		return __thiz.callObjectMethod(
			"getConstantState",
			"()Landroid/graphics/drawable/Drawable$ConstantState;"
		);
	}
	jint ShapeDrawable::getIntrinsicHeight()
	{
		return __thiz.callMethod<jint>(
			"getIntrinsicHeight",
			"()I"
		);
	}
	jint ShapeDrawable::getIntrinsicWidth()
	{
		return __thiz.callMethod<jint>(
			"getIntrinsicWidth",
			"()I"
		);
	}
	jint ShapeDrawable::getOpacity()
	{
		return __thiz.callMethod<jint>(
			"getOpacity",
			"()I"
		);
	}
	void ShapeDrawable::getOutline(android::graphics::Outline arg0)
	{
		__thiz.callMethod<void>(
			"getOutline",
			"(Landroid/graphics/Outline;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean ShapeDrawable::getPadding(android::graphics::Rect arg0)
	{
		return __thiz.callMethod<jboolean>(
			"getPadding",
			"(Landroid/graphics/Rect;)Z",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ShapeDrawable::getPaint()
	{
		return __thiz.callObjectMethod(
			"getPaint",
			"()Landroid/graphics/Paint;"
		);
	}
	QAndroidJniObject ShapeDrawable::getShaderFactory()
	{
		return __thiz.callObjectMethod(
			"getShaderFactory",
			"()Landroid/graphics/drawable/ShapeDrawable$ShaderFactory;"
		);
	}
	QAndroidJniObject ShapeDrawable::getShape()
	{
		return __thiz.callObjectMethod(
			"getShape",
			"()Landroid/graphics/drawable/shapes/Shape;"
		);
	}
	void ShapeDrawable::inflate(android::content::res::Resources arg0, __JniBaseClass arg1, __JniBaseClass arg2, android::content::res::Resources_Theme arg3)
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
	jboolean ShapeDrawable::isStateful()
	{
		return __thiz.callMethod<jboolean>(
			"isStateful",
			"()Z"
		);
	}
	QAndroidJniObject ShapeDrawable::mutate()
	{
		return __thiz.callObjectMethod(
			"mutate",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	void ShapeDrawable::setAlpha(jint arg0)
	{
		__thiz.callMethod<void>(
			"setAlpha",
			"(I)V",
			arg0
		);
	}
	void ShapeDrawable::setColorFilter(android::graphics::ColorFilter arg0)
	{
		__thiz.callMethod<void>(
			"setColorFilter",
			"(Landroid/graphics/ColorFilter;)V",
			arg0.__jniObject().object()
		);
	}
	void ShapeDrawable::setDither(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setDither",
			"(Z)V",
			arg0
		);
	}
	void ShapeDrawable::setIntrinsicHeight(jint arg0)
	{
		__thiz.callMethod<void>(
			"setIntrinsicHeight",
			"(I)V",
			arg0
		);
	}
	void ShapeDrawable::setIntrinsicWidth(jint arg0)
	{
		__thiz.callMethod<void>(
			"setIntrinsicWidth",
			"(I)V",
			arg0
		);
	}
	void ShapeDrawable::setPadding(android::graphics::Rect arg0)
	{
		__thiz.callMethod<void>(
			"setPadding",
			"(Landroid/graphics/Rect;)V",
			arg0.__jniObject().object()
		);
	}
	void ShapeDrawable::setPadding(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"setPadding",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void ShapeDrawable::setShaderFactory(android::graphics::drawable::ShapeDrawable_ShaderFactory arg0)
	{
		__thiz.callMethod<void>(
			"setShaderFactory",
			"(Landroid/graphics/drawable/ShapeDrawable$ShaderFactory;)V",
			arg0.__jniObject().object()
		);
	}
	void ShapeDrawable::setShape(android::graphics::drawable::shapes::Shape arg0)
	{
		__thiz.callMethod<void>(
			"setShape",
			"(Landroid/graphics/drawable/shapes/Shape;)V",
			arg0.__jniObject().object()
		);
	}
	void ShapeDrawable::setTintBlendMode(android::graphics::BlendMode arg0)
	{
		__thiz.callMethod<void>(
			"setTintBlendMode",
			"(Landroid/graphics/BlendMode;)V",
			arg0.__jniObject().object()
		);
	}
	void ShapeDrawable::setTintList(android::content::res::ColorStateList arg0)
	{
		__thiz.callMethod<void>(
			"setTintList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::graphics::drawable

