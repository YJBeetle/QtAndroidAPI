#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../text/style/CharacterStyle.hpp"
#include "../../text/style/ClickableSpan.hpp"

namespace __jni_impl::android::view
{
	class View;
}
namespace __jni_impl::android::view::textclassifier
{
	class TextLinks_TextLink;
}

namespace __jni_impl::android::view::textclassifier
{
	class TextLinks_TextLinkSpan : public __jni_impl::android::text::style::ClickableSpan
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::view::textclassifier::TextLinks_TextLink arg0);
		
		// Methods
		QAndroidJniObject getTextLink();
		void onClick(__jni_impl::android::view::View arg0);
	};
} // namespace __jni_impl::android::view::textclassifier

#include "../View.hpp"
#include "TextLinks_TextLink.hpp"

namespace __jni_impl::android::view::textclassifier
{
	// Fields
	
	// Constructors
	void TextLinks_TextLinkSpan::__constructor(__jni_impl::android::view::textclassifier::TextLinks_TextLink arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.textclassifier.TextLinks$TextLinkSpan",
			"(Landroid/view/textclassifier/TextLinks$TextLink;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject TextLinks_TextLinkSpan::getTextLink()
	{
		return __thiz.callObjectMethod(
			"getTextLink",
			"()Landroid/view/textclassifier/TextLinks$TextLink;"
		);
	}
	void TextLinks_TextLinkSpan::onClick(__jni_impl::android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"onClick",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::view::textclassifier

namespace android::view::textclassifier
{
	class TextLinks_TextLinkSpan : public __jni_impl::android::view::textclassifier::TextLinks_TextLinkSpan
	{
	public:
		TextLinks_TextLinkSpan(QAndroidJniObject obj) { __thiz = obj; }
		TextLinks_TextLinkSpan(__jni_impl::android::view::textclassifier::TextLinks_TextLink arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::view::textclassifier

