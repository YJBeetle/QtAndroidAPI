#pragma once

#ifndef ANDROID_GRAPHICS_DRAWABLE_DRAWABLE_CONSTANTSTATE
#define ANDROID_GRAPHICS_DRAWABLE_DRAWABLE_CONSTANTSTATE

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::graphics::drawable
{
	class Drawable;
}
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
	class Drawable_ConstantState : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject newDrawable(__jni_impl::android::content::res::Resources arg0, __jni_impl::android::content::res::Resources_Theme arg1);
		QAndroidJniObject newDrawable(__jni_impl::android::content::res::Resources arg0);
		QAndroidJniObject newDrawable();
		jint getChangingConfigurations();
		jboolean canApplyTheme();
	};
} // namespace __jni_impl::android::graphics::drawable

#include "Drawable.hpp"
#include "../../content/res/Resources.hpp"
#include "../../content/res/Resources_Theme.hpp"

namespace __jni_impl::android::graphics::drawable
{
	// Fields
	
	// Constructors
	void Drawable_ConstantState::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.drawable.Drawable$ConstantState",
			"()V");
	}
	
	// Methods
	QAndroidJniObject Drawable_ConstantState::newDrawable(__jni_impl::android::content::res::Resources arg0, __jni_impl::android::content::res::Resources_Theme arg1)
	{
		return __thiz.callObjectMethod(
			"newDrawable",
			"(Landroid/content/res/Resources;Landroid/content/res/Resources$Theme;)Landroid/graphics/drawable/Drawable;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
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
	QAndroidJniObject Drawable_ConstantState::newDrawable()
	{
		return __thiz.callObjectMethod(
			"newDrawable",
			"()Landroid/graphics/drawable/Drawable;"
		);
	}
	jint Drawable_ConstantState::getChangingConfigurations()
	{
		return __thiz.callMethod<jint>(
			"getChangingConfigurations",
			"()I"
		);
	}
	jboolean Drawable_ConstantState::canApplyTheme()
	{
		return __thiz.callMethod<jboolean>(
			"canApplyTheme",
			"()Z"
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

#endif // ANDROID_GRAPHICS_DRAWABLE_DRAWABLE_CONSTANTSTATE

