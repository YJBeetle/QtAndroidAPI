#pragma once

#include "../../content/res/Resources.def.hpp"
#include "../../content/res/Resources_Theme.def.hpp"
#include "./Drawable.def.hpp"
#include "./Drawable_ConstantState.def.hpp"

namespace android::graphics::drawable
{
	// Fields
	
	// Constructors
	inline Drawable_ConstantState::Drawable_ConstantState()
		: JObject(
			"android.graphics.drawable.Drawable$ConstantState",
			"()V"
		) {}
	
	// Methods
	inline jboolean Drawable_ConstantState::canApplyTheme() const
	{
		return callMethod<jboolean>(
			"canApplyTheme",
			"()Z"
		);
	}
	inline jint Drawable_ConstantState::getChangingConfigurations() const
	{
		return callMethod<jint>(
			"getChangingConfigurations",
			"()I"
		);
	}
	inline android::graphics::drawable::Drawable Drawable_ConstantState::newDrawable() const
	{
		return callObjectMethod(
			"newDrawable",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	inline android::graphics::drawable::Drawable Drawable_ConstantState::newDrawable(android::content::res::Resources arg0) const
	{
		return callObjectMethod(
			"newDrawable",
			"(Landroid/content/res/Resources;)Landroid/graphics/drawable/Drawable;",
			arg0.object()
		);
	}
	inline android::graphics::drawable::Drawable Drawable_ConstantState::newDrawable(android::content::res::Resources arg0, android::content::res::Resources_Theme arg1) const
	{
		return callObjectMethod(
			"newDrawable",
			"(Landroid/content/res/Resources;Landroid/content/res/Resources$Theme;)Landroid/graphics/drawable/Drawable;",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::graphics::drawable

// Base class headers

