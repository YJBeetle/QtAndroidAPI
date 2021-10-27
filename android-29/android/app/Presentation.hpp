#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Dialog.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::content::res
{
	class Resources;
}
namespace __jni_impl::android::view
{
	class Display;
}

namespace __jni_impl::android::app
{
	class Presentation : public __jni_impl::android::app::Dialog
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::android::view::Display arg1);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::android::view::Display arg1, jint arg2);
		
		// Methods
		QAndroidJniObject getDisplay();
		QAndroidJniObject getResources();
		void onDisplayChanged();
		void onDisplayRemoved();
		void show();
	};
} // namespace __jni_impl::android::app

#include "../content/Context.hpp"
#include "../content/res/Resources.hpp"
#include "../view/Display.hpp"

namespace __jni_impl::android::app
{
	// Fields
	
	// Constructors
	void Presentation::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::android::view::Display arg1)
	{
		__thiz = QAndroidJniObject(
			"android.app.Presentation",
			"(Landroid/content/Context;Landroid/view/Display;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void Presentation::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::android::view::Display arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.app.Presentation",
			"(Landroid/content/Context;Landroid/view/Display;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	
	// Methods
	QAndroidJniObject Presentation::getDisplay()
	{
		return __thiz.callObjectMethod(
			"getDisplay",
			"()Landroid/view/Display;"
		);
	}
	QAndroidJniObject Presentation::getResources()
	{
		return __thiz.callObjectMethod(
			"getResources",
			"()Landroid/content/res/Resources;"
		);
	}
	void Presentation::onDisplayChanged()
	{
		__thiz.callMethod<void>(
			"onDisplayChanged",
			"()V"
		);
	}
	void Presentation::onDisplayRemoved()
	{
		__thiz.callMethod<void>(
			"onDisplayRemoved",
			"()V"
		);
	}
	void Presentation::show()
	{
		__thiz.callMethod<void>(
			"show",
			"()V"
		);
	}
} // namespace __jni_impl::android::app

namespace android::app
{
	class Presentation : public __jni_impl::android::app::Presentation
	{
	public:
		Presentation(QAndroidJniObject obj) { __thiz = obj; }
		Presentation(__jni_impl::android::content::Context arg0, __jni_impl::android::view::Display arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		Presentation(__jni_impl::android::content::Context arg0, __jni_impl::android::view::Display arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace android::app

