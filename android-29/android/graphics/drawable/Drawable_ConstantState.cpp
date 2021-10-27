#include "../../content/res/Resources.hpp"
#include "../../content/res/Resources_Theme.hpp"
#include "./Drawable.hpp"
#include "./Drawable_ConstantState.hpp"

namespace android::graphics::drawable
{
	// Fields
	
	Drawable_ConstantState::Drawable_ConstantState(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Drawable_ConstantState::Drawable_ConstantState()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.drawable.Drawable$ConstantState",
			"()V"
		);
	}
	
	// Methods
	jboolean Drawable_ConstantState::canApplyTheme()
	{
		return __thiz.callMethod<jboolean>(
			"canApplyTheme",
			"()Z"
		);
	}
	jint Drawable_ConstantState::getChangingConfigurations()
	{
		return __thiz.callMethod<jint>(
			"getChangingConfigurations",
			"()I"
		);
	}
	QAndroidJniObject Drawable_ConstantState::newDrawable()
	{
		return __thiz.callObjectMethod(
			"newDrawable",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	QAndroidJniObject Drawable_ConstantState::newDrawable(android::content::res::Resources arg0)
	{
		return __thiz.callObjectMethod(
			"newDrawable",
			"(Landroid/content/res/Resources;)Landroid/graphics/drawable/Drawable;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Drawable_ConstantState::newDrawable(android::content::res::Resources arg0, android::content::res::Resources_Theme arg1)
	{
		return __thiz.callObjectMethod(
			"newDrawable",
			"(Landroid/content/res/Resources;Landroid/content/res/Resources$Theme;)Landroid/graphics/drawable/Drawable;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
} // namespace android::graphics::drawable

