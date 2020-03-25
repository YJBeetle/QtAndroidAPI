#pragma once

#ifndef ANDROID_WIDGET_DIALERFILTER
#define ANDROID_WIDGET_DIALERFILTER

#include "../../__JniBaseClass.hpp"
#include "../view/View.hpp"
#include "../view/ViewGroup.hpp"
#include "RelativeLayout.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::graphics
{
	class Rect;
}
namespace __jni_impl::android::view
{
	class KeyEvent;
}

namespace __jni_impl::android::widget
{
	class DialerFilter : public __jni_impl::android::widget::RelativeLayout
	{
	public:
		// Fields
		static jint DIGITS_AND_LETTERS();
		static jint DIGITS_AND_LETTERS_NO_DIGITS();
		static jint DIGITS_AND_LETTERS_NO_LETTERS();
		static jint DIGITS_ONLY();
		static jint LETTERS_ONLY();
		
		// Constructors
		void __constructor(__jni_impl::android::content::Context arg0);
		void __constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		
		// Methods
		void append(jstring arg0);
		void setMode(jint arg0);
		jboolean onKeyDown(jint arg0, __jni_impl::android::view::KeyEvent arg1);
		jboolean onKeyUp(jint arg0, __jni_impl::android::view::KeyEvent arg1);
		jboolean isQwertyKeyboard();
		QAndroidJniObject getLetters();
		QAndroidJniObject getFilterText();
		void clearText();
		void setLettersWatcher(__jni_impl::__JniBaseClass arg0);
		void setDigitsWatcher(__jni_impl::__JniBaseClass arg0);
		void setFilterWatcher(__jni_impl::__JniBaseClass arg0);
		void removeFilterWatcher(__jni_impl::__JniBaseClass arg0);
		jint getMode();
		QAndroidJniObject getDigits();
	};
} // namespace __jni_impl::android::widget

#include "../content/Context.hpp"
#include "../graphics/Rect.hpp"
#include "../view/KeyEvent.hpp"

namespace __jni_impl::android::widget
{
	// Fields
	jint DialerFilter::DIGITS_AND_LETTERS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.DialerFilter",
			"DIGITS_AND_LETTERS");
	}
	jint DialerFilter::DIGITS_AND_LETTERS_NO_DIGITS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.DialerFilter",
			"DIGITS_AND_LETTERS_NO_DIGITS");
	}
	jint DialerFilter::DIGITS_AND_LETTERS_NO_LETTERS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.DialerFilter",
			"DIGITS_AND_LETTERS_NO_LETTERS");
	}
	jint DialerFilter::DIGITS_ONLY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.DialerFilter",
			"DIGITS_ONLY");
	}
	jint DialerFilter::LETTERS_ONLY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.DialerFilter",
			"LETTERS_ONLY");
	}
	
	// Constructors
	void DialerFilter::__constructor(__jni_impl::android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.DialerFilter",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object());
	}
	void DialerFilter::__constructor(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.DialerFilter",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	
	// Methods
	void DialerFilter::append(jstring arg0)
	{
		__thiz.callMethod<void>(
			"append",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void DialerFilter::setMode(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMode",
			"(I)V",
			arg0);
	}
	jboolean DialerFilter::onKeyDown(jint arg0, __jni_impl::android::view::KeyEvent arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyDown",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.__jniObject().object());
	}
	jboolean DialerFilter::onKeyUp(jint arg0, __jni_impl::android::view::KeyEvent arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyUp",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.__jniObject().object());
	}
	jboolean DialerFilter::isQwertyKeyboard()
	{
		return __thiz.callMethod<jboolean>(
			"isQwertyKeyboard",
			"()Z");
	}
	QAndroidJniObject DialerFilter::getLetters()
	{
		return __thiz.callObjectMethod(
			"getLetters",
			"()Ljava/lang/CharSequence;");
	}
	QAndroidJniObject DialerFilter::getFilterText()
	{
		return __thiz.callObjectMethod(
			"getFilterText",
			"()Ljava/lang/CharSequence;");
	}
	void DialerFilter::clearText()
	{
		__thiz.callMethod<void>(
			"clearText",
			"()V");
	}
	void DialerFilter::setLettersWatcher(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setLettersWatcher",
			"(Landroid/text/TextWatcher;)V",
			arg0.__jniObject().object());
	}
	void DialerFilter::setDigitsWatcher(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setDigitsWatcher",
			"(Landroid/text/TextWatcher;)V",
			arg0.__jniObject().object());
	}
	void DialerFilter::setFilterWatcher(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setFilterWatcher",
			"(Landroid/text/TextWatcher;)V",
			arg0.__jniObject().object());
	}
	void DialerFilter::removeFilterWatcher(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"removeFilterWatcher",
			"(Landroid/text/TextWatcher;)V",
			arg0.__jniObject().object());
	}
	jint DialerFilter::getMode()
	{
		return __thiz.callMethod<jint>(
			"getMode",
			"()I");
	}
	QAndroidJniObject DialerFilter::getDigits()
	{
		return __thiz.callObjectMethod(
			"getDigits",
			"()Ljava/lang/CharSequence;");
	}
} // namespace __jni_impl::android::widget

namespace android::widget
{
	class DialerFilter : public __jni_impl::android::widget::DialerFilter
	{
	public:
		DialerFilter(QAndroidJniObject obj) { __thiz = obj; }
		DialerFilter(__jni_impl::android::content::Context arg0)
		{
			__constructor(
				arg0);
		}
		DialerFilter(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::widget

#endif // ANDROID_WIDGET_DIALERFILTER

