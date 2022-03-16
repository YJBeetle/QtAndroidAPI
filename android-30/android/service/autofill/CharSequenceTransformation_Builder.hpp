#pragma once

#include "./CharSequenceTransformation.def.hpp"
#include "../../view/autofill/AutofillId.def.hpp"
#include "../../../JString.hpp"
#include "../../../java/util/regex/Pattern.def.hpp"
#include "./CharSequenceTransformation_Builder.def.hpp"

namespace android::service::autofill
{
	// Fields
	
	// Constructors
	inline CharSequenceTransformation_Builder::CharSequenceTransformation_Builder(android::view::autofill::AutofillId arg0, java::util::regex::Pattern arg1, JString arg2)
		: JObject(
			"android.service.autofill.CharSequenceTransformation$Builder",
			"(Landroid/view/autofill/AutofillId;Ljava/util/regex/Pattern;Ljava/lang/String;)V",
			arg0.object(),
			arg1.object(),
			arg2.object<jstring>()
		) {}
	
	// Methods
	inline android::service::autofill::CharSequenceTransformation_Builder CharSequenceTransformation_Builder::addField(android::view::autofill::AutofillId arg0, java::util::regex::Pattern arg1, JString arg2) const
	{
		return callObjectMethod(
			"addField",
			"(Landroid/view/autofill/AutofillId;Ljava/util/regex/Pattern;Ljava/lang/String;)Landroid/service/autofill/CharSequenceTransformation$Builder;",
			arg0.object(),
			arg1.object(),
			arg2.object<jstring>()
		);
	}
	inline android::service::autofill::CharSequenceTransformation CharSequenceTransformation_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/service/autofill/CharSequenceTransformation;"
		);
	}
} // namespace android::service::autofill

// Base class headers

