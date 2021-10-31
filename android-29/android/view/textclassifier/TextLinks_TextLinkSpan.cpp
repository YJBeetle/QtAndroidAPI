#include "../View.hpp"
#include "./TextLinks_TextLink.hpp"
#include "./TextLinks_TextLinkSpan.hpp"

namespace android::view::textclassifier
{
	// Fields
	
	TextLinks_TextLinkSpan::TextLinks_TextLinkSpan(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	TextLinks_TextLinkSpan::TextLinks_TextLinkSpan(android::view::textclassifier::TextLinks_TextLink arg0)
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
	void TextLinks_TextLinkSpan::onClick(android::view::View arg0)
	{
		__thiz.callMethod<void>(
			"onClick",
			"(Landroid/view/View;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace android::view::textclassifier

