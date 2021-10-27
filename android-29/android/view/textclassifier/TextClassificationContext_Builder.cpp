#include "./TextClassificationContext.hpp"
#include "./TextClassificationContext_Builder.hpp"

namespace android::view::textclassifier
{
	// Fields
	
	TextClassificationContext_Builder::TextClassificationContext_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	TextClassificationContext_Builder::TextClassificationContext_Builder(jstring &arg0, jstring &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.view.textclassifier.TextClassificationContext$Builder",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	TextClassificationContext_Builder::TextClassificationContext_Builder(const QString &arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.view.textclassifier.TextClassificationContext$Builder",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	
	// Methods
	QAndroidJniObject TextClassificationContext_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/view/textclassifier/TextClassificationContext;"
		);
	}
	QAndroidJniObject TextClassificationContext_Builder::setWidgetVersion(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setWidgetVersion",
			"(Ljava/lang/String;)Landroid/view/textclassifier/TextClassificationContext$Builder;",
			arg0
		);
	}
	QAndroidJniObject TextClassificationContext_Builder::setWidgetVersion(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setWidgetVersion",
			"(Ljava/lang/String;)Landroid/view/textclassifier/TextClassificationContext$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace android::view::textclassifier

