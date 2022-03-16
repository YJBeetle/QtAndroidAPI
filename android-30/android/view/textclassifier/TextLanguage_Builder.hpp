#pragma once

#include "../../icu/util/ULocale.def.hpp"
#include "../../os/Bundle.def.hpp"
#include "./TextLanguage.def.hpp"
#include "../../../JString.hpp"
#include "./TextLanguage_Builder.def.hpp"

namespace android::view::textclassifier
{
	// Fields
	
	// Constructors
	inline TextLanguage_Builder::TextLanguage_Builder()
		: JObject(
			"android.view.textclassifier.TextLanguage$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::view::textclassifier::TextLanguage TextLanguage_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/view/textclassifier/TextLanguage;"
		);
	}
	inline android::view::textclassifier::TextLanguage_Builder TextLanguage_Builder::putLocale(android::icu::util::ULocale arg0, jfloat arg1) const
	{
		return callObjectMethod(
			"putLocale",
			"(Landroid/icu/util/ULocale;F)Landroid/view/textclassifier/TextLanguage$Builder;",
			arg0.object(),
			arg1
		);
	}
	inline android::view::textclassifier::TextLanguage_Builder TextLanguage_Builder::setExtras(android::os::Bundle arg0) const
	{
		return callObjectMethod(
			"setExtras",
			"(Landroid/os/Bundle;)Landroid/view/textclassifier/TextLanguage$Builder;",
			arg0.object()
		);
	}
	inline android::view::textclassifier::TextLanguage_Builder TextLanguage_Builder::setId(JString arg0) const
	{
		return callObjectMethod(
			"setId",
			"(Ljava/lang/String;)Landroid/view/textclassifier/TextLanguage$Builder;",
			arg0.object<jstring>()
		);
	}
} // namespace android::view::textclassifier

// Base class headers

