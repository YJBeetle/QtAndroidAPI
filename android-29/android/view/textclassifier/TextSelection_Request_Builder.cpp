#include "../../os/Bundle.hpp"
#include "../../os/LocaleList.hpp"
#include "./TextSelection_Request.hpp"
#include "./TextSelection_Request_Builder.hpp"

namespace android::view::textclassifier
{
	// Fields
	
	// QAndroidJniObject forward
	TextSelection_Request_Builder::TextSelection_Request_Builder(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	TextSelection_Request_Builder::TextSelection_Request_Builder(jstring arg0, jint arg1, jint arg2)
		: __JniBaseClass(
			"android.view.textclassifier.TextSelection$Request$Builder",
			"(Ljava/lang/CharSequence;II)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
	QAndroidJniObject TextSelection_Request_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/view/textclassifier/TextSelection$Request;"
		);
	}
	QAndroidJniObject TextSelection_Request_Builder::setDefaultLocales(android::os::LocaleList arg0)
	{
		return callObjectMethod(
			"setDefaultLocales",
			"(Landroid/os/LocaleList;)Landroid/view/textclassifier/TextSelection$Request$Builder;",
			arg0.object()
		);
	}
	QAndroidJniObject TextSelection_Request_Builder::setExtras(android::os::Bundle arg0)
	{
		return callObjectMethod(
			"setExtras",
			"(Landroid/os/Bundle;)Landroid/view/textclassifier/TextSelection$Request$Builder;",
			arg0.object()
		);
	}
} // namespace android::view::textclassifier
