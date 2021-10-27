#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::graphics
{
	class Insets;
}
namespace __jni_impl::android::view
{
	class DisplayCutout;
}
namespace __jni_impl::android::view
{
	class WindowInsets;
}

namespace __jni_impl::android::view
{
	class WindowInsets_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::android::view::WindowInsets arg0);
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setDisplayCutout(__jni_impl::android::view::DisplayCutout arg0);
		QAndroidJniObject setMandatorySystemGestureInsets(__jni_impl::android::graphics::Insets arg0);
		QAndroidJniObject setStableInsets(__jni_impl::android::graphics::Insets arg0);
		QAndroidJniObject setSystemGestureInsets(__jni_impl::android::graphics::Insets arg0);
		QAndroidJniObject setSystemWindowInsets(__jni_impl::android::graphics::Insets arg0);
		QAndroidJniObject setTappableElementInsets(__jni_impl::android::graphics::Insets arg0);
	};
} // namespace __jni_impl::android::view

#include "../graphics/Insets.hpp"
#include "DisplayCutout.hpp"
#include "WindowInsets.hpp"

namespace __jni_impl::android::view
{
	// Fields
	
	// Constructors
	void WindowInsets_Builder::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.WindowInsets$Builder",
			"()V"
		);
	}
	void WindowInsets_Builder::__constructor(__jni_impl::android::view::WindowInsets arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.WindowInsets$Builder",
			"(Landroid/view/WindowInsets;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject WindowInsets_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/view/WindowInsets;"
		);
	}
	QAndroidJniObject WindowInsets_Builder::setDisplayCutout(__jni_impl::android::view::DisplayCutout arg0)
	{
		return __thiz.callObjectMethod(
			"setDisplayCutout",
			"(Landroid/view/DisplayCutout;)Landroid/view/WindowInsets$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject WindowInsets_Builder::setMandatorySystemGestureInsets(__jni_impl::android::graphics::Insets arg0)
	{
		return __thiz.callObjectMethod(
			"setMandatorySystemGestureInsets",
			"(Landroid/graphics/Insets;)Landroid/view/WindowInsets$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject WindowInsets_Builder::setStableInsets(__jni_impl::android::graphics::Insets arg0)
	{
		return __thiz.callObjectMethod(
			"setStableInsets",
			"(Landroid/graphics/Insets;)Landroid/view/WindowInsets$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject WindowInsets_Builder::setSystemGestureInsets(__jni_impl::android::graphics::Insets arg0)
	{
		return __thiz.callObjectMethod(
			"setSystemGestureInsets",
			"(Landroid/graphics/Insets;)Landroid/view/WindowInsets$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject WindowInsets_Builder::setSystemWindowInsets(__jni_impl::android::graphics::Insets arg0)
	{
		return __thiz.callObjectMethod(
			"setSystemWindowInsets",
			"(Landroid/graphics/Insets;)Landroid/view/WindowInsets$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject WindowInsets_Builder::setTappableElementInsets(__jni_impl::android::graphics::Insets arg0)
	{
		return __thiz.callObjectMethod(
			"setTappableElementInsets",
			"(Landroid/graphics/Insets;)Landroid/view/WindowInsets$Builder;",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::view

namespace android::view
{
	class WindowInsets_Builder : public __jni_impl::android::view::WindowInsets_Builder
	{
	public:
		WindowInsets_Builder(QAndroidJniObject obj) { __thiz = obj; }
		WindowInsets_Builder()
		{
			__constructor();
		}
		WindowInsets_Builder(__jni_impl::android::view::WindowInsets arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::view

