#include "../../../JIntArray.hpp"
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
	
	// QAndroidJniObject forward
	RippleDrawable::RippleDrawable(QAndroidJniObject obj) : android::graphics::drawable::LayerDrawable(obj) {}
	
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
	void RippleDrawable::applyTheme(android::content::res::Resources_Theme arg0) const
	{
		callMethod<void>(
			"applyTheme",
			"(Landroid/content/res/Resources$Theme;)V",
			arg0.object()
		);
	}
	jboolean RippleDrawable::canApplyTheme() const
	{
		return callMethod<jboolean>(
			"canApplyTheme",
			"()Z"
		);
	}
	void RippleDrawable::draw(android::graphics::Canvas arg0) const
	{
		callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.object()
		);
	}
	android::graphics::drawable::Drawable_ConstantState RippleDrawable::getConstantState() const
	{
		return callObjectMethod(
			"getConstantState",
			"()Landroid/graphics/drawable/Drawable$ConstantState;"
		);
	}
	android::graphics::Rect RippleDrawable::getDirtyBounds() const
	{
		return callObjectMethod(
			"getDirtyBounds",
			"()Landroid/graphics/Rect;"
		);
	}
	android::content::res::ColorStateList RippleDrawable::getEffectColor() const
	{
		return callObjectMethod(
			"getEffectColor",
			"()Landroid/content/res/ColorStateList;"
		);
	}
	void RippleDrawable::getHotspotBounds(android::graphics::Rect arg0) const
	{
		callMethod<void>(
			"getHotspotBounds",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		);
	}
	jint RippleDrawable::getOpacity() const
	{
		return callMethod<jint>(
			"getOpacity",
			"()I"
		);
	}
	void RippleDrawable::getOutline(android::graphics::Outline arg0) const
	{
		callMethod<void>(
			"getOutline",
			"(Landroid/graphics/Outline;)V",
			arg0.object()
		);
	}
	jint RippleDrawable::getRadius() const
	{
		return callMethod<jint>(
			"getRadius",
			"()I"
		);
	}
	jboolean RippleDrawable::hasFocusStateSpecified() const
	{
		return callMethod<jboolean>(
			"hasFocusStateSpecified",
			"()Z"
		);
	}
	void RippleDrawable::inflate(android::content::res::Resources arg0, JObject arg1, JObject arg2, android::content::res::Resources_Theme arg3) const
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
	void RippleDrawable::invalidateSelf() const
	{
		callMethod<void>(
			"invalidateSelf",
			"()V"
		);
	}
	jboolean RippleDrawable::isProjected() const
	{
		return callMethod<jboolean>(
			"isProjected",
			"()Z"
		);
	}
	jboolean RippleDrawable::isStateful() const
	{
		return callMethod<jboolean>(
			"isStateful",
			"()Z"
		);
	}
	void RippleDrawable::jumpToCurrentState() const
	{
		callMethod<void>(
			"jumpToCurrentState",
			"()V"
		);
	}
	android::graphics::drawable::Drawable RippleDrawable::mutate() const
	{
		return callObjectMethod(
			"mutate",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	void RippleDrawable::setColor(android::content::res::ColorStateList arg0) const
	{
		callMethod<void>(
			"setColor",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.object()
		);
	}
	jboolean RippleDrawable::setDrawableByLayerId(jint arg0, android::graphics::drawable::Drawable arg1) const
	{
		return callMethod<jboolean>(
			"setDrawableByLayerId",
			"(ILandroid/graphics/drawable/Drawable;)Z",
			arg0,
			arg1.object()
		);
	}
	void RippleDrawable::setEffectColor(android::content::res::ColorStateList arg0) const
	{
		callMethod<void>(
			"setEffectColor",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.object()
		);
	}
	void RippleDrawable::setHotspot(jfloat arg0, jfloat arg1) const
	{
		callMethod<void>(
			"setHotspot",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void RippleDrawable::setHotspotBounds(jint arg0, jint arg1, jint arg2, jint arg3) const
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
	void RippleDrawable::setPaddingMode(jint arg0) const
	{
		callMethod<void>(
			"setPaddingMode",
			"(I)V",
			arg0
		);
	}
	void RippleDrawable::setRadius(jint arg0) const
	{
		callMethod<void>(
			"setRadius",
			"(I)V",
			arg0
		);
	}
	jboolean RippleDrawable::setVisible(jboolean arg0, jboolean arg1) const
	{
		return callMethod<jboolean>(
			"setVisible",
			"(ZZ)Z",
			arg0,
			arg1
		);
	}
} // namespace android::graphics::drawable

