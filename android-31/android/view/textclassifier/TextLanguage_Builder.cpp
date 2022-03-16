#include "../../icu/util/ULocale.hpp"
#include "../../os/Bundle.hpp"
#include "./TextLanguage.hpp"
#include "../../../JString.hpp"
#include "./TextLanguage_Builder.hpp"

namespace android::view::textclassifier
{
	// Fields
	
	// Constructors
	TextLanguage_Builder::TextLanguage_Builder()
		: JObject(
			"android.view.textclassifier.TextLanguage$Builder",
			"()V"
		) {}
	
	// Methods
	android::view::textclassifier::TextLanguage TextLanguage_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/view/textclassifier/TextLanguage;"
		);
	}
	android::view::textclassifier::TextLanguage_Builder TextLanguage_Builder::putLocale(android::icu::util::ULocale arg0, jfloat arg1) const
	{
		return callObjectMethod(
			"putLocale",
			"(Landroid/icu/util/ULocale;F)Landroid/view/textclassifier/TextLanguage$Builder;",
			arg0.object(),
			arg1
		);
	}
	android::view::textclassifier::TextLanguage_Builder TextLanguage_Builder::setExtras(android::os::Bundle arg0) const
	{
		return callObjectMethod(
			"setExtras",
			"(Landroid/os/Bundle;)Landroid/view/textclassifier/TextLanguage$Builder;",
			arg0.object()
		);
	}
	android::view::textclassifier::TextLanguage_Builder TextLanguage_Builder::setId(JString arg0) const
	{
		return callObjectMethod(
			"setId",
			"(Ljava/lang/String;)Landroid/view/textclassifier/TextLanguage$Builder;",
			arg0.object<jstring>()
		);
	}
} // namespace android::view::textclassifier

