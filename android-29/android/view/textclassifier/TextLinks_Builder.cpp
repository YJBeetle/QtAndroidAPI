#include "../../os/Bundle.hpp"
#include "./TextLinks.hpp"
#include "./TextLinks_Builder.hpp"

namespace android::view::textclassifier
{
	// Fields
	
	TextLinks_Builder::TextLinks_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	TextLinks_Builder::TextLinks_Builder(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.textclassifier.TextLinks$Builder",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	TextLinks_Builder::TextLinks_Builder(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.view.textclassifier.TextLinks$Builder",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
	QAndroidJniObject TextLinks_Builder::addLink(jint arg0, jint arg1, __JniBaseClass arg2)
	{
		return __thiz.callObjectMethod(
			"addLink",
			"(IILjava/util/Map;)Landroid/view/textclassifier/TextLinks$Builder;",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject TextLinks_Builder::addLink(jint arg0, jint arg1, __JniBaseClass arg2, android::os::Bundle arg3)
	{
		return __thiz.callObjectMethod(
			"addLink",
			"(IILjava/util/Map;Landroid/os/Bundle;)Landroid/view/textclassifier/TextLinks$Builder;",
			arg0,
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	QAndroidJniObject TextLinks_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/view/textclassifier/TextLinks;"
		);
	}
	QAndroidJniObject TextLinks_Builder::clearTextLinks()
	{
		return __thiz.callObjectMethod(
			"clearTextLinks",
			"()Landroid/view/textclassifier/TextLinks$Builder;"
		);
	}
	QAndroidJniObject TextLinks_Builder::setExtras(android::os::Bundle arg0)
	{
		return __thiz.callObjectMethod(
			"setExtras",
			"(Landroid/os/Bundle;)Landroid/view/textclassifier/TextLinks$Builder;",
			arg0.__jniObject().object()
		);
	}
} // namespace android::view::textclassifier

