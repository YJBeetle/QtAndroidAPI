#pragma once

#include "../../__JniBaseClass.hpp"
#include "./ViewOverlay.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::view
{
	class View;
}

namespace __jni_impl::android::view
{
	class ViewGroupOverlay : public __jni_impl::android::view::ViewOverlay
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void add(__jni_impl::android::view::View arg0);
		void remove(__jni_impl::android::view::View arg0);
	};
} // namespace __jni_impl::android::view

#include "../content/Context.hpp"
#include "./View.hpp"

namespace __jni_impl::android::view
{
	// Fields
	
	// Constructors
	void ViewGroupOverlay::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.ViewGroupOverlay",
			"(V)V");
	}
	
	// Methods
	void ViewGroupOverlay::add(__jni_impl::android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"add",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
	void ViewGroupOverlay::remove(__jni_impl::android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"remove",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::view

namespace android::view
{
	class ViewGroupOverlay : public __jni_impl::android::view::ViewGroupOverlay
	{
	public:
		ViewGroupOverlay(QAndroidJniObject obj) { __thiz = obj; }
		ViewGroupOverlay()
		{
			__constructor();
		}
	};
} // namespace android::view

