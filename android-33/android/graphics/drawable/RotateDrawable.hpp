#pragma once

#include "../../content/res/Resources.def.hpp"
#include "../../content/res/Resources_Theme.def.hpp"
#include "../Canvas.def.hpp"
#include "./RotateDrawable.def.hpp"

namespace android::graphics::drawable
{
	// Fields
	
	// Constructors
	inline RotateDrawable::RotateDrawable()
		: android::graphics::drawable::DrawableWrapper(
			"android.graphics.drawable.RotateDrawable",
			"()V"
		) {}
	
	// Methods
	inline void RotateDrawable::applyTheme(android::content::res::Resources_Theme arg0) const
	{
		callMethod<void>(
			"applyTheme",
			"(Landroid/content/res/Resources$Theme;)V",
			arg0.object()
		);
	}
	inline void RotateDrawable::draw(android::graphics::Canvas arg0) const
	{
		callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.object()
		);
	}
	inline jfloat RotateDrawable::getFromDegrees() const
	{
		return callMethod<jfloat>(
			"getFromDegrees",
			"()F"
		);
	}
	inline jfloat RotateDrawable::getPivotX() const
	{
		return callMethod<jfloat>(
			"getPivotX",
			"()F"
		);
	}
	inline jfloat RotateDrawable::getPivotY() const
	{
		return callMethod<jfloat>(
			"getPivotY",
			"()F"
		);
	}
	inline jfloat RotateDrawable::getToDegrees() const
	{
		return callMethod<jfloat>(
			"getToDegrees",
			"()F"
		);
	}
	inline void RotateDrawable::inflate(android::content::res::Resources arg0, JObject arg1, JObject arg2, android::content::res::Resources_Theme arg3) const
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
	inline jboolean RotateDrawable::isPivotXRelative() const
	{
		return callMethod<jboolean>(
			"isPivotXRelative",
			"()Z"
		);
	}
	inline jboolean RotateDrawable::isPivotYRelative() const
	{
		return callMethod<jboolean>(
			"isPivotYRelative",
			"()Z"
		);
	}
	inline void RotateDrawable::setFromDegrees(jfloat arg0) const
	{
		callMethod<void>(
			"setFromDegrees",
			"(F)V",
			arg0
		);
	}
	inline void RotateDrawable::setPivotX(jfloat arg0) const
	{
		callMethod<void>(
			"setPivotX",
			"(F)V",
			arg0
		);
	}
	inline void RotateDrawable::setPivotXRelative(jboolean arg0) const
	{
		callMethod<void>(
			"setPivotXRelative",
			"(Z)V",
			arg0
		);
	}
	inline void RotateDrawable::setPivotY(jfloat arg0) const
	{
		callMethod<void>(
			"setPivotY",
			"(F)V",
			arg0
		);
	}
	inline void RotateDrawable::setPivotYRelative(jboolean arg0) const
	{
		callMethod<void>(
			"setPivotYRelative",
			"(Z)V",
			arg0
		);
	}
	inline void RotateDrawable::setToDegrees(jfloat arg0) const
	{
		callMethod<void>(
			"setToDegrees",
			"(F)V",
			arg0
		);
	}
} // namespace android::graphics::drawable

// Base class headers
#include "./Drawable.hpp"
#include "./DrawableWrapper.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::graphics::drawable;
#endif
