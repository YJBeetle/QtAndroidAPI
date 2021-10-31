#include "./TextClassifierEvent_TextSelectionEvent.hpp"
#include "./TextClassifierEvent_TextSelectionEvent_Builder.hpp"

namespace android::view::textclassifier
{
	// Fields
	
	TextClassifierEvent_TextSelectionEvent_Builder::TextClassifierEvent_TextSelectionEvent_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	TextClassifierEvent_TextSelectionEvent_Builder::TextClassifierEvent_TextSelectionEvent_Builder(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.textclassifier.TextClassifierEvent$TextSelectionEvent$Builder",
			"(I)V",
			arg0
		);
	}
	
	// Methods
	QAndroidJniObject TextClassifierEvent_TextSelectionEvent_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/view/textclassifier/TextClassifierEvent$TextSelectionEvent;"
		);
	}
	QAndroidJniObject TextClassifierEvent_TextSelectionEvent_Builder::setRelativeSuggestedWordEndIndex(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setRelativeSuggestedWordEndIndex",
			"(I)Landroid/view/textclassifier/TextClassifierEvent$TextSelectionEvent$Builder;",
			arg0
		);
	}
	QAndroidJniObject TextClassifierEvent_TextSelectionEvent_Builder::setRelativeSuggestedWordStartIndex(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setRelativeSuggestedWordStartIndex",
			"(I)Landroid/view/textclassifier/TextClassifierEvent$TextSelectionEvent$Builder;",
			arg0
		);
	}
	QAndroidJniObject TextClassifierEvent_TextSelectionEvent_Builder::setRelativeWordEndIndex(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setRelativeWordEndIndex",
			"(I)Landroid/view/textclassifier/TextClassifierEvent$TextSelectionEvent$Builder;",
			arg0
		);
	}
	QAndroidJniObject TextClassifierEvent_TextSelectionEvent_Builder::setRelativeWordStartIndex(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setRelativeWordStartIndex",
			"(I)Landroid/view/textclassifier/TextClassifierEvent$TextSelectionEvent$Builder;",
			arg0
		);
	}
} // namespace android::view::textclassifier

