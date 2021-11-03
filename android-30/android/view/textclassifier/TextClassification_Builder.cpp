#include "../../app/RemoteAction.hpp"
#include "../../content/Intent.hpp"
#include "../../graphics/drawable/Drawable.hpp"
#include "../../os/Bundle.hpp"
#include "./TextClassification.hpp"
#include "../../../JString.hpp"
#include "./TextClassification_Builder.hpp"

namespace android::view::textclassifier
{
	// Fields
	
	// QAndroidJniObject forward
	TextClassification_Builder::TextClassification_Builder(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	TextClassification_Builder::TextClassification_Builder()
		: JObject(
			"android.view.textclassifier.TextClassification$Builder",
			"()V"
		) {}
	
	// Methods
	android::view::textclassifier::TextClassification_Builder TextClassification_Builder::addAction(android::app::RemoteAction arg0)
	{
		return callObjectMethod(
			"addAction",
			"(Landroid/app/RemoteAction;)Landroid/view/textclassifier/TextClassification$Builder;",
			arg0.object()
		);
	}
	android::view::textclassifier::TextClassification TextClassification_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/view/textclassifier/TextClassification;"
		);
	}
	android::view::textclassifier::TextClassification_Builder TextClassification_Builder::setEntityType(JString arg0, jfloat arg1)
	{
		return callObjectMethod(
			"setEntityType",
			"(Ljava/lang/String;F)Landroid/view/textclassifier/TextClassification$Builder;",
			arg0.object<jstring>(),
			arg1
		);
	}
	android::view::textclassifier::TextClassification_Builder TextClassification_Builder::setExtras(android::os::Bundle arg0)
	{
		return callObjectMethod(
			"setExtras",
			"(Landroid/os/Bundle;)Landroid/view/textclassifier/TextClassification$Builder;",
			arg0.object()
		);
	}
	android::view::textclassifier::TextClassification_Builder TextClassification_Builder::setIcon(android::graphics::drawable::Drawable arg0)
	{
		return callObjectMethod(
			"setIcon",
			"(Landroid/graphics/drawable/Drawable;)Landroid/view/textclassifier/TextClassification$Builder;",
			arg0.object()
		);
	}
	android::view::textclassifier::TextClassification_Builder TextClassification_Builder::setId(JString arg0)
	{
		return callObjectMethod(
			"setId",
			"(Ljava/lang/String;)Landroid/view/textclassifier/TextClassification$Builder;",
			arg0.object<jstring>()
		);
	}
	android::view::textclassifier::TextClassification_Builder TextClassification_Builder::setIntent(android::content::Intent arg0)
	{
		return callObjectMethod(
			"setIntent",
			"(Landroid/content/Intent;)Landroid/view/textclassifier/TextClassification$Builder;",
			arg0.object()
		);
	}
	android::view::textclassifier::TextClassification_Builder TextClassification_Builder::setLabel(JString arg0)
	{
		return callObjectMethod(
			"setLabel",
			"(Ljava/lang/String;)Landroid/view/textclassifier/TextClassification$Builder;",
			arg0.object<jstring>()
		);
	}
	android::view::textclassifier::TextClassification_Builder TextClassification_Builder::setOnClickListener(JObject arg0)
	{
		return callObjectMethod(
			"setOnClickListener",
			"(Landroid/view/View$OnClickListener;)Landroid/view/textclassifier/TextClassification$Builder;",
			arg0.object()
		);
	}
	android::view::textclassifier::TextClassification_Builder TextClassification_Builder::setText(JString arg0)
	{
		return callObjectMethod(
			"setText",
			"(Ljava/lang/String;)Landroid/view/textclassifier/TextClassification$Builder;",
			arg0.object<jstring>()
		);
	}
} // namespace android::view::textclassifier

