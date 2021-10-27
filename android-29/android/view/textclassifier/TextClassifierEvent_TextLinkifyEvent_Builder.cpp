#include "./TextClassifierEvent_TextLinkifyEvent.hpp"
#include "./TextClassifierEvent_TextLinkifyEvent_Builder.hpp"

namespace android::view::textclassifier
{
	// Fields
	
	TextClassifierEvent_TextLinkifyEvent_Builder::TextClassifierEvent_TextLinkifyEvent_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	TextClassifierEvent_TextLinkifyEvent_Builder::TextClassifierEvent_TextLinkifyEvent_Builder(jint &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.textclassifier.TextClassifierEvent$TextLinkifyEvent$Builder",
			"(I)V",
			arg0
		);
	}
	
	// Methods
	QAndroidJniObject TextClassifierEvent_TextLinkifyEvent_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/view/textclassifier/TextClassifierEvent$TextLinkifyEvent;"
		);
	}
} // namespace android::view::textclassifier

