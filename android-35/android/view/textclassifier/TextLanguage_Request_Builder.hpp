#pragma once

#include "../../os/Bundle.def.hpp"
#include "./TextLanguage_Request.def.hpp"
#include "../../../JString.hpp"
#include "./TextLanguage_Request_Builder.def.hpp"

namespace android::view::textclassifier
{
	// Fields
	
	// Constructors
	inline TextLanguage_Request_Builder::TextLanguage_Request_Builder(JString arg0)
		: JObject(
			"android.view.textclassifier.TextLanguage$Request$Builder",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	inline android::view::textclassifier::TextLanguage_Request TextLanguage_Request_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/view/textclassifier/TextLanguage$Request;"
		);
	}
	inline android::view::textclassifier::TextLanguage_Request_Builder TextLanguage_Request_Builder::setExtras(android::os::Bundle arg0) const
	{
		return callObjectMethod(
			"setExtras",
			"(Landroid/os/Bundle;)Landroid/view/textclassifier/TextLanguage$Request$Builder;",
			arg0.object()
		);
	}
} // namespace android::view::textclassifier

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view::textclassifier;
#endif
