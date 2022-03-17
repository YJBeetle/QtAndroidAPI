#pragma once

#include "../../../JIntArray.hpp"
#include "../../content/res/ColorStateList.def.hpp"
#include "../../content/res/Resources.def.hpp"
#include "../../content/res/Resources_Theme.def.hpp"
#include "../BlendMode.def.hpp"
#include "../Canvas.def.hpp"
#include "../ColorFilter.def.hpp"
#include "../Outline.def.hpp"
#include "../Paint.def.hpp"
#include "../Rect.def.hpp"
#include "./Drawable.def.hpp"
#include "./Drawable_ConstantState.def.hpp"
#include "./ShapeDrawable_ShaderFactory.def.hpp"
#include "./shapes/Shape.def.hpp"
#include "../../../JString.hpp"
#include "./ShapeDrawable.def.hpp"

namespace android::graphics::drawable
{
	// Fields
	
	// Constructors
	inline ShapeDrawable::ShapeDrawable()
		: android::graphics::drawable::Drawable(
			"android.graphics.drawable.ShapeDrawable",
			"()V"
		) {}
	inline ShapeDrawable::ShapeDrawable(android::graphics::drawable::shapes::Shape arg0)
		: android::graphics::drawable::Drawable(
			"android.graphics.drawable.ShapeDrawable",
			"(Landroid/graphics/drawable/shapes/Shape;)V",
			arg0.object()
		) {}
	
	// Methods
	inline void ShapeDrawable::applyTheme(android::content::res::Resources_Theme arg0) const
	{
		callMethod<void>(
			"applyTheme",
			"(Landroid/content/res/Resources$Theme;)V",
			arg0.object()
		);
	}
	inline void ShapeDrawable::draw(android::graphics::Canvas arg0) const
	{
		callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.object()
		);
	}
	inline jint ShapeDrawable::getAlpha() const
	{
		return callMethod<jint>(
			"getAlpha",
			"()I"
		);
	}
	inline jint ShapeDrawable::getChangingConfigurations() const
	{
		return callMethod<jint>(
			"getChangingConfigurations",
			"()I"
		);
	}
	inline android::graphics::drawable::Drawable_ConstantState ShapeDrawable::getConstantState() const
	{
		return callObjectMethod(
			"getConstantState",
			"()Landroid/graphics/drawable/Drawable$ConstantState;"
		);
	}
	inline jint ShapeDrawable::getIntrinsicHeight() const
	{
		return callMethod<jint>(
			"getIntrinsicHeight",
			"()I"
		);
	}
	inline jint ShapeDrawable::getIntrinsicWidth() const
	{
		return callMethod<jint>(
			"getIntrinsicWidth",
			"()I"
		);
	}
	inline jint ShapeDrawable::getOpacity() const
	{
		return callMethod<jint>(
			"getOpacity",
			"()I"
		);
	}
	inline void ShapeDrawable::getOutline(android::graphics::Outline arg0) const
	{
		callMethod<void>(
			"getOutline",
			"(Landroid/graphics/Outline;)V",
			arg0.object()
		);
	}
	inline jboolean ShapeDrawable::getPadding(android::graphics::Rect arg0) const
	{
		return callMethod<jboolean>(
			"getPadding",
			"(Landroid/graphics/Rect;)Z",
			arg0.object()
		);
	}
	inline android::graphics::Paint ShapeDrawable::getPaint() const
	{
		return callObjectMethod(
			"getPaint",
			"()Landroid/graphics/Paint;"
		);
	}
	inline android::graphics::drawable::ShapeDrawable_ShaderFactory ShapeDrawable::getShaderFactory() const
	{
		return callObjectMethod(
			"getShaderFactory",
			"()Landroid/graphics/drawable/ShapeDrawable$ShaderFactory;"
		);
	}
	inline android::graphics::drawable::shapes::Shape ShapeDrawable::getShape() const
	{
		return callObjectMethod(
			"getShape",
			"()Landroid/graphics/drawable/shapes/Shape;"
		);
	}
	inline void ShapeDrawable::inflate(android::content::res::Resources arg0, JObject arg1, JObject arg2, android::content::res::Resources_Theme arg3) const
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
	inline jboolean ShapeDrawable::isStateful() const
	{
		return callMethod<jboolean>(
			"isStateful",
			"()Z"
		);
	}
	inline android::graphics::drawable::Drawable ShapeDrawable::mutate() const
	{
		return callObjectMethod(
			"mutate",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	inline void ShapeDrawable::setAlpha(jint arg0) const
	{
		callMethod<void>(
			"setAlpha",
			"(I)V",
			arg0
		);
	}
	inline void ShapeDrawable::setColorFilter(android::graphics::ColorFilter arg0) const
	{
		callMethod<void>(
			"setColorFilter",
			"(Landroid/graphics/ColorFilter;)V",
			arg0.object()
		);
	}
	inline void ShapeDrawable::setDither(jboolean arg0) const
	{
		callMethod<void>(
			"setDither",
			"(Z)V",
			arg0
		);
	}
	inline void ShapeDrawable::setIntrinsicHeight(jint arg0) const
	{
		callMethod<void>(
			"setIntrinsicHeight",
			"(I)V",
			arg0
		);
	}
	inline void ShapeDrawable::setIntrinsicWidth(jint arg0) const
	{
		callMethod<void>(
			"setIntrinsicWidth",
			"(I)V",
			arg0
		);
	}
	inline void ShapeDrawable::setPadding(android::graphics::Rect arg0) const
	{
		callMethod<void>(
			"setPadding",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		);
	}
	inline void ShapeDrawable::setPadding(jint arg0, jint arg1, jint arg2, jint arg3) const
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
	inline void ShapeDrawable::setShaderFactory(android::graphics::drawable::ShapeDrawable_ShaderFactory arg0) const
	{
		callMethod<void>(
			"setShaderFactory",
			"(Landroid/graphics/drawable/ShapeDrawable$ShaderFactory;)V",
			arg0.object()
		);
	}
	inline void ShapeDrawable::setShape(android::graphics::drawable::shapes::Shape arg0) const
	{
		callMethod<void>(
			"setShape",
			"(Landroid/graphics/drawable/shapes/Shape;)V",
			arg0.object()
		);
	}
	inline void ShapeDrawable::setTintBlendMode(android::graphics::BlendMode arg0) const
	{
		callMethod<void>(
			"setTintBlendMode",
			"(Landroid/graphics/BlendMode;)V",
			arg0.object()
		);
	}
	inline void ShapeDrawable::setTintList(android::content::res::ColorStateList arg0) const
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

