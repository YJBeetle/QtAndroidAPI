#pragma once

#include "../../os/LocaleList.def.hpp"
#include "./TextClassification_Request.def.hpp"
#include "../../../JString.hpp"
#include "../../../java/time/ZonedDateTime.def.hpp"
#include "./TextClassification_Request_Builder.def.hpp"

namespace android::view::textclassifier
{
	// Fields
	
	// Constructors
	inline TextClassification_Request_Builder::TextClassification_Request_Builder(JString arg0, jint arg1, jint arg2)
		: JObject(
			"android.view.textclassifier.TextClassification$Request$Builder",
			"(Ljava/lang/CharSequence;II)V",
			arg0.object<jstring>(),
			arg1,
			arg2
		) {}
	
	// Methods
	inline android::view::textclassifier::TextClassification_Request TextClassification_Request_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/view/textclassifier/TextClassification$Request;"
		);
	}
	inline android::view::textclassifier::TextClassification_Request_Builder TextClassification_Request_Builder::setDefaultLocales(android::os::LocaleList arg0) const
	{
		return callObjectMethod(
			"setDefaultLocales",
			"(Landroid/os/LocaleList;)Landroid/view/textclassifier/TextClassification$Request$Builder;",
			arg0.object()
		);
	}
	inline android::view::textclassifier::TextClassification_Request_Builder TextClassification_Request_Builder::setReferenceTime(java::time::ZonedDateTime arg0) const
	{
		return callObjectMethod(
			"setReferenceTime",
			"(Ljava/time/ZonedDateTime;)Landroid/view/textclassifier/TextClassification$Request$Builder;",
			arg0.object()
		);
	}
} // namespace android::view::textclassifier

// Base class headers

