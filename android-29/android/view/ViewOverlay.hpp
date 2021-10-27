#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::graphics::drawable
{
	class Drawable;
}
namespace __jni_impl::android::view
{
	class View;
}

namespace __jni_impl::android::view
{
	class ViewOverlay : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void add(__jni_impl::android::graphics::drawable::Drawable arg0);
		void clear();
		void remove(__jni_impl::android::graphics::drawable::Drawable arg0);
	};
} // namespace __jni_impl::android::view

#include "../content/Context.hpp"
#include "../graphics/drawable/Drawable.hpp"
#include "./View.hpp"

namespace __jni_impl::android::view
{
	// Fields
	
	// Constructors
	void ViewOverlay::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.ViewOverlay",
			"(V)V");
	}
	
	// Methods
	void ViewOverlay::add(__jni_impl::android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"add",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object()
		);
	}
	void ViewOverlay::clear()
	{
		__thiz.callMethod<void>(
			"clear",
			"()V"
		);
	}
	void ViewOverlay::remove(__jni_impl::android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"remove",
			"(Landroid/graphics/drawable/Drawable;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::view

namespace android::view
{
	class ViewOverlay : public __jni_impl::android::view::ViewOverlay
	{
	public:
		ViewOverlay(QAndroidJniObject obj) { __thiz = obj; }
		ViewOverlay()
		{
			__constructor();
		}
	};
} // namespace android::view

