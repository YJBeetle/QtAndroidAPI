#include "../../content/IntentSender.hpp"
#include "./Dataset.hpp"
#include "./InlinePresentation.hpp"
#include "../../view/autofill/AutofillId.hpp"
#include "../../view/autofill/AutofillValue.hpp"
#include "../../widget/RemoteViews.hpp"
#include "../../../JString.hpp"
#include "../../../java/util/regex/Pattern.hpp"
#include "./Dataset_Builder.hpp"

namespace android::service::autofill
{
	// Fields
	
	// QJniObject forward
	Dataset_Builder::Dataset_Builder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	Dataset_Builder::Dataset_Builder()
		: JObject(
			"android.service.autofill.Dataset$Builder",
			"()V"
		) {}
	Dataset_Builder::Dataset_Builder(android::widget::RemoteViews arg0)
		: JObject(
			"android.service.autofill.Dataset$Builder",
			"(Landroid/widget/RemoteViews;)V",
			arg0.object()
		) {}
	
	// Methods
	android::service::autofill::Dataset Dataset_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/service/autofill/Dataset;"
		);
	}
	android::service::autofill::Dataset_Builder Dataset_Builder::setAuthentication(android::content::IntentSender arg0)
	{
		return callObjectMethod(
			"setAuthentication",
			"(Landroid/content/IntentSender;)Landroid/service/autofill/Dataset$Builder;",
			arg0.object()
		);
	}
	android::service::autofill::Dataset_Builder Dataset_Builder::setId(JString arg0)
	{
		return callObjectMethod(
			"setId",
			"(Ljava/lang/String;)Landroid/service/autofill/Dataset$Builder;",
			arg0.object<jstring>()
		);
	}
	android::service::autofill::Dataset_Builder Dataset_Builder::setInlinePresentation(android::service::autofill::InlinePresentation arg0)
	{
		return callObjectMethod(
			"setInlinePresentation",
			"(Landroid/service/autofill/InlinePresentation;)Landroid/service/autofill/Dataset$Builder;",
			arg0.object()
		);
	}
	android::service::autofill::Dataset_Builder Dataset_Builder::setValue(android::view::autofill::AutofillId arg0, android::view::autofill::AutofillValue arg1)
	{
		return callObjectMethod(
			"setValue",
			"(Landroid/view/autofill/AutofillId;Landroid/view/autofill/AutofillValue;)Landroid/service/autofill/Dataset$Builder;",
			arg0.object(),
			arg1.object()
		);
	}
	android::service::autofill::Dataset_Builder Dataset_Builder::setValue(android::view::autofill::AutofillId arg0, android::view::autofill::AutofillValue arg1, android::widget::RemoteViews arg2)
	{
		return callObjectMethod(
			"setValue",
			"(Landroid/view/autofill/AutofillId;Landroid/view/autofill/AutofillValue;Landroid/widget/RemoteViews;)Landroid/service/autofill/Dataset$Builder;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	android::service::autofill::Dataset_Builder Dataset_Builder::setValue(android::view::autofill::AutofillId arg0, android::view::autofill::AutofillValue arg1, java::util::regex::Pattern arg2)
	{
		return callObjectMethod(
			"setValue",
			"(Landroid/view/autofill/AutofillId;Landroid/view/autofill/AutofillValue;Ljava/util/regex/Pattern;)Landroid/service/autofill/Dataset$Builder;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	android::service::autofill::Dataset_Builder Dataset_Builder::setValue(android::view::autofill::AutofillId arg0, android::view::autofill::AutofillValue arg1, android::widget::RemoteViews arg2, android::service::autofill::InlinePresentation arg3)
	{
		return callObjectMethod(
			"setValue",
			"(Landroid/view/autofill/AutofillId;Landroid/view/autofill/AutofillValue;Landroid/widget/RemoteViews;Landroid/service/autofill/InlinePresentation;)Landroid/service/autofill/Dataset$Builder;",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		);
	}
	android::service::autofill::Dataset_Builder Dataset_Builder::setValue(android::view::autofill::AutofillId arg0, android::view::autofill::AutofillValue arg1, java::util::regex::Pattern arg2, android::widget::RemoteViews arg3)
	{
		return callObjectMethod(
			"setValue",
			"(Landroid/view/autofill/AutofillId;Landroid/view/autofill/AutofillValue;Ljava/util/regex/Pattern;Landroid/widget/RemoteViews;)Landroid/service/autofill/Dataset$Builder;",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		);
	}
	android::service::autofill::Dataset_Builder Dataset_Builder::setValue(android::view::autofill::AutofillId arg0, android::view::autofill::AutofillValue arg1, java::util::regex::Pattern arg2, android::widget::RemoteViews arg3, android::service::autofill::InlinePresentation arg4)
	{
		return callObjectMethod(
			"setValue",
			"(Landroid/view/autofill/AutofillId;Landroid/view/autofill/AutofillValue;Ljava/util/regex/Pattern;Landroid/widget/RemoteViews;Landroid/service/autofill/InlinePresentation;)Landroid/service/autofill/Dataset$Builder;",
			arg0.object(),
			arg1.object(),
			arg2.object(),
			arg3.object(),
			arg4.object()
		);
	}
} // namespace android::service::autofill

