#pragma once

#ifndef ANDROID_TEXT_STYLE_CLICKABLESPAN
#define ANDROID_TEXT_STYLE_CLICKABLESPAN

#include "../../../__JniBaseClass.hpp"
#include "CharacterStyle.hpp"

namespace __jni_impl::android::text
{
	class TextPaint;
}
namespace __jni_impl::android::view
{
	class View;
}

namespace __jni_impl::android::text::style
{
	class ClickableSpan : public __jni_impl::android::text::style::CharacterStyle
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void onClick(__jni_impl::android::view::View arg0);
		void updateDrawState(__jni_impl::android::text::TextPaint arg0);
	};
} // namespace __jni_impl::android::text::style

#include "../TextPaint.hpp"
#include "../../view/View.hpp"

namespace __jni_impl::android::text::style
{
	// Fields
	
	// Constructors
	void ClickableSpan::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.text.style.ClickableSpan",
			"()V"
		);
	}
	
	// Methods
	void ClickableSpan::onClick(__jni_impl::android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"onClick",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
	void ClickableSpan::updateDrawState(__jni_impl::android::text::TextPaint arg0)
	{
		__thiz.callMethod<void>(
			"updateDrawState",
			"(Landroid/text/TextPaint;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::text::style

namespace android::text::style
{
	class ClickableSpan : public __jni_impl::android::text::style::ClickableSpan
	{
	public:
		ClickableSpan(QAndroidJniObject obj) { __thiz = obj; }
		ClickableSpan()
		{
			__constructor();
		}
	};
} // namespace android::text::style

#endif // ANDROID_TEXT_STYLE_CLICKABLESPAN

