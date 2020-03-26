#pragma once

#ifndef ANDROID_VIEW_VIEWOVERLAY
#define ANDROID_VIEW_VIEWOVERLAY

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::view
{
	class View;
}
namespace __jni_impl::android::graphics::drawable
{
	class Drawable;
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
		void remove(__jni_impl::android::graphics::drawable::Drawable arg0);
		void clear();
	};
} // namespace __jni_impl::android::view

#include "../content/Context.hpp"
#include "View.hpp"
#include "../graphics/drawable/Drawable.hpp"

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
	void ViewOverlay::remove(__jni_impl::android::graphics::drawable::Drawable arg0)
	{
		__thiz.callMethod<void>(
			"remove",
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

#endif // ANDROID_VIEW_VIEWOVERLAY

