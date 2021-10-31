#include "../content/Context.hpp"
#include "../graphics/Rect.hpp"
#include "../view/KeyEvent.hpp"
#include "./DialerFilter.hpp"

namespace android::widget
{
	// Fields
	jint DialerFilter::DIGITS_AND_LETTERS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.DialerFilter",
			"DIGITS_AND_LETTERS"
		);
	}
	jint DialerFilter::DIGITS_AND_LETTERS_NO_DIGITS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.DialerFilter",
			"DIGITS_AND_LETTERS_NO_DIGITS"
		);
	}
	jint DialerFilter::DIGITS_AND_LETTERS_NO_LETTERS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.DialerFilter",
			"DIGITS_AND_LETTERS_NO_LETTERS"
		);
	}
	jint DialerFilter::DIGITS_ONLY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.DialerFilter",
			"DIGITS_ONLY"
		);
	}
	jint DialerFilter::LETTERS_ONLY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.widget.DialerFilter",
			"LETTERS_ONLY"
		);
	}
	
	DialerFilter::DialerFilter(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	DialerFilter::DialerFilter(android::content::Context arg0)
	{
		__thiz = QAndroidJniObject(
			"android.widget.DialerFilter",
			"(Landroid/content/Context;)V",
			arg0.__jniObject().object()
		);
	}
	DialerFilter::DialerFilter(android::content::Context arg0, __JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"android.widget.DialerFilter",
			"(Landroid/content/Context;Landroid/util/AttributeSet;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	void DialerFilter::append(jstring arg0)
	{
		__thiz.callMethod<void>(
			"append",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void DialerFilter::clearText()
	{
		__thiz.callMethod<void>(
			"clearText",
			"()V"
		);
	}
	jstring DialerFilter::getDigits()
	{
		return __thiz.callObjectMethod(
			"getDigits",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jstring DialerFilter::getFilterText()
	{
		return __thiz.callObjectMethod(
			"getFilterText",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jstring DialerFilter::getLetters()
	{
		return __thiz.callObjectMethod(
			"getLetters",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint DialerFilter::getMode()
	{
		return __thiz.callMethod<jint>(
			"getMode",
			"()I"
		);
	}
	jboolean DialerFilter::isQwertyKeyboard()
	{
		return __thiz.callMethod<jboolean>(
			"isQwertyKeyboard",
			"()Z"
		);
	}
	jboolean DialerFilter::onKeyDown(jint arg0, android::view::KeyEvent arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyDown",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jboolean DialerFilter::onKeyUp(jint arg0, android::view::KeyEvent arg1)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyUp",
			"(ILandroid/view/KeyEvent;)Z",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void DialerFilter::removeFilterWatcher(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"removeFilterWatcher",
			"(Landroid/text/TextWatcher;)V",
			arg0.__jniObject().object()
		);
	}
	void DialerFilter::setDigitsWatcher(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setDigitsWatcher",
			"(Landroid/text/TextWatcher;)V",
			arg0.__jniObject().object()
		);
	}
	void DialerFilter::setFilterWatcher(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setFilterWatcher",
			"(Landroid/text/TextWatcher;)V",
			arg0.__jniObject().object()
		);
	}
	void DialerFilter::setLettersWatcher(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setLettersWatcher",
			"(Landroid/text/TextWatcher;)V",
			arg0.__jniObject().object()
		);
	}
	void DialerFilter::setMode(jint arg0)
	{
		__thiz.callMethod<void>(
			"setMode",
			"(I)V",
			arg0
		);
	}
} // namespace android::widget

