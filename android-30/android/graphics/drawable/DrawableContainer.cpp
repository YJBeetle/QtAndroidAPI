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
	
	// QAndroidJniObject forward
	DrawableContainer::DrawableContainer(QAndroidJniObject obj) : android::graphics::drawable::Drawable(obj) {}
	
	// Constructors
	DrawableContainer::DrawableContainer()
		: android::graphics::drawable::Drawable(
			"android.graphics.drawable.DrawableContainer",
			"()V"
		) {}
	
	// Methods
	void DrawableContainer::applyTheme(android::content::res::Resources_Theme arg0)
	{
		callMethod<void>(
			"applyTheme",
			"(Landroid/content/res/Resources$Theme;)V",
			arg0.object()
		);
	}
	jboolean DrawableContainer::canApplyTheme()
	{
		return callMethod<jboolean>(
			"canApplyTheme",
			"()Z"
		);
	}
	void DrawableContainer::draw(android::graphics::Canvas arg0)
	{
		callMethod<void>(
			"draw",
			"(Landroid/graphics/Canvas;)V",
			arg0.object()
		);
	}
	jint DrawableContainer::getAlpha()
	{
		return callMethod<jint>(
			"getAlpha",
			"()I"
		);
	}
	jint DrawableContainer::getChangingConfigurations()
	{
		return callMethod<jint>(
			"getChangingConfigurations",
			"()I"
		);
	}
	android::graphics::drawable::Drawable_ConstantState DrawableContainer::getConstantState()
	{
		return callObjectMethod(
			"getConstantState",
			"()Landroid/graphics/drawable/Drawable$ConstantState;"
		);
	}
	android::graphics::drawable::Drawable DrawableContainer::getCurrent()
	{
		return callObjectMethod(
			"getCurrent",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	void DrawableContainer::getHotspotBounds(android::graphics::Rect arg0)
	{
		callMethod<void>(
			"getHotspotBounds",
			"(Landroid/graphics/Rect;)V",
			arg0.object()
		);
	}
	jint DrawableContainer::getIntrinsicHeight()
	{
		return callMethod<jint>(
			"getIntrinsicHeight",
			"()I"
		);
	}
	jint DrawableContainer::getIntrinsicWidth()
	{
		return callMethod<jint>(
			"getIntrinsicWidth",
			"()I"
		);
	}
	jint DrawableContainer::getMinimumHeight()
	{
		return callMethod<jint>(
			"getMinimumHeight",
			"()I"
		);
	}
	jint DrawableContainer::getMinimumWidth()
	{
		return callMethod<jint>(
			"getMinimumWidth",
			"()I"
		);
	}
	jint DrawableContainer::getOpacity()
	{
		return callMethod<jint>(
			"getOpacity",
			"()I"
		);
	}
	android::graphics::Insets DrawableContainer::getOpticalInsets()
	{
		return callObjectMethod(
			"getOpticalInsets",
			"()Landroid/graphics/Insets;"
		);
	}
	void DrawableContainer::getOutline(android::graphics::Outline arg0)
	{
		callMethod<void>(
			"getOutline",
			"(Landroid/graphics/Outline;)V",
			arg0.object()
		);
	}
	jboolean DrawableContainer::getPadding(android::graphics::Rect arg0)
	{
		return callMethod<jboolean>(
			"getPadding",
			"(Landroid/graphics/Rect;)Z",
			arg0.object()
		);
	}
	void DrawableContainer::invalidateDrawable(android::graphics::drawable::Drawable arg0)
	{
		callMethod<void>(
			"invalidateDrawable",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.object()
		);
	}
	jboolean DrawableContainer::isAutoMirrored()
	{
		return callMethod<jboolean>(
			"isAutoMirrored",
			"()Z"
		);
	}
	jboolean DrawableContainer::isStateful()
	{
		return callMethod<jboolean>(
			"isStateful",
			"()Z"
		);
	}
	void DrawableContainer::jumpToCurrentState()
	{
		callMethod<void>(
			"jumpToCurrentState",
			"()V"
		);
	}
	android::graphics::drawable::Drawable DrawableContainer::mutate()
	{
		return callObjectMethod(
			"mutate",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	jboolean DrawableContainer::onLayoutDirectionChanged(jint arg0)
	{
		return callMethod<jboolean>(
			"onLayoutDirectionChanged",
			"(I)Z",
			arg0
		);
	}
	void DrawableContainer::scheduleDrawable(android::graphics::drawable::Drawable arg0, __JniBaseClass arg1, jlong arg2)
	{
		callMethod<void>(
			"scheduleDrawable",
			"(Landroid/graphics/drawable/Drawable;Ljava/lang/Runnable;J)V",
			arg0.object(),
			arg1.object(),
			arg2
		);
	}
	jboolean DrawableContainer::selectDrawable(jint arg0)
	{
		return callMethod<jboolean>(
			"selectDrawable",
			"(I)Z",
			arg0
		);
	}
	void DrawableContainer::setAlpha(jint arg0)
	{
		callMethod<void>(
			"setAlpha",
			"(I)V",
			arg0
		);
	}
	void DrawableContainer::setAutoMirrored(jboolean arg0)
	{
		callMethod<void>(
			"setAutoMirrored",
			"(Z)V",
			arg0
		);
	}
	void DrawableContainer::setColorFilter(android::graphics::ColorFilter arg0)
	{
		callMethod<void>(
			"setColorFilter",
			"(Landroid/graphics/ColorFilter;)V",
			arg0.object()
		);
	}
	void DrawableContainer::setDither(jboolean arg0)
	{
		callMethod<void>(
			"setDither",
			"(Z)V",
			arg0
		);
	}
	void DrawableContainer::setEnterFadeDuration(jint arg0)
	{
		callMethod<void>(
			"setEnterFadeDuration",
			"(I)V",
			arg0
		);
	}
	void DrawableContainer::setExitFadeDuration(jint arg0)
	{
		callMethod<void>(
			"setExitFadeDuration",
			"(I)V",
			arg0
		);
	}
	void DrawableContainer::setHotspot(jfloat arg0, jfloat arg1)
	{
		callMethod<void>(
			"setHotspot",
			"(FF)V",
			arg0,
			arg1
		);
	}
	void DrawableContainer::setHotspotBounds(jint arg0, jint arg1, jint arg2, jint arg3)
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
	void DrawableContainer::setTintBlendMode(android::graphics::BlendMode arg0)
	{
		callMethod<void>(
			"setTintBlendMode",
			"(Landroid/graphics/BlendMode;)V",
			arg0.object()
		);
	}
	void DrawableContainer::setTintList(android::content::res::ColorStateList arg0)
	{
		callMethod<void>(
			"setTintList",
			"(Landroid/content/res/ColorStateList;)V",
			arg0.object()
		);
	}
	jboolean DrawableContainer::setVisible(jboolean arg0, jboolean arg1)
	{
		return callMethod<jboolean>(
			"setVisible",
			"(ZZ)Z",
			arg0,
			arg1
		);
	}
	void DrawableContainer::unscheduleDrawable(android::graphics::drawable::Drawable arg0, __JniBaseClass arg1)
	{
		callMethod<void>(
			"unscheduleDrawable",
			"(Landroid/graphics/drawable/Drawable;Ljava/lang/Runnable;)V",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::graphics::drawable

