#include "./TextClassifierEvent_TextLinkifyEvent.hpp"
#include "./TextClassifierEvent_TextLinkifyEvent_Builder.hpp"

namespace android::view::textclassifier
{
	// Fields
	
	// QAndroidJniObject forward
	TextClassifierEvent_TextLinkifyEvent_Builder::TextClassifierEvent_TextLinkifyEvent_Builder(QAndroidJniObject obj) : android::view::textclassifier::TextClassifierEvent_Builder(obj) {}
	
	// Constructors
	TextClassifierEvent_TextLinkifyEvent_Builder::TextClassifierEvent_TextLinkifyEvent_Builder(jint arg0)
		: android::view::textclassifier::TextClassifierEvent_Builder(
			"android.view.textclassifier.TextClassifierEvent$TextLinkifyEvent$Builder",
			"(I)V",
			arg0
		) {}
	
	// Methods
	android::view::textclassifier::TextClassifierEvent_TextLinkifyEvent TextClassifierEvent_TextLinkifyEvent_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/view/textclassifier/TextClassifierEvent$TextLinkifyEvent;"
		);
	}
} // namespace android::view::textclassifier

