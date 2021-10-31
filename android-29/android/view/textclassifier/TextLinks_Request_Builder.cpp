#include "../../os/Bundle.hpp"
#include "../../os/LocaleList.hpp"
#include "./TextClassifier_EntityConfig.hpp"
#include "./TextLinks_Request.hpp"
#include "./TextLinks_Request_Builder.hpp"

namespace android::view::textclassifier
{
	// Fields
	
	TextLinks_Request_Builder::TextLinks_Request_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	TextLinks_Request_Builder::TextLinks_Request_Builder(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.textclassifier.TextLinks$Request$Builder",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	
	// Methods
	QAndroidJniObject TextLinks_Request_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/view/textclassifier/TextLinks$Request;"
		);
	}
	QAndroidJniObject TextLinks_Request_Builder::setDefaultLocales(android::os::LocaleList arg0)
	{
		return __thiz.callObjectMethod(
			"setDefaultLocales",
			"(Landroid/os/LocaleList;)Landroid/view/textclassifier/TextLinks$Request$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject TextLinks_Request_Builder::setEntityConfig(android::view::textclassifier::TextClassifier_EntityConfig arg0)
	{
		return __thiz.callObjectMethod(
			"setEntityConfig",
			"(Landroid/view/textclassifier/TextClassifier$EntityConfig;)Landroid/view/textclassifier/TextLinks$Request$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject TextLinks_Request_Builder::setExtras(android::os::Bundle arg0)
	{
		return __thiz.callObjectMethod(
			"setExtras",
			"(Landroid/os/Bundle;)Landroid/view/textclassifier/TextLinks$Request$Builder;",
			arg0.__jniObject().object()
		);
	}
} // namespace android::view::textclassifier

