#include "../../../JArray.hpp"
#include "../Rect.hpp"
#include "./Drawable.hpp"
#include "./DrawableContainer_DrawableContainerState.hpp"

namespace android::graphics::drawable
{
	// Fields
	
	// QJniObject forward
	DrawableContainer_DrawableContainerState::DrawableContainer_DrawableContainerState(QJniObject obj) : android::graphics::drawable::Drawable_ConstantState(obj) {}
	
	// Constructors
	
	// Methods
	jint DrawableContainer_DrawableContainerState::addChild(android::graphics::drawable::Drawable arg0)
	{
		return callMethod<jint>(
			"addChild",
			"(Landroid/graphics/drawable/Drawable;)I",
			arg0.object()
		);
	}
	jboolean DrawableContainer_DrawableContainerState::canApplyTheme()
	{
		return callMethod<jboolean>(
			"canApplyTheme",
			"()Z"
		);
	}
	jboolean DrawableContainer_DrawableContainerState::canConstantState()
	{
		return callMethod<jboolean>(
			"canConstantState",
			"()Z"
		);
	}
	jint DrawableContainer_DrawableContainerState::getChangingConfigurations()
	{
		return callMethod<jint>(
			"getChangingConfigurations",
			"()I"
		);
	}
	android::graphics::drawable::Drawable DrawableContainer_DrawableContainerState::getChild(jint arg0)
	{
		return callObjectMethod(
			"getChild",
			"(I)Landroid/graphics/drawable/Drawable;",
			arg0
		);
	}
	jint DrawableContainer_DrawableContainerState::getChildCount()
	{
		return callMethod<jint>(
			"getChildCount",
			"()I"
		);
	}
	JArray DrawableContainer_DrawableContainerState::getChildren()
	{
		return callObjectMethod(
			"getChildren",
			"()[Landroid/graphics/drawable/Drawable;"
		);
	}
	jint DrawableContainer_DrawableContainerState::getConstantHeight()
	{
		return callMethod<jint>(
			"getConstantHeight",
			"()I"
		);
	}
	jint DrawableContainer_DrawableContainerState::getConstantMinimumHeight()
	{
		return callMethod<jint>(
			"getConstantMinimumHeight",
			"()I"
		);
	}
	jint DrawableContainer_DrawableContainerState::getConstantMinimumWidth()
	{
		return callMethod<jint>(
			"getConstantMinimumWidth",
			"()I"
		);
	}
	android::graphics::Rect DrawableContainer_DrawableContainerState::getConstantPadding()
	{
		return callObjectMethod(
			"getConstantPadding",
			"()Landroid/graphics/Rect;"
		);
	}
	jint DrawableContainer_DrawableContainerState::getConstantWidth()
	{
		return callMethod<jint>(
			"getConstantWidth",
			"()I"
		);
	}
	jint DrawableContainer_DrawableContainerState::getEnterFadeDuration()
	{
		return callMethod<jint>(
			"getEnterFadeDuration",
			"()I"
		);
	}
	jint DrawableContainer_DrawableContainerState::getExitFadeDuration()
	{
		return callMethod<jint>(
			"getExitFadeDuration",
			"()I"
		);
	}
	jint DrawableContainer_DrawableContainerState::getOpacity()
	{
		return callMethod<jint>(
			"getOpacity",
			"()I"
		);
	}
	void DrawableContainer_DrawableContainerState::growArray(jint arg0, jint arg1)
	{
		callMethod<void>(
			"growArray",
			"(II)V",
			arg0,
			arg1
		);
	}
	jboolean DrawableContainer_DrawableContainerState::isConstantSize()
	{
		return callMethod<jboolean>(
			"isConstantSize",
			"()Z"
		);
	}
	jboolean DrawableContainer_DrawableContainerState::isStateful()
	{
		return callMethod<jboolean>(
			"isStateful",
			"()Z"
		);
	}
	void DrawableContainer_DrawableContainerState::setConstantSize(jboolean arg0)
	{
		callMethod<void>(
			"setConstantSize",
			"(Z)V",
			arg0
		);
	}
	void DrawableContainer_DrawableContainerState::setEnterFadeDuration(jint arg0)
	{
		callMethod<void>(
			"setEnterFadeDuration",
			"(I)V",
			arg0
		);
	}
	void DrawableContainer_DrawableContainerState::setExitFadeDuration(jint arg0)
	{
		callMethod<void>(
			"setExitFadeDuration",
			"(I)V",
			arg0
		);
	}
	void DrawableContainer_DrawableContainerState::setVariablePadding(jboolean arg0)
	{
		callMethod<void>(
			"setVariablePadding",
			"(Z)V",
			arg0
		);
	}
} // namespace android::graphics::drawable

