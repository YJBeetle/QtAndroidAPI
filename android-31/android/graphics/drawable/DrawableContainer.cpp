#include "../../../JIntArray.hpp"
#include "../../content/res/ColorStateList.hpp"
#include "../../content/res/Resources_Theme.hpp"
#include "../BlendMode.hpp"
#include "../Canvas.hpp"
#include "../ColorFilter.hpp"
#include "../Insets.hpp"
#include "../Outline.hpp"
#include "../Rect.hpp"
#include "./Drawable.hpp"
#include "./Drawable_ConstantState.hpp"
#include "./DrawableContainer_DrawableContainerState.hpp"
#include "./DrawableContainer.hpp"

namespace android::graphics::drawable
{
	// Fields
	
	// Constructors
	DrawableContainer::DrawableContainer()
		: android::graphics::drawable::Drawable(
			"android.graphics.drawable.DrawableContainer",
			"()V"
		) {}
	
	// Methods
	void DrawableContainer::applyTheme(android::content::res::Resources_Theme arg0) const
	{
		callMethod<void>(
			"applyTheme",
			"(Landroid/content/res/Resources$Theme;)V",
			arg0.object()
		);
	}
	jboolean DrawableContainer::canApplyTheme() const
	{
		return callMethod<jboolean>(
			"canApplyTheme",
			"()Z"
		);
	}
	void DrawableContainer::draw(android::graphics::Canvas arg0) const
	{
		callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.object()
		);
	}
	jint DrawableContainer::getAlpha() const
	{
		return callMethod<jint>(
			"getAlpha",
			"()I"
		);
	}
	jint DrawableContainer::getChangingConfigurations() const
	{
		return callMethod<jint>(
			"getChangingConfigurations",
			"()I"
		);
	}
	android::graphics::drawable::Drawable_ConstantState DrawableContainer::getConstantState() const
	{
		return callObjectMethod(
			"getConstantState",
			"()Landroid/graphics/drawable/Drawable$ConstantState;"
		);
	}
	android::graphics::drawable::Drawable DrawableContainer::getCurrent() const
	{
		return callObjectMethod(
			"getCurrent",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	void DrawableContainer::getHotspotBounds(android::graphics::Rect arg0) const
	{
		callMethod<void>(
			"getHotspotBounds",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		);
	}
	jint DrawableContainer::getIntrinsicHeight() const
	{
		return callMethod<jint>(
			"getIntrinsicHeight",
			"()I"
		);
	}
	jint DrawableContainer::getIntrinsicWidth() const
	{
		return callMethod<jint>(
			"getIntrinsicWidth",
			"()I"
		);
	}
	jint DrawableContainer::getMinimumHeight() const
	{
		return callMethod<jint>(
			"getMinimumHeight",
			"()I"
		);
	}
	jint DrawableContainer::getMinimumWidth() const
	{
		return callMethod<jint>(
			"getMinimumWidth",
			"()I"
		);
	}
	jint DrawableContainer::getOpacity() const
	{
		return callMethod<jint>(
			"getOpacity",
			"()I"
		);
	}
	android::graphics::Insets DrawableContainer::getOpticalInsets() const
	{
		return callObjectMethod(
			"getOpticalInsets",
			"()Landroid/graphics/Insets;"
		);
	}
	void DrawableContainer::getOutline(android::graphics::Outline arg0) const
	{
		callMethod<void>(
			"getOutline",
			"(Landroid/graphics/Outline;)V",
			arg0.object()
		);
	}
	jboolean DrawableContainer::getPadding(android::graphics::Rect arg0) const
	{
		return callMethod<jboolean>(
			"getPadding",
			"(Landroid/graphics/Rect;)Z",
			arg0.object()
		);
	}
	jboolean DrawableContainer::hasFocusStateSpecified() const
	{
		return callMethod<jboolean>(
			"hasFocusStateSpecified",
			"()Z"
		);
	}
	void DrawableContainer::invalidateDrawable(android::graphics::drawable::Drawable arg0) const
	{
		callMethod<void>(
			"invalidateDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	jboolean DrawableContainer::isAutoMirrored() const
	{
		return callMethod<jboolean>(
			"isAutoMirrored",
			"()Z"
		);
	}
	jboolean DrawableContainer::isStateful() const
	{
		return callMethod<jboolean>(
			"isStateful",
			"()Z"
		);
	}
	void DrawableContainer::jumpToCurrentState() const
	{
		callMethod<void>(
			"jumpToCurrentState",
			"()V"
		);
	}
	android::graphics::drawable::Drawable DrawableContainer::mutate() const
	{
		return callObjectMethod(
			"mutate",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	jboolean DrawableContainer::onLayoutDirectionChanged(jint arg0) const
	{
		return callMethod<jboolean>(
			"onLayoutDirectionChanged",
			"(I)Z",
			arg0
		);
	}
	void DrawableContainer::scheduleDrawable(android::graphics::drawable::Drawable arg0, JObject arg1, jlong arg2) const
	{
		callMethod<void>(
			"scheduleDrawable",
			"(Landroid/graphics/drawable/Drawable;Ljava/lang/Runnable;J)V",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	jboolean DrawableContainer::selectDrawable(jint arg0) const
	{
		return callMethod<jboolean>(
			"selectDrawable",
			"(I)Z",
			arg0
		);
	}
	void DrawableContainer::setAlpha(jint arg0) const
	{
		callMethod<void>(
			"setAlpha",
			"(I)V",
			arg0
		);
	}
	void DrawableContainer::setAutoMirrored(jboolean arg0) const
	{
		callMethod<void>(
			"setAutoMirrored",
			"(Z)V",
			arg0
		);
	}
	void DrawableContainer::setColorFilter(android::graphics::ColorFilter arg0) const
	{
		callMethod<void>(
			"setColorFilter",
			"(Landroid/graphics/ColorFilter;)V",
			arg0.object()
		);
	}
	void DrawableContainer::setDither(jboolean arg0) const
	{
		callMethod<void>(
			"setDither",
			"(Z)V",
			arg0
		);
	}
	void DrawableContainer::setEnterFadeDuration(jint arg0) const
	{
		callMethod<void>(
			"setEnterFadeDuration",
			"(I)V",
			arg0
		);
	}
	void DrawableContainer::setExitFadeDuration(jint arg0) const
	{
		callMethod<void>(
			"setExitFadeDuration",
			"(I)V",
			arg0
		);
	}
	void DrawableContainer::setHotspot(jfloat arg0, jfloat arg1) const
	{
		callMethod<void>(
			"setHotspot",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void DrawableContainer::setHotspotBounds(jint arg0, jint arg1, jint arg2, jint arg3) const
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
	void DrawableContainer::setTintBlendMode(android::graphics::BlendMode arg0) const
	{
		callMethod<void>(
			"setTintBlendMode",
			"(Landroid/graphics/BlendMode;)V",
			arg0.object()
		);
	}
	void DrawableContainer::setTintList(android::content::res::ColorStateList arg0) const
	{
		callMethod<void>(
			"setTintList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.object()
		);
	}
	jboolean DrawableContainer::setVisible(jboolean arg0, jboolean arg1) const
	{
		return callMethod<jboolean>(
			"setVisible",
			"(ZZ)Z",
			arg0,
			arg1
		);
	}
	void DrawableContainer::unscheduleDrawable(android::graphics::drawable::Drawable arg0, JObject arg1) const
	{
		callMethod<void>(
			"unscheduleDrawable",
			"(Landroid/graphics/drawable/Drawable;Ljava/lang/Runnable;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::graphics::drawable

