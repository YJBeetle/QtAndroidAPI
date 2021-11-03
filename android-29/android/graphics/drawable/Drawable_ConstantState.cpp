#include "../../content/res/Resources.hpp"
#include "../../content/res/Resources_Theme.hpp"
#include "./Drawable.hpp"
#include "./Drawable_ConstantState.hpp"

namespace android::graphics::drawable
{
	// Fields
	
	// QJniObject forward
	Drawable_ConstantState::Drawable_ConstantState(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	Drawable_ConstantState::Drawable_ConstantState()
		: JObject(
			"android.graphics.drawable.Drawable$ConstantState",
			"()V"
		) {}
	
	// Methods
	jboolean Drawable_ConstantState::canApplyTheme() const
	{
		return callMethod<jboolean>(
			"canApplyTheme",
			"()Z"
		);
	}
	jint Drawable_ConstantState::getChangingConfigurations() const
	{
		return callMethod<jint>(
			"getChangingConfigurations",
			"()I"
		);
	}
	android::graphics::drawable::Drawable Drawable_ConstantState::newDrawable() const
	{
		return callObjectMethod(
			"newDrawable",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	android::graphics::drawable::Drawable Drawable_ConstantState::newDrawable(android::content::res::Resources arg0) const
	{
		return callObjectMethod(
			"newDrawable",
			"(Landroid/content/res/Resources;)Landroid/graphics/drawable/Drawable;",
			arg0.object()
		);
	}
	android::graphics::drawable::Drawable Drawable_ConstantState::newDrawable(android::content::res::Resources arg0, android::content::res::Resources_Theme arg1) const
	{
		return callObjectMethod(
			"newDrawable",
			"(Landroid/content/res/Resources;Landroid/content/res/Resources$Theme;)Landroid/graphics/drawable/Drawable;",
			arg0.object(),
			arg1.object()
		);
	}
} // namespace android::graphics::drawable

