#include "./TextSelection.hpp"
#include "./TextSelection_Builder.hpp"

namespace android::view::textclassifier
{
	// Fields
	
	// QJniObject forward
	TextSelection_Builder::TextSelection_Builder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	TextSelection_Builder::TextSelection_Builder(jint arg0, jint arg1)
		: JObject(
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
	android::view::textclassifier::TextSelection_Builder TextSelection_Builder::setId(jstring arg0)
	{
		return callObjectMethod(
			"setId",
			"(Ljava/lang/String;)Landroid/view/textclassifier/TextSelection$Builder;",
			arg0
		);
	}
} // namespace android::view::textclassifier

