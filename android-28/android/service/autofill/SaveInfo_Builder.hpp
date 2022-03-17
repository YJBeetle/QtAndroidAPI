#pragma once

#include "../../../JArray.hpp"
#include "../../content/IntentSender.def.hpp"
#include "./CustomDescription.def.hpp"
#include "./SaveInfo.def.hpp"
#include "../../view/autofill/AutofillId.def.hpp"
#include "../../../JString.hpp"
#include "./SaveInfo_Builder.def.hpp"

namespace android::service::autofill
{
	// Fields
	
	// Constructors
	inline SaveInfo_Builder::SaveInfo_Builder(jint arg0)
		: JObject(
			"android.service.autofill.SaveInfo$Builder",
			"(I)V",
			arg0
		) {}
	inline SaveInfo_Builder::SaveInfo_Builder(jint arg0, JArray arg1)
		: JObject(
			"android.service.autofill.SaveInfo$Builder",
			"(I[Landroid/view/autofill/AutofillId;)V",
			arg0,
			arg1.object<jarray>()
		) {}
	
	// Methods
	inline android::service::autofill::SaveInfo_Builder SaveInfo_Builder::addSanitizer(JObject arg0, JArray arg1) const
	{
		return callObjectMethod(
			"addSanitizer",
			"(Landroid/service/autofill/Sanitizer;[Landroid/view/autofill/AutofillId;)Landroid/service/autofill/SaveInfo$Builder;",
			arg0.object(),
			arg1.object<jarray>()
		);
	}
	inline android::service::autofill::SaveInfo SaveInfo_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/service/autofill/SaveInfo;"
		);
	}
	inline android::service::autofill::SaveInfo_Builder SaveInfo_Builder::setCustomDescription(android::service::autofill::CustomDescription arg0) const
	{
		return callObjectMethod(
			"setCustomDescription",
			"(Landroid/service/autofill/CustomDescription;)Landroid/service/autofill/SaveInfo$Builder;",
			arg0.object()
		);
	}
	inline android::service::autofill::SaveInfo_Builder SaveInfo_Builder::setDescription(JString arg0) const
	{
		return callObjectMethod(
			"setDescription",
			"(Ljava/lang/CharSequence;)Landroid/service/autofill/SaveInfo$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::service::autofill::SaveInfo_Builder SaveInfo_Builder::setFlags(jint arg0) const
	{
		return callObjectMethod(
			"setFlags",
			"(I)Landroid/service/autofill/SaveInfo$Builder;",
			arg0
		);
	}
	inline android::service::autofill::SaveInfo_Builder SaveInfo_Builder::setNegativeAction(jint arg0, android::content::IntentSender arg1) const
	{
		return callObjectMethod(
			"setNegativeAction",
			"(ILandroid/content/IntentSender;)Landroid/service/autofill/SaveInfo$Builder;",
			arg0,
			arg1.object()
		);
	}
	inline android::service::autofill::SaveInfo_Builder SaveInfo_Builder::setOptionalIds(JArray arg0) const
	{
		return callObjectMethod(
			"setOptionalIds",
			"([Landroid/view/autofill/AutofillId;)Landroid/service/autofill/SaveInfo$Builder;",
			arg0.object<jarray>()
		);
	}
	inline android::service::autofill::SaveInfo_Builder SaveInfo_Builder::setTriggerId(android::view::autofill::AutofillId arg0) const
	{
		return callObjectMethod(
			"setTriggerId",
			"(Landroid/view/autofill/AutofillId;)Landroid/service/autofill/SaveInfo$Builder;",
			arg0.object()
		);
	}
	inline android::service::autofill::SaveInfo_Builder SaveInfo_Builder::setValidator(JObject arg0) const
	{
		return callObjectMethod(
			"setValidator",
			"(Landroid/service/autofill/Validator;)Landroid/service/autofill/SaveInfo$Builder;",
			arg0.object()
		);
	}
} // namespace android::service::autofill

// Base class headers

