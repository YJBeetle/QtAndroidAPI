#pragma once

#ifndef ANDROID_INPUTMETHODSERVICE_KEYBOARD_ROW
#define ANDROID_INPUTMETHODSERVICE_KEYBOARD_ROW

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content::res
{
	class Resources;
}
namespace __jni_impl::android::inputmethodservice
{
	class Keyboard;
}

namespace __jni_impl::android::inputmethodservice
{
	class Keyboard_Row : public __JniBaseClass
	{
	public:
		// Fields
		jint defaultHeight();
		jint defaultHorizontalGap();
		jint defaultWidth();
		jint mode();
		jint rowEdgeFlags();
		jint verticalGap();
		
		// Constructors
		void __constructor(__jni_impl::android::inputmethodservice::Keyboard arg0);
		void __constructor(__jni_impl::android::content::res::Resources arg0, __jni_impl::android::inputmethodservice::Keyboard arg1, __jni_impl::__JniBaseClass arg2);
		
		// Methods
	};
} // namespace __jni_impl::android::inputmethodservice

#include "../content/res/Resources.hpp"
#include "Keyboard.hpp"

namespace __jni_impl::android::inputmethodservice
{
	// Fields
	jint Keyboard_Row::defaultHeight()
	{
		return __thiz.getField<jint>(
			"defaultHeight"
		);
	}
	jint Keyboard_Row::defaultHorizontalGap()
	{
		return __thiz.getField<jint>(
			"defaultHorizontalGap"
		);
	}
	jint Keyboard_Row::defaultWidth()
	{
		return __thiz.getField<jint>(
			"defaultWidth"
		);
	}
	jint Keyboard_Row::mode()
	{
		return __thiz.getField<jint>(
			"mode"
		);
	}
	jint Keyboard_Row::rowEdgeFlags()
	{
		return __thiz.getField<jint>(
			"rowEdgeFlags"
		);
	}
	jint Keyboard_Row::verticalGap()
	{
		return __thiz.getField<jint>(
			"verticalGap"
		);
	}
	
	// Constructors
	void Keyboard_Row::__constructor(__jni_impl::android::inputmethodservice::Keyboard arg0)
	{
		__thiz = QAndroidJniObject(
			"android.inputmethodservice.Keyboard$Row",
			"(Landroid/inputmethodservice/Keyboard;)V",
			arg0.__jniObject().object()
		);
	}
	void Keyboard_Row::__constructor(__jni_impl::android::content::res::Resources arg0, __jni_impl::android::inputmethodservice::Keyboard arg1, __jni_impl::__JniBaseClass arg2)
	{
		__thiz = QAndroidJniObject(
			"android.inputmethodservice.Keyboard$Row",
			"(Landroid/content/res/Resources;Landroid/inputmethodservice/Keyboard;Landroid/content/res/XmlResourceParser;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	
	// Methods
} // namespace __jni_impl::android::inputmethodservice

namespace android::inputmethodservice
{
	class Keyboard_Row : public __jni_impl::android::inputmethodservice::Keyboard_Row
	{
	public:
		Keyboard_Row(QAndroidJniObject obj) { __thiz = obj; }
		Keyboard_Row(__jni_impl::android::inputmethodservice::Keyboard arg0)
		{
			__constructor(
				arg0);
		}
		Keyboard_Row(__jni_impl::android::content::res::Resources arg0, __jni_impl::android::inputmethodservice::Keyboard arg1, __jni_impl::__JniBaseClass arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace android::inputmethodservice

#endif // ANDROID_INPUTMETHODSERVICE_KEYBOARD_ROW

