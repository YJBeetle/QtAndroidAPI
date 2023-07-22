#pragma once

#include "./ImageTransformation.def.hpp"
#include "../../view/autofill/AutofillId.def.hpp"
#include "../../../JString.hpp"
#include "../../../java/util/regex/Pattern.def.hpp"
#include "./ImageTransformation_Builder.def.hpp"

namespace android::service::autofill
{
	// Fields
	
	// Constructors
	inline ImageTransformation_Builder::ImageTransformation_Builder(android::view::autofill::AutofillId arg0, java::util::regex::Pattern arg1, jint arg2)
		: JObject(
			"android.service.autofill.ImageTransformation$Builder",
			"(Landroid/view/autofill/AutofillId;Ljava/util/regex/Pattern;I)V",
			arg0.object(),
			arg1.object(),
			arg2
		) {}
	inline ImageTransformation_Builder::ImageTransformation_Builder(android::view::autofill::AutofillId arg0, java::util::regex::Pattern arg1, jint arg2, JString arg3)
		: JObject(
			"android.service.autofill.ImageTransformation$Builder",
			"(Landroid/view/autofill/AutofillId;Ljava/util/regex/Pattern;ILjava/lang/CharSequence;)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3.object<jstring>()
		) {}
	
	// Methods
	inline android::service::autofill::ImageTransformation_Builder ImageTransformation_Builder::addOption(java::util::regex::Pattern arg0, jint arg1) const
	{
		return callObjectMethod(
			"addOption",
			"(Ljava/util/regex/Pattern;I)Landroid/service/autofill/ImageTransformation$Builder;",
			arg0.object(),
			arg1
		);
	}
	inline android::service::autofill::ImageTransformation_Builder ImageTransformation_Builder::addOption(java::util::regex::Pattern arg0, jint arg1, JString arg2) const
	{
		return callObjectMethod(
			"addOption",
			"(Ljava/util/regex/Pattern;ILjava/lang/CharSequence;)Landroid/service/autofill/ImageTransformation$Builder;",
			arg0.object(),
			arg1,
			arg2.object<jstring>()
		);
	}
	inline android::service::autofill::ImageTransformation ImageTransformation_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/service/autofill/ImageTransformation;"
		);
	}
} // namespace android::service::autofill

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::service::autofill;
#endif
