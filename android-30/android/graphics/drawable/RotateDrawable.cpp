#include "../../content/res/Resources.hpp"
#include "../../content/res/Resources_Theme.hpp"
#include "../Canvas.hpp"
#include "./RotateDrawable.hpp"

namespace android::graphics::drawable
{
	// Fields
	
	// Constructors
	RotateDrawable::RotateDrawable()
		: android::graphics::drawable::DrawableWrapper(
			"android.graphics.drawable.RotateDrawable",
			"()V"
		) {}
	
	// Methods
	void RotateDrawable::applyTheme(android::content::res::Resources_Theme arg0) const
	{
		callMethod<void>(
			"applyTheme",
			"(Landroid/content/res/Resources$Theme;)V",
			arg0.object()
		);
	}
	void RotateDrawable::draw(android::graphics::Canvas arg0) const
	{
		callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.object()
		);
	}
	jfloat RotateDrawable::getFromDegrees() const
	{
		return callMethod<jfloat>(
			"getFromDegrees",
			"()F"
		);
	}
	jfloat RotateDrawable::getPivotX() const
	{
		return callMethod<jfloat>(
			"getPivotX",
			"()F"
		);
	}
	jfloat RotateDrawable::getPivotY() const
	{
		return callMethod<jfloat>(
			"getPivotY",
			"()F"
		);
	}
	jfloat RotateDrawable::getToDegrees() const
	{
		return callMethod<jfloat>(
			"getToDegrees",
			"()F"
		);
	}
	void RotateDrawable::inflate(android::content::res::Resources arg0, JObject arg1, JObject arg2, android::content::res::Resources_Theme arg3) const
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
	jboolean RotateDrawable::isPivotXRelative() const
	{
		return callMethod<jboolean>(
			"isPivotXRelative",
			"()Z"
		);
	}
	jboolean RotateDrawable::isPivotYRelative() const
	{
		return callMethod<jboolean>(
			"isPivotYRelative",
			"()Z"
		);
	}
	void RotateDrawable::setFromDegrees(jfloat arg0) const
	{
		callMethod<void>(
			"setFromDegrees",
			"(F)V",
			arg0
		);
	}
	void RotateDrawable::setPivotX(jfloat arg0) const
	{
		callMethod<void>(
			"setPivotX",
			"(F)V",
			arg0
		);
	}
	void RotateDrawable::setPivotXRelative(jboolean arg0) const
	{
		callMethod<void>(
			"setPivotXRelative",
			"(Z)V",
			arg0
		);
	}
	void RotateDrawable::setPivotY(jfloat arg0) const
	{
		callMethod<void>(
			"setPivotY",
			"(F)V",
			arg0
		);
	}
	void RotateDrawable::setPivotYRelative(jboolean arg0) const
	{
		callMethod<void>(
			"setPivotYRelative",
			"(Z)V",
			arg0
		);
	}
	void RotateDrawable::setToDegrees(jfloat arg0) const
	{
		callMethod<void>(
			"setToDegrees",
			"(F)V",
			arg0
		);
	}
} // namespace android::graphics::drawable

