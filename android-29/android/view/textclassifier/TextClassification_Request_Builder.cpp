#include "../../os/Bundle.hpp"
#include "../../os/LocaleList.hpp"
#include "./TextClassification_Request.hpp"
#include "../../../java/time/ZonedDateTime.hpp"
#include "./TextClassification_Request_Builder.hpp"

namespace android::view::textclassifier
{
	// Fields
	
	TextClassification_Request_Builder::TextClassification_Request_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	TextClassification_Request_Builder::TextClassification_Request_Builder(jstring arg0, jint arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.view.textclassifier.TextClassification$Request$Builder",
			"(Ljava/lang/CharSequence;II)V",
			arg0,
			arg1,
			arg2
		);
	}
	
	// Methods
	QAndroidJniObject TextClassification_Request_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/view/textclassifier/TextClassification$Request;"
		);
	}
	QAndroidJniObject TextClassification_Request_Builder::setDefaultLocales(android::os::LocaleList arg0)
	{
		return __thiz.callObjectMethod(
			"setDefaultLocales",
			"(Landroid/os/LocaleList;)Landroid/view/textclassifier/TextClassification$Request$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject TextClassification_Request_Builder::setExtras(android::os::Bundle arg0)
	{
		return __thiz.callObjectMethod(
			"setExtras",
			"(Landroid/os/Bundle;)Landroid/view/textclassifier/TextClassification$Request$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject TextClassification_Request_Builder::setReferenceTime(java::time::ZonedDateTime arg0)
	{
		return __thiz.callObjectMethod(
			"setReferenceTime",
			"(Ljava/time/ZonedDateTime;)Landroid/view/textclassifier/TextClassification$Request$Builder;",
			arg0.__jniObject().object()
		);
	}
} // namespace android::view::textclassifier

