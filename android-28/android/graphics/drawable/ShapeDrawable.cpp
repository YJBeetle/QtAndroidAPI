#include "../../content/res/ColorStateList.hpp"
#include "../../content/res/Resources.hpp"
#include "../../content/res/Resources_Theme.hpp"
#include "../Canvas.hpp"
#include "../ColorFilter.hpp"
#include "../Outline.hpp"
#include "../Paint.hpp"
#include "../PorterDuff_Mode.hpp"
#include "../Rect.hpp"
#include "./Drawable.hpp"
#include "./Drawable_ConstantState.hpp"
#include "./ShapeDrawable_ShaderFactory.hpp"
#include "./shapes/Shape.hpp"
#include "./ShapeDrawable.hpp"

namespace android::graphics::drawable
{
	// Fields
	
	// QAndroidJniObject forward
	ShapeDrawable::ShapeDrawable(QAndroidJniObject obj) : android::graphics::drawable::Drawable(obj) {}
	
	// Constructors
	ShapeDrawable::ShapeDrawable()
		: android::graphics::drawable::Drawable(
			"android.graphics.drawable.ShapeDrawable",
			"()V"
		) {}
	ShapeDrawable::ShapeDrawable(android::graphics::drawable::shapes::Shape arg0)
		: android::graphics::drawable::Drawable(
			"android.graphics.drawable.ShapeDrawable",
			"(Landroid/graphics/drawable/shapes/Shape;)V",
			arg0.object()
		) {}
	
	// Methods
	void ShapeDrawable::applyTheme(android::content::res::Resources_Theme arg0)
	{
		callMethod<void>(
			"applyTheme",
			"(Landroid/content/res/Resources$Theme;)V",
			arg0.object()
		);
	}
	void ShapeDrawable::draw(android::graphics::Canvas arg0)
	{
		callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.object()
		);
	}
	jint ShapeDrawable::getAlpha()
	{
		return callMethod<jint>(
			"getAlpha",
			"()I"
		);
	}
	jint ShapeDrawable::getChangingConfigurations()
	{
		return callMethod<jint>(
			"getChangingConfigurations",
			"()I"
		);
	}
	android::graphics::drawable::Drawable_ConstantState ShapeDrawable::getConstantState()
	{
		return callObjectMethod(
			"getConstantState",
			"()Landroid/graphics/drawable/Drawable$ConstantState;"
		);
	}
	jint ShapeDrawable::getIntrinsicHeight()
	{
		return callMethod<jint>(
			"getIntrinsicHeight",
			"()I"
		);
	}
	jint ShapeDrawable::getIntrinsicWidth()
	{
		return callMethod<jint>(
			"getIntrinsicWidth",
			"()I"
		);
	}
	jint ShapeDrawable::getOpacity()
	{
		return callMethod<jint>(
			"getOpacity",
			"()I"
		);
	}
	void ShapeDrawable::getOutline(android::graphics::Outline arg0)
	{
		callMethod<void>(
			"getOutline",
			"(Landroid/graphics/Outline;)V",
			arg0.object()
		);
	}
	jboolean ShapeDrawable::getPadding(android::graphics::Rect arg0)
	{
		return callMethod<jboolean>(
			"getPadding",
			"(Landroid/graphics/Rect;)Z",
			arg0.object()
		);
	}
	android::graphics::Paint ShapeDrawable::getPaint()
	{
		return callObjectMethod(
			"getPaint",
			"()Landroid/graphics/Paint;"
		);
	}
	android::graphics::drawable::ShapeDrawable_ShaderFactory ShapeDrawable::getShaderFactory()
	{
		return callObjectMethod(
			"getShaderFactory",
			"()Landroid/graphics/drawable/ShapeDrawable$ShaderFactory;"
		);
	}
	android::graphics::drawable::shapes::Shape ShapeDrawable::getShape()
	{
		return callObjectMethod(
			"getShape",
			"()Landroid/graphics/drawable/shapes/Shape;"
		);
	}
	void ShapeDrawable::inflate(android::content::res::Resources arg0, __JniBaseClass arg1, __JniBaseClass arg2, android::content::res::Resources_Theme arg3)
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
	jboolean ShapeDrawable::isStateful()
	{
		return callMethod<jboolean>(
			"isStateful",
			"()Z"
		);
	}
	android::graphics::drawable::Drawable ShapeDrawable::mutate()
	{
		return callObjectMethod(
			"mutate",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	void ShapeDrawable::setAlpha(jint arg0)
	{
		callMethod<void>(
			"setAlpha",
			"(I)V",
			arg0
		);
	}
	void ShapeDrawable::setColorFilter(android::graphics::ColorFilter arg0)
	{
		callMethod<void>(
			"setColorFilter",
			"(Landroid/graphics/ColorFilter;)V",
			arg0.object()
		);
	}
	void ShapeDrawable::setDither(jboolean arg0)
	{
		callMethod<void>(
			"setDither",
			"(Z)V",
			arg0
		);
	}
	void ShapeDrawable::setIntrinsicHeight(jint arg0)
	{
		callMethod<void>(
			"setIntrinsicHeight",
			"(I)V",
			arg0
		);
	}
	void ShapeDrawable::setIntrinsicWidth(jint arg0)
	{
		callMethod<void>(
			"setIntrinsicWidth",
			"(I)V",
			arg0
		);
	}
	void ShapeDrawable::setPadding(android::graphics::Rect arg0)
	{
		callMethod<void>(
			"setPadding",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		);
	}
	void ShapeDrawable::setPadding(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		callMethod<void>(
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
		callMethod<void>(
			"setShaderFactory",
			"(Landroid/graphics/drawable/ShapeDrawable$ShaderFactory;)V",
			arg0.object()
		);
	}
	void ShapeDrawable::setShape(android::graphics::drawable::shapes::Shape arg0)
	{
		callMethod<void>(
			"setShape",
			"(Landroid/graphics/drawable/shapes/Shape;)V",
			arg0.object()
		);
	}
	void ShapeDrawable::setTintList(android::content::res::ColorStateList arg0)
	{
		callMethod<void>(
			"setTintList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.object()
		);
	}
	void ShapeDrawable::setTintMode(android::graphics::PorterDuff_Mode arg0)
	{
		callMethod<void>(
			"setTintMode",
			"(Landroid/graphics/PorterDuff$Mode;)V",
			arg0.object()
		);
	}
} // namespace android::graphics::drawable
