#pragma once

#include "../../../JArray.hpp"
#include "../Rect.def.hpp"
#include "./Drawable.def.hpp"
#include "./DrawableContainer_DrawableContainerState.def.hpp"

namespace android::graphics::drawable
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jint DrawableContainer_DrawableContainerState::addChild(android::graphics::drawable::Drawable arg0) const
	{
		return callMethod<jint>(
			"addChild",
			"(Landroid/graphics/drawable/Drawable;)I",
			arg0.object()
		);
	}
	inline jboolean DrawableContainer_DrawableContainerState::canApplyTheme() const
	{
		return callMethod<jboolean>(
			"canApplyTheme",
			"()Z"
		);
	}
	inline jboolean DrawableContainer_DrawableContainerState::canConstantState() const
	{
		return callMethod<jboolean>(
			"canConstantState",
			"()Z"
		);
	}
	inline jint DrawableContainer_DrawableContainerState::getChangingConfigurations() const
	{
		return callMethod<jint>(
			"getChangingConfigurations",
			"()I"
		);
	}
	inline android::graphics::drawable::Drawable DrawableContainer_DrawableContainerState::getChild(jint arg0) const
	{
		return callObjectMethod(
			"getChild",
			"(I)Landroid/graphics/drawable/Drawable;",
			arg0
		);
	}
	inline jint DrawableContainer_DrawableContainerState::getChildCount() const
	{
		return callMethod<jint>(
			"getChildCount",
			"()I"
		);
	}
	inline JArray DrawableContainer_DrawableContainerState::getChildren() const
	{
		return callObjectMethod(
			"getChildren",
			"()[Landroid/graphics/drawable/Drawable;"
		);
	}
	inline jint DrawableContainer_DrawableContainerState::getConstantHeight() const
	{
		return callMethod<jint>(
			"getConstantHeight",
			"()I"
		);
	}
	inline jint DrawableContainer_DrawableContainerState::getConstantMinimumHeight() const
	{
		return callMethod<jint>(
			"getConstantMinimumHeight",
			"()I"
		);
	}
	inline jint DrawableContainer_DrawableContainerState::getConstantMinimumWidth() const
	{
		return callMethod<jint>(
			"getConstantMinimumWidth",
			"()I"
		);
	}
	inline android::graphics::Rect DrawableContainer_DrawableContainerState::getConstantPadding() const
	{
		return callObjectMethod(
			"getConstantPadding",
			"()Landroid/graphics/Rect;"
		);
	}
	inline jint DrawableContainer_DrawableContainerState::getConstantWidth() const
	{
		return callMethod<jint>(
			"getConstantWidth",
			"()I"
		);
	}
	inline jint DrawableContainer_DrawableContainerState::getEnterFadeDuration() const
	{
		return callMethod<jint>(
			"getEnterFadeDuration",
			"()I"
		);
	}
	inline jint DrawableContainer_DrawableContainerState::getExitFadeDuration() const
	{
		return callMethod<jint>(
			"getExitFadeDuration",
			"()I"
		);
	}
	inline jint DrawableContainer_DrawableContainerState::getOpacity() const
	{
		return callMethod<jint>(
			"getOpacity",
			"()I"
		);
	}
	inline void DrawableContainer_DrawableContainerState::growArray(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"growArray",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline jboolean DrawableContainer_DrawableContainerState::isConstantSize() const
	{
		return callMethod<jboolean>(
			"isConstantSize",
			"()Z"
		);
	}
	inline jboolean DrawableContainer_DrawableContainerState::isStateful() const
	{
		return callMethod<jboolean>(
			"isStateful",
			"()Z"
		);
	}
	inline void DrawableContainer_DrawableContainerState::setConstantSize(jboolean arg0) const
	{
		callMethod<void>(
			"setConstantSize",
			"(Z)V",
			arg0
		);
	}
	inline void DrawableContainer_DrawableContainerState::setEnterFadeDuration(jint arg0) const
	{
		callMethod<void>(
			"setEnterFadeDuration",
			"(I)V",
			arg0
		);
	}
	inline void DrawableContainer_DrawableContainerState::setExitFadeDuration(jint arg0) const
	{
		callMethod<void>(
			"setExitFadeDuration",
			"(I)V",
			arg0
		);
	}
	inline void DrawableContainer_DrawableContainerState::setVariablePadding(jboolean arg0) const
	{
		callMethod<void>(
			"setVariablePadding",
			"(Z)V",
			arg0
		);
	}
} // namespace android::graphics::drawable

// Base class headers
#include "./Drawable_ConstantState.hpp"

