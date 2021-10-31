#include "../../content/res/Resources.hpp"
#include "../../content/res/Resources_Theme.hpp"
#include "../Canvas.hpp"
#include "./RotateDrawable.hpp"

namespace android::graphics::drawable
{
	// Fields
	
	// QAndroidJniObject forward
	RotateDrawable::RotateDrawable(QAndroidJniObject obj) : android::graphics::drawable::DrawableWrapper(obj) {}
	
	// Constructors
	RotateDrawable::RotateDrawable()
		: android::graphics::drawable::DrawableWrapper(
			"android.graphics.drawable.RotateDrawable",
			"()V"
		) {}
	
	// Methods
	void RotateDrawable::applyTheme(android::content::res::Resources_Theme arg0)
	{
		callMethod<void>(
			"applyTheme",
			"(Landroid/content/res/Resources$Theme;)V",
			arg0.object()
		);
	}
	void RotateDrawable::draw(android::graphics::Canvas arg0)
	{
		callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.object()
		);
	}
	jfloat RotateDrawable::getFromDegrees()
	{
		return callMethod<jfloat>(
			"getFromDegrees",
			"()F"
		);
	}
	jfloat RotateDrawable::getPivotX()
	{
		return callMethod<jfloat>(
			"getPivotX",
			"()F"
		);
	}
	jfloat RotateDrawable::getPivotY()
	{
		return callMethod<jfloat>(
			"getPivotY",
			"()F"
		);
	}
	jfloat RotateDrawable::getToDegrees()
	{
		return callMethod<jfloat>(
			"getToDegrees",
			"()F"
		);
	}
	void RotateDrawable::inflate(android::content::res::Resources arg0, __JniBaseClass arg1, __JniBaseClass arg2, android::content::res::Resources_Theme arg3)
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
	jboolean RotateDrawable::isPivotXRelative()
	{
		return callMethod<jboolean>(
			"isPivotXRelative",
			"()Z"
		);
	}
	jboolean RotateDrawable::isPivotYRelative()
	{
		return callMethod<jboolean>(
			"isPivotYRelative",
			"()Z"
		);
	}
	void RotateDrawable::setFromDegrees(jfloat arg0)
	{
		callMethod<void>(
			"setFromDegrees",
			"(F)V",
			arg0
		);
	}
	void RotateDrawable::setPivotX(jfloat arg0)
	{
		callMethod<void>(
			"setPivotX",
			"(F)V",
			arg0
		);
	}
	void RotateDrawable::setPivotXRelative(jboolean arg0)
	{
		callMethod<void>(
			"setPivotXRelative",
			"(Z)V",
			arg0
		);
	}
	void RotateDrawable::setPivotY(jfloat arg0)
	{
		callMethod<void>(
			"setPivotY",
			"(F)V",
			arg0
		);
	}
	void RotateDrawable::setPivotYRelative(jboolean arg0)
	{
		callMethod<void>(
			"setPivotYRelative",
			"(Z)V",
			arg0
		);
	}
	void RotateDrawable::setToDegrees(jfloat arg0)
	{
		callMethod<void>(
			"setToDegrees",
			"(F)V",
			arg0
		);
	}
} // namespace android::graphics::drawable

