#include "../../os/Bundle.hpp"
#include "./TextSelection.hpp"
#include "./TextSelection_Builder.hpp"

namespace android::view::textclassifier
{
	// Fields
	
	TextSelection_Builder::TextSelection_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	TextSelection_Builder::TextSelection_Builder(jint &arg0, jint &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.view.textclassifier.TextSelection$Builder",
			"(II)V",
			arg0,
			arg1
		);
	}
	
	// Methods
	QAndroidJniObject TextSelection_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/view/textclassifier/TextSelection;"
		);
	}
	QAndroidJniObject TextSelection_Builder::setEntityType(jstring arg0, jfloat arg1)
	{
		return __thiz.callObjectMethod(
			"setEntityType",
			"(Ljava/lang/String;F)Landroid/view/textclassifier/TextSelection$Builder;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject TextSelection_Builder::setEntityType(const QString &arg0, jfloat arg1)
	{
		return __thiz.callObjectMethod(
			"setEntityType",
			"(Ljava/lang/String;F)Landroid/view/textclassifier/TextSelection$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	QAndroidJniObject TextSelection_Builder::setExtras(android::os::Bundle arg0)
	{
		return __thiz.callObjectMethod(
			"setExtras",
			"(Landroid/os/Bundle;)Landroid/view/textclassifier/TextSelection$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject TextSelection_Builder::setId(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setId",
			"(Ljava/lang/String;)Landroid/view/textclassifier/TextSelection$Builder;",
			arg0
		);
	}
	QAndroidJniObject TextSelection_Builder::setId(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setId",
			"(Ljava/lang/String;)Landroid/view/textclassifier/TextSelection$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace android::view::textclassifier

