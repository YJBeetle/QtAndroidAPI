#include "../../app/RemoteAction.hpp"
#include "../../content/Intent.hpp"
#include "../../graphics/drawable/Drawable.hpp"
#include "../../os/Bundle.hpp"
#include "./TextClassification.hpp"
#include "./TextClassification_Builder.hpp"

namespace android::view::textclassifier
{
	// Fields
	
	TextClassification_Builder::TextClassification_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	TextClassification_Builder::TextClassification_Builder()
	{
		__thiz = QAndroidJniObject(
			"android.view.textclassifier.TextClassification$Builder",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject TextClassification_Builder::addAction(android::app::RemoteAction arg0)
	{
		return __thiz.callObjectMethod(
			"addAction",
			"(Landroid/app/RemoteAction;)Landroid/view/textclassifier/TextClassification$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject TextClassification_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/view/textclassifier/TextClassification;"
		);
	}
	QAndroidJniObject TextClassification_Builder::setEntityType(jstring arg0, jfloat arg1)
	{
		return __thiz.callObjectMethod(
			"setEntityType",
			"(Ljava/lang/String;F)Landroid/view/textclassifier/TextClassification$Builder;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject TextClassification_Builder::setEntityType(const QString &arg0, jfloat arg1)
	{
		return __thiz.callObjectMethod(
			"setEntityType",
			"(Ljava/lang/String;F)Landroid/view/textclassifier/TextClassification$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	QAndroidJniObject TextClassification_Builder::setExtras(android::os::Bundle arg0)
	{
		return __thiz.callObjectMethod(
			"setExtras",
			"(Landroid/os/Bundle;)Landroid/view/textclassifier/TextClassification$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject TextClassification_Builder::setIcon(android::graphics::drawable::Drawable arg0)
	{
		return __thiz.callObjectMethod(
			"setIcon",
			"(Landroid/graphics/drawable/Drawable;)Landroid/view/textclassifier/TextClassification$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject TextClassification_Builder::setId(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setId",
			"(Ljava/lang/String;)Landroid/view/textclassifier/TextClassification$Builder;",
			arg0
		);
	}
	QAndroidJniObject TextClassification_Builder::setId(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setId",
			"(Ljava/lang/String;)Landroid/view/textclassifier/TextClassification$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject TextClassification_Builder::setIntent(android::content::Intent arg0)
	{
		return __thiz.callObjectMethod(
			"setIntent",
			"(Landroid/content/Intent;)Landroid/view/textclassifier/TextClassification$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject TextClassification_Builder::setLabel(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setLabel",
			"(Ljava/lang/String;)Landroid/view/textclassifier/TextClassification$Builder;",
			arg0
		);
	}
	QAndroidJniObject TextClassification_Builder::setLabel(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setLabel",
			"(Ljava/lang/String;)Landroid/view/textclassifier/TextClassification$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject TextClassification_Builder::setOnClickListener(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"setOnClickListener",
			"(Landroid/view/View$OnClickListener;)Landroid/view/textclassifier/TextClassification$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject TextClassification_Builder::setText(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setText",
			"(Ljava/lang/String;)Landroid/view/textclassifier/TextClassification$Builder;",
			arg0
		);
	}
	QAndroidJniObject TextClassification_Builder::setText(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setText",
			"(Ljava/lang/String;)Landroid/view/textclassifier/TextClassification$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace android::view::textclassifier

