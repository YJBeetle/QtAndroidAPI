#include "../../content/IntentSender.hpp"
#include "./CustomDescription.hpp"
#include "./SaveInfo.hpp"
#include "../../view/autofill/AutofillId.hpp"
#include "./SaveInfo_Builder.hpp"

namespace android::service::autofill
{
	// Fields
	
	// QAndroidJniObject forward
	SaveInfo_Builder::SaveInfo_Builder(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	SaveInfo_Builder::SaveInfo_Builder(jint arg0)
		: JObject(
			"android.service.autofill.SaveInfo$Builder",
			"(I)V",
			arg0
		) {}
	SaveInfo_Builder::SaveInfo_Builder(jint arg0, jarray arg1)
		: JObject(
			"android.service.autofill.SaveInfo$Builder",
			"(I[Landroid/view/autofill/AutofillId;)V",
			arg0,
			arg1
		) {}
	
	// Methods
	android::service::autofill::SaveInfo_Builder SaveInfo_Builder::addSanitizer(JObject arg0, jarray arg1)
	{
		return callObjectMethod(
			"addSanitizer",
			"(Landroid/service/autofill/Sanitizer;[Landroid/view/autofill/AutofillId;)Landroid/service/autofill/SaveInfo$Builder;",
			arg0.object(),
			arg1
		);
	}
	android::service::autofill::SaveInfo SaveInfo_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/service/autofill/SaveInfo;"
		);
	}
	android::service::autofill::SaveInfo_Builder SaveInfo_Builder::setCustomDescription(android::service::autofill::CustomDescription arg0)
	{
		return callObjectMethod(
			"setCustomDescription",
			"(Landroid/service/autofill/CustomDescription;)Landroid/service/autofill/SaveInfo$Builder;",
			arg0.object()
		);
	}
	android::service::autofill::SaveInfo_Builder SaveInfo_Builder::setDescription(jstring arg0)
	{
		return callObjectMethod(
			"setDescription",
			"(Ljava/lang/CharSequence;)Landroid/service/autofill/SaveInfo$Builder;",
			arg0
		);
	}
	android::service::autofill::SaveInfo_Builder SaveInfo_Builder::setFlags(jint arg0)
	{
		return callObjectMethod(
			"setFlags",
			"(I)Landroid/service/autofill/SaveInfo$Builder;",
			arg0
		);
	}
	android::service::autofill::SaveInfo_Builder SaveInfo_Builder::setNegativeAction(jint arg0, android::content::IntentSender arg1)
	{
		return callObjectMethod(
			"setNegativeAction",
			"(ILandroid/content/IntentSender;)Landroid/service/autofill/SaveInfo$Builder;",
			arg0,
			arg1.object()
		);
	}
	android::service::autofill::SaveInfo_Builder SaveInfo_Builder::setOptionalIds(jarray arg0)
	{
		return callObjectMethod(
			"setOptionalIds",
			"([Landroid/view/autofill/AutofillId;)Landroid/service/autofill/SaveInfo$Builder;",
			arg0
		);
	}
	android::service::autofill::SaveInfo_Builder SaveInfo_Builder::setTriggerId(android::view::autofill::AutofillId arg0)
	{
		return callObjectMethod(
			"setTriggerId",
			"(Landroid/view/autofill/AutofillId;)Landroid/service/autofill/SaveInfo$Builder;",
			arg0.object()
		);
	}
	android::service::autofill::SaveInfo_Builder SaveInfo_Builder::setValidator(JObject arg0)
	{
		return callObjectMethod(
			"setValidator",
			"(Landroid/service/autofill/Validator;)Landroid/service/autofill/SaveInfo$Builder;",
			arg0.object()
		);
	}
} // namespace android::service::autofill

