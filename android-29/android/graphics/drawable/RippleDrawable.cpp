#include "../../content/res/ColorStateList.hpp"
#include "../../content/res/Resources.hpp"
#include "../../content/res/Resources_Theme.hpp"
#include "../Canvas.hpp"
#include "../Outline.hpp"
#include "../Rect.hpp"
#include "./Drawable.hpp"
#include "./Drawable_ConstantState.hpp"
#include "./RippleDrawable.hpp"

namespace android::graphics::drawable
{
	// Fields
	jint RippleDrawable::RADIUS_AUTO()
	{
		return getStaticField<jint>(
			"android.graphics.drawable.RippleDrawable",
			"RADIUS_AUTO"
		);
	}
	
	// QJniObject forward
	RippleDrawable::RippleDrawable(QJniObject obj) : android::graphics::drawable::LayerDrawable(obj) {}
	
	// Constructors
	RippleDrawable::RippleDrawable(android::content::res::ColorStateList arg0, android::graphics::drawable::Drawable arg1, android::graphics::drawable::Drawable arg2)
		: android::graphics::drawable::LayerDrawable(
			"android.graphics.drawable.RippleDrawable",
			"(Landroid/content/res/ColorStateList;Landroid/graphics/drawable/Drawable;Landroid/graphics/drawable/Drawable;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		) {}
	
	// Methods
	void RippleDrawable::applyTheme(android::content::res::Resources_Theme arg0)
	{
		callMethod<void>(
			"applyTheme",
			"(Landroid/content/res/Resources$Theme;)V",
			arg0.object()
		);
	}
	jboolean RippleDrawable::canApplyTheme()
	{
		return callMethod<jboolean>(
			"canApplyTheme",
			"()Z"
		);
	}
	void RippleDrawable::draw(android::graphics::Canvas arg0)
	{
		callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.object()
		);
	}
	android::graphics::drawable::Drawable_ConstantState RippleDrawable::getConstantState()
	{
		return callObjectMethod(
			"getConstantState",
			"()Landroid/graphics/drawable/Drawable$ConstantState;"
		);
	}
	android::graphics::Rect RippleDrawable::getDirtyBounds()
	{
		return callObjectMethod(
			"getDirtyBounds",
			"()Landroid/graphics/Rect;"
		);
	}
	void RippleDrawable::getHotspotBounds(android::graphics::Rect arg0)
	{
		callMethod<void>(
			"getHotspotBounds",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		);
	}
	jint RippleDrawable::getOpacity()
	{
		return callMethod<jint>(
			"getOpacity",
			"()I"
		);
	}
	void RippleDrawable::getOutline(android::graphics::Outline arg0)
	{
		callMethod<void>(
			"getOutline",
			"(Landroid/graphics/Outline;)V",
			arg0.object()
		);
	}
	jint RippleDrawable::getRadius()
	{
		return callMethod<jint>(
			"getRadius",
			"()I"
		);
	}
	void RippleDrawable::inflate(android::content::res::Resources arg0, JObject arg1, JObject arg2, android::content::res::Resources_Theme arg3)
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
	void RippleDrawable::invalidateSelf()
	{
		callMethod<void>(
			"invalidateSelf",
			"()V"
		);
	}
	jboolean RippleDrawable::isProjected()
	{
		return callMethod<jboolean>(
			"isProjected",
			"()Z"
		);
	}
	jboolean RippleDrawable::isStateful()
	{
		return callMethod<jboolean>(
			"isStateful",
			"()Z"
		);
	}
	void RippleDrawable::jumpToCurrentState()
	{
		callMethod<void>(
			"jumpToCurrentState",
			"()V"
		);
	}
	android::graphics::drawable::Drawable RippleDrawable::mutate()
	{
		return callObjectMethod(
			"mutate",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	void RippleDrawable::setColor(android::content::res::ColorStateList arg0)
	{
		callMethod<void>(
			"setColor",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.object()
		);
	}
	jboolean RippleDrawable::setDrawableByLayerId(jint arg0, android::graphics::drawable::Drawable arg1)
	{
		return callMethod<jboolean>(
			"setDrawableByLayerId",
			"(ILandroid/graphics/drawable/Drawable;)Z",
			arg0,
			arg1.object()
		);
	}
	void RippleDrawable::setHotspot(jfloat arg0, jfloat arg1)
	{
		callMethod<void>(
			"setHotspot",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void RippleDrawable::setHotspotBounds(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		callMethod<void>(
			"setHotspotBounds",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void RippleDrawable::setPaddingMode(jint arg0)
	{
		callMethod<void>(
			"setPaddingMode",
			"(I)V",
			arg0
		);
	}
	void RippleDrawable::setRadius(jint arg0)
	{
		callMethod<void>(
			"setRadius",
			"(I)V",
			arg0
		);
	}
	jboolean RippleDrawable::setVisible(jboolean arg0, jboolean arg1)
	{
		return callMethod<jboolean>(
			"setVisible",
			"(ZZ)Z",
			arg0,
			arg1
		);
	}
} // namespace android::graphics::drawable

