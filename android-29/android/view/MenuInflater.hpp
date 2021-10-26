#pragma once

#ifndef ANDROID_VIEW_MENUINFLATER
#define ANDROID_VIEW_MENUINFLATER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}

namespace __jni_impl::android::view
{
	class MenuInflater : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0);
		
		// Methods
		void inflate(jint arg0, __jni_impl::__JniBaseClass arg1);
	};
} // namespace __jni_impl::android::view

#include "../content/Context.hpp"

namespace __jni_impl::android::view
{
	// Fields
	
	// Constructors
	void MenuInflater::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.MenuInflater",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	void MenuInflater::inflate(jint arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"inflate",
			"(ILandroid/view/Menu;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::view

namespace android::view
{
	class MenuInflater : public __jni_impl::android::view::MenuInflater
	{
	public:
		MenuInflater(QAndroidJniObject obj) { __thiz = obj; }
		MenuInflater(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::view

#endif // ANDROID_VIEW_MENUINFLATER

