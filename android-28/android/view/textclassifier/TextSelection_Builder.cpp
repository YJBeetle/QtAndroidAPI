#include "./TextSelection.hpp"
#include "../../../JString.hpp"
#include "./TextSelection_Builder.hpp"

namespace android::view::textclassifier
{
	// Fields
	
	// QAndroidJniObject forward
	TextSelection_Builder::TextSelection_Builder(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	TextSelection_Builder::TextSelection_Builder(jint arg0, jint arg1)
		: JObject(
			"android.view.textclassifier.TextSelection$Builder",
			"(II)V",
			arg0,
			arg1
		) {}
	
	// Methods
	android::view::textclassifier::TextSelection TextSelection_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/view/textclassifier/TextSelection;"
		);
	}
	android::view::textclassifier::TextSelection_Builder TextSelection_Builder::setEntityType(JString arg0, jfloat arg1) const
	{
		return callObjectMethod(
			"setEntityType",
			"(Ljava/lang/String;F)Landroid/view/textclassifier/TextSelection$Builder;",
			arg0.object<jstring>(),
			arg1
		);
	}
	android::view::textclassifier::TextSelection_Builder TextSelection_Builder::setId(JString arg0) const
	{
		return callObjectMethod(
			"setId",
			"(Ljava/lang/String;)Landroid/view/textclassifier/TextSelection$Builder;",
			arg0.object<jstring>()
		);
	}
} // namespace android::view::textclassifier

