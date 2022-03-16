#pragma once

#include "../../os/Bundle.def.hpp"
#include "../../os/LocaleList.def.hpp"
#include "./TextSelection_Request.def.hpp"
#include "../../../JString.hpp"
#include "./TextSelection_Request_Builder.def.hpp"

namespace android::view::textclassifier
{
	// Fields
	
	// Constructors
	inline TextSelection_Request_Builder::TextSelection_Request_Builder(JString arg0, jint arg1, jint arg2)
		: JObject(
			"android.view.textclassifier.TextSelection$Request$Builder",
			"(Ljava/lang/CharSequence;II)V",
			arg0.object<jstring>(),
			arg1,
			arg2
		) {}
	
	// Methods
	inline android::view::textclassifier::TextSelection_Request TextSelection_Request_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/view/textclassifier/TextSelection$Request;"
		);
	}
	inline android::view::textclassifier::TextSelection_Request_Builder TextSelection_Request_Builder::setDefaultLocales(android::os::LocaleList arg0) const
	{
		return callObjectMethod(
			"setDefaultLocales",
			"(Landroid/os/LocaleList;)Landroid/view/textclassifier/TextSelection$Request$Builder;",
			arg0.object()
		);
	}
	inline android::view::textclassifier::TextSelection_Request_Builder TextSelection_Request_Builder::setExtras(android::os::Bundle arg0) const
	{
		return callObjectMethod(
			"setExtras",
			"(Landroid/os/Bundle;)Landroid/view/textclassifier/TextSelection$Request$Builder;",
			arg0.object()
		);
	}
} // namespace android::view::textclassifier

// Base class headers

