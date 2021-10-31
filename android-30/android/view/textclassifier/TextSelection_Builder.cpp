#include "../../os/Bundle.hpp"
#include "./TextSelection.hpp"
#include "./TextSelection_Builder.hpp"

namespace android::view::textclassifier
{
	// Fields
	
	// QAndroidJniObject forward
	TextSelection_Builder::TextSelection_Builder(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	TextSelection_Builder::TextSelection_Builder(jint arg0, jint arg1)
		: __JniBaseClass(
			"android.view.textclassifier.TextSelection$Builder",
			"(II)V",
			arg0,
			arg1
		) {}
	
	// Methods
	android::view::textclassifier::TextSelection TextSelection_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/view/textclassifier/TextSelection;"
		);
	}
	android::view::textclassifier::TextSelection_Builder TextSelection_Builder::setEntityType(jstring arg0, jfloat arg1)
	{
		return callObjectMethod(
			"setEntityType",
			"(Ljava/lang/String;F)Landroid/view/textclassifier/TextSelection$Builder;",
			arg0,
			arg1
		);
	}
	android::view::textclassifier::TextSelection_Builder TextSelection_Builder::setExtras(android::os::Bundle arg0)
	{
		return callObjectMethod(
			"setExtras",
			"(Landroid/os/Bundle;)Landroid/view/textclassifier/TextSelection$Builder;",
			arg0.object()
		);
	}
	android::view::textclassifier::TextSelection_Builder TextSelection_Builder::setId(jstring arg0)
	{
		return callObjectMethod(
			"setId",
			"(Ljava/lang/String;)Landroid/view/textclassifier/TextSelection$Builder;",
			arg0
		);
	}
} // namespace android::view::textclassifier

