#include "./TextClassifierEvent_LanguageDetectionEvent.hpp"
#include "./TextClassifierEvent_LanguageDetectionEvent_Builder.hpp"

namespace android::view::textclassifier
{
	// Fields
	
	TextClassifierEvent_LanguageDetectionEvent_Builder::TextClassifierEvent_LanguageDetectionEvent_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	TextClassifierEvent_LanguageDetectionEvent_Builder::TextClassifierEvent_LanguageDetectionEvent_Builder(jint &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.textclassifier.TextClassifierEvent$LanguageDetectionEvent$Builder",
			"(I)V",
			arg0
		);
	}
	
	// Methods
	QAndroidJniObject TextClassifierEvent_LanguageDetectionEvent_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/view/textclassifier/TextClassifierEvent$LanguageDetectionEvent;"
		);
	}
} // namespace android::view::textclassifier

