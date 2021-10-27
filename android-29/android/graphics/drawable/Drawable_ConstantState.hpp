#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::content::res
{
	class Resources;
}
namespace __jni_impl::android::content::res
{
	class Resources_Theme;
}
namespace __jni_impl::android::graphics::drawable
{
	class Drawable;
}

namespace __jni_impl::android::graphics::drawable
{
	class Drawable_ConstantState : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean canApplyTheme();
		jint getChangingConfigurations();
		QAndroidJniObject newDrawable();
		QAndroidJniObject newDrawable(__jni_impl::android::content::res::Resources arg0);
		QAndroidJniObject newDrawable(__jni_impl::android::content::res::Resources arg0, __jni_impl::android::content::res::Resources_Theme arg1);
	};
} // namespace __jni_impl::android::graphics::drawable

#include "../../content/res/Resources.hpp"
#include "../../content/res/Resources_Theme.hpp"
#include "Drawable.hpp"

namespace __jni_impl::android::graphics::drawable
{
	// Fields
	
	// Constructors
	void Drawable_ConstantState::__constructor()
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
	QAndroidJniObject Drawable_ConstantState::newDrawable(__jni_impl::android::content::res::Resources arg0)
	{
		return __thiz.callObjectMethod(
			"newDrawable",
			"(Landroid/content/res/Resources;)Landroid/graphics/drawable/Drawable;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Drawable_ConstantState::newDrawable(__jni_impl::android::content::res::Resources arg0, __jni_impl::android::content::res::Resources_Theme arg1)
	{
		return __thiz.callObjectMethod(
			"newDrawable",
			"(Landroid/content/res/Resources;Landroid/content/res/Resources$Theme;)Landroid/graphics/drawable/Drawable;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::graphics::drawable

namespace android::graphics::drawable
{
	class Drawable_ConstantState : public __jni_impl::android::graphics::drawable::Drawable_ConstantState
	{
	public:
		Drawable_ConstantState(QAndroidJniObject obj) { __thiz = obj; }
		Drawable_ConstantState()
		{
			__constructor();
		}
	};
} // namespace android::graphics::drawable

