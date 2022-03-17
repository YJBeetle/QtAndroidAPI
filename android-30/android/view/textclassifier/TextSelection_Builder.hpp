#pragma once

#include "../../os/Bundle.def.hpp"
#include "./TextSelection.def.hpp"
#include "../../../JString.hpp"
#include "./TextSelection_Builder.def.hpp"

namespace android::view::textclassifier
{
	// Fields
	
	// Constructors
	inline TextSelection_Builder::TextSelection_Builder(jint arg0, jint arg1)
		: JObject(
			"android.view.textclassifier.TextSelection$Builder",
			"(II)V",
			arg0,
			arg1
		) {}
	
	// Methods
	inline android::view::textclassifier::TextSelection TextSelection_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/view/textclassifier/TextSelection;"
		);
	}
	inline android::view::textclassifier::TextSelection_Builder TextSelection_Builder::setEntityType(JString arg0, jfloat arg1) const
	{
		return callObjectMethod(
			"setEntityType",
			"(Ljava/lang/String;F)Landroid/view/textclassifier/TextSelection$Builder;",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline android::view::textclassifier::TextSelection_Builder TextSelection_Builder::setExtras(android::os::Bundle arg0) const
	{
		return callObjectMethod(
			"setExtras",
			"(Landroid/os/Bundle;)Landroid/view/textclassifier/TextSelection$Builder;",
			arg0.object()
		);
	}
	inline android::view::textclassifier::TextSelection_Builder TextSelection_Builder::setId(JString arg0) const
	{
		return callObjectMethod(
			"setId",
			"(Ljava/lang/String;)Landroid/view/textclassifier/TextSelection$Builder;",
			arg0.object<jstring>()
		);
	}
} // namespace android::view::textclassifier

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view::textclassifier;
#endif
