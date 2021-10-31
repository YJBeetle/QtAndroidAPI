#include "../../os/Bundle.hpp"
#include "./TextLinks.hpp"
#include "./TextLinks_Builder.hpp"

namespace android::view::textclassifier
{
	// Fields
	
	// QAndroidJniObject forward
	TextLinks_Builder::TextLinks_Builder(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	TextLinks_Builder::TextLinks_Builder(jstring arg0)
		: __JniBaseClass(
			"android.view.textclassifier.TextLinks$Builder",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
	QAndroidJniObject TextLinks_Builder::addLink(jint arg0, jint arg1, __JniBaseClass arg2)
	{
		return callObjectMethod(
			"addLink",
			"(IILjava/util/Map;)Landroid/view/textclassifier/TextLinks$Builder;",
			arg0,
			arg1,
			arg2.object()
		);
	}
	QAndroidJniObject TextLinks_Builder::addLink(jint arg0, jint arg1, __JniBaseClass arg2, android::os::Bundle arg3)
	{
		return callObjectMethod(
			"addLink",
			"(IILjava/util/Map;Landroid/os/Bundle;)Landroid/view/textclassifier/TextLinks$Builder;",
			arg0,
			arg1,
			arg2.object(),
			arg3.object()
		);
	}
	QAndroidJniObject TextLinks_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/view/textclassifier/TextLinks;"
		);
	}
	QAndroidJniObject TextLinks_Builder::clearTextLinks()
	{
		return callObjectMethod(
			"clearTextLinks",
			"()Landroid/view/textclassifier/TextLinks$Builder;"
		);
	}
	QAndroidJniObject TextLinks_Builder::setExtras(android::os::Bundle arg0)
	{
		return callObjectMethod(
			"setExtras",
			"(Landroid/os/Bundle;)Landroid/view/textclassifier/TextLinks$Builder;",
			arg0.object()
		);
	}
} // namespace android::view::textclassifier

