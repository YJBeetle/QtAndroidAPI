#include "../../os/Bundle.hpp"
#include "./TextLanguage_Request.hpp"
#include "./TextLanguage_Request_Builder.hpp"

namespace android::view::textclassifier
{
	// Fields
	
	TextLanguage_Request_Builder::TextLanguage_Request_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	TextLanguage_Request_Builder::TextLanguage_Request_Builder(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.textclassifier.TextLanguage$Request$Builder",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	
	// Methods
	QAndroidJniObject TextLanguage_Request_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/view/textclassifier/TextLanguage$Request;"
		);
	}
	QAndroidJniObject TextLanguage_Request_Builder::setExtras(android::os::Bundle arg0)
	{
		return __thiz.callObjectMethod(
			"setExtras",
			"(Landroid/os/Bundle;)Landroid/view/textclassifier/TextLanguage$Request$Builder;",
			arg0.__jniObject().object()
		);
	}
} // namespace android::view::textclassifier

