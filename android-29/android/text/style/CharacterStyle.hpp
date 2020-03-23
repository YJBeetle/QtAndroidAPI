#pragma once

#ifndef ANDROID_TEXT_STYLE_CHARACTERSTYLE
#define ANDROID_TEXT_STYLE_CHARACTERSTYLE

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::text
{
	class TextPaint;
}

namespace __jni_impl::android::text::style
{
	class CharacterStyle : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject wrap(__jni_impl::android::text::style::CharacterStyle arg0);
		void updateDrawState(__jni_impl::android::text::TextPaint arg0);
		QAndroidJniObject getUnderlying();
	};
} // namespace __jni_impl::android::text::style

#include "../TextPaint.hpp"

namespace __jni_impl::android::text::style
{
	// Fields
	
	// Constructors
	void CharacterStyle::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.text.style.CharacterStyle",
			"()V");
	}
	
	// Methods
	QAndroidJniObject CharacterStyle::wrap(__jni_impl::android::text::style::CharacterStyle arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.style.CharacterStyle",
			"wrap",
			"(Landroid/text/style/CharacterStyle;)Landroid/text/style/CharacterStyle;",
			arg0.__jniObject().object());
	}
	void CharacterStyle::updateDrawState(__jni_impl::android::text::TextPaint arg0)
	{
		__thiz.callMethod<void>(
			"updateDrawState",
			"(Landroid/text/TextPaint;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject CharacterStyle::getUnderlying()
	{
		return __thiz.callObjectMethod(
			"getUnderlying",
			"()Landroid/text/style/CharacterStyle;");
	}
} // namespace __jni_impl::android::text::style

namespace android::text::style
{
	class CharacterStyle : public __jni_impl::android::text::style::CharacterStyle
	{
	public:
		CharacterStyle(QAndroidJniObject obj) { __thiz = obj; }
		CharacterStyle()
		{
			__constructor();
		}
	};
} // namespace android::text::style

#endif // ANDROID_TEXT_STYLE_CHARACTERSTYLE

