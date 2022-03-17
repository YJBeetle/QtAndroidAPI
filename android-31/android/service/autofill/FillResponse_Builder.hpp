#pragma once

#include "../../../JIntArray.hpp"
#include "../../../JArray.hpp"
#include "../../content/IntentSender.def.hpp"
#include "../../os/Bundle.def.hpp"
#include "./Dataset.def.hpp"
#include "./FillResponse.def.hpp"
#include "./InlinePresentation.def.hpp"
#include "./SaveInfo.def.hpp"
#include "./UserData.def.hpp"
#include "../../widget/RemoteViews.def.hpp"
#include "./FillResponse_Builder.def.hpp"

namespace android::service::autofill
{
	// Fields
	
	// Constructors
	inline FillResponse_Builder::FillResponse_Builder()
		: JObject(
			"android.service.autofill.FillResponse$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::service::autofill::FillResponse_Builder FillResponse_Builder::addDataset(android::service::autofill::Dataset arg0) const
	{
		return callObjectMethod(
			"addDataset",
			"(Landroid/service/autofill/Dataset;)Landroid/service/autofill/FillResponse$Builder;",
			arg0.object()
		);
	}
	inline android::service::autofill::FillResponse FillResponse_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/service/autofill/FillResponse;"
		);
	}
	inline android::service::autofill::FillResponse_Builder FillResponse_Builder::disableAutofill(jlong arg0) const
	{
		return callObjectMethod(
			"disableAutofill",
			"(J)Landroid/service/autofill/FillResponse$Builder;",
			arg0
		);
	}
	inline android::service::autofill::FillResponse_Builder FillResponse_Builder::setAuthentication(JArray arg0, android::content::IntentSender arg1, android::widget::RemoteViews arg2) const
	{
		return callObjectMethod(
			"setAuthentication",
			"([Landroid/view/autofill/AutofillId;Landroid/content/IntentSender;Landroid/widget/RemoteViews;)Landroid/service/autofill/FillResponse$Builder;",
			arg0.object<jarray>(),
			arg1.object(),
			arg2.object()
		);
	}
	inline android::service::autofill::FillResponse_Builder FillResponse_Builder::setAuthentication(JArray arg0, android::content::IntentSender arg1, android::widget::RemoteViews arg2, android::service::autofill::InlinePresentation arg3) const
	{
		return callObjectMethod(
			"setAuthentication",
			"([Landroid/view/autofill/AutofillId;Landroid/content/IntentSender;Landroid/widget/RemoteViews;Landroid/service/autofill/InlinePresentation;)Landroid/service/autofill/FillResponse$Builder;",
			arg0.object<jarray>(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		);
	}
	inline android::service::autofill::FillResponse_Builder FillResponse_Builder::setAuthentication(JArray arg0, android::content::IntentSender arg1, android::widget::RemoteViews arg2, android::service::autofill::InlinePresentation arg3, android::service::autofill::InlinePresentation arg4) const
	{
		return callObjectMethod(
			"setAuthentication",
			"([Landroid/view/autofill/AutofillId;Landroid/content/IntentSender;Landroid/widget/RemoteViews;Landroid/service/autofill/InlinePresentation;Landroid/service/autofill/InlinePresentation;)Landroid/service/autofill/FillResponse$Builder;",
			arg0.object<jarray>(),
			arg1.object(),
			arg2.object(),
			arg3.object(),
			arg4.object()
		);
	}
	inline android::service::autofill::FillResponse_Builder FillResponse_Builder::setClientState(android::os::Bundle arg0) const
	{
		return callObjectMethod(
			"setClientState",
			"(Landroid/os/Bundle;)Landroid/service/autofill/FillResponse$Builder;",
			arg0.object()
		);
	}
	inline android::service::autofill::FillResponse_Builder FillResponse_Builder::setFieldClassificationIds(JArray arg0) const
	{
		return callObjectMethod(
			"setFieldClassificationIds",
			"([Landroid/view/autofill/AutofillId;)Landroid/service/autofill/FillResponse$Builder;",
			arg0.object<jarray>()
		);
	}
	inline android::service::autofill::FillResponse_Builder FillResponse_Builder::setFlags(jint arg0) const
	{
		return callObjectMethod(
			"setFlags",
			"(I)Landroid/service/autofill/FillResponse$Builder;",
			arg0
		);
	}
	inline android::service::autofill::FillResponse_Builder FillResponse_Builder::setFooter(android::widget::RemoteViews arg0) const
	{
		return callObjectMethod(
			"setFooter",
			"(Landroid/widget/RemoteViews;)Landroid/service/autofill/FillResponse$Builder;",
			arg0.object()
		);
	}
	inline android::service::autofill::FillResponse_Builder FillResponse_Builder::setHeader(android::widget::RemoteViews arg0) const
	{
		return callObjectMethod(
			"setHeader",
			"(Landroid/widget/RemoteViews;)Landroid/service/autofill/FillResponse$Builder;",
			arg0.object()
		);
	}
	inline android::service::autofill::FillResponse_Builder FillResponse_Builder::setIgnoredIds(JArray arg0) const
	{
		return callObjectMethod(
			"setIgnoredIds",
			"([Landroid/view/autofill/AutofillId;)Landroid/service/autofill/FillResponse$Builder;",
			arg0.object<jarray>()
		);
	}
	inline android::service::autofill::FillResponse_Builder FillResponse_Builder::setPresentationCancelIds(JIntArray arg0) const
	{
		return callObjectMethod(
			"setPresentationCancelIds",
			"([I)Landroid/service/autofill/FillResponse$Builder;",
			arg0.object<jintArray>()
		);
	}
	inline android::service::autofill::FillResponse_Builder FillResponse_Builder::setSaveInfo(android::service::autofill::SaveInfo arg0) const
	{
		return callObjectMethod(
			"setSaveInfo",
			"(Landroid/service/autofill/SaveInfo;)Landroid/service/autofill/FillResponse$Builder;",
			arg0.object()
		);
	}
	inline android::service::autofill::FillResponse_Builder FillResponse_Builder::setUserData(android::service::autofill::UserData arg0) const
	{
		return callObjectMethod(
			"setUserData",
			"(Landroid/service/autofill/UserData;)Landroid/service/autofill/FillResponse$Builder;",
			arg0.object()
		);
	}
} // namespace android::service::autofill

// Base class headers

