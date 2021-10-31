#include "../../os/LocaleList.hpp"
#include "./TextClassification_Request.hpp"
#include "../../../java/time/ZonedDateTime.hpp"
#include "./TextClassification_Request_Builder.hpp"

namespace android::view::textclassifier
{
	// Fields
	
	// QAndroidJniObject forward
	TextClassification_Request_Builder::TextClassification_Request_Builder(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	TextClassification_Request_Builder::TextClassification_Request_Builder(jstring arg0, jint arg1, jint arg2)
		: __JniBaseClass(
			"android.view.textclassifier.TextClassification$Request$Builder",
			"(Ljava/lang/CharSequence;II)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
	android::view::textclassifier::TextClassification_Request TextClassification_Request_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/view/textclassifier/TextClassification$Request;"
		);
	}
	android::view::textclassifier::TextClassification_Request_Builder TextClassification_Request_Builder::setDefaultLocales(android::os::LocaleList arg0)
	{
		return callObjectMethod(
			"setDefaultLocales",
			"(Landroid/os/LocaleList;)Landroid/view/textclassifier/TextClassification$Request$Builder;",
			arg0.object()
		);
	}
	android::view::textclassifier::TextClassification_Request_Builder TextClassification_Request_Builder::setReferenceTime(java::time::ZonedDateTime arg0)
	{
		return callObjectMethod(
			"setReferenceTime",
			"(Ljava/time/ZonedDateTime;)Landroid/view/textclassifier/TextClassification$Request$Builder;",
			arg0.object()
		);
	}
} // namespace android::view::textclassifier

