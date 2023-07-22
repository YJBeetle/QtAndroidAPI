#pragma once

#include "./InlinePresentation.def.hpp"
#include "./Presentations.def.hpp"
#include "../../widget/RemoteViews.def.hpp"
#include "./Presentations_Builder.def.hpp"

namespace android::service::autofill
{
	// Fields
	
	// Constructors
	inline Presentations_Builder::Presentations_Builder()
		: JObject(
			"android.service.autofill.Presentations$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::service::autofill::Presentations Presentations_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/service/autofill/Presentations;"
		);
	}
	inline android::service::autofill::Presentations_Builder Presentations_Builder::setDialogPresentation(android::widget::RemoteViews arg0) const
	{
		return callObjectMethod(
			"setDialogPresentation",
			"(Landroid/widget/RemoteViews;)Landroid/service/autofill/Presentations$Builder;",
			arg0.object()
		);
	}
	inline android::service::autofill::Presentations_Builder Presentations_Builder::setInlinePresentation(android::service::autofill::InlinePresentation arg0) const
	{
		return callObjectMethod(
			"setInlinePresentation",
			"(Landroid/service/autofill/InlinePresentation;)Landroid/service/autofill/Presentations$Builder;",
			arg0.object()
		);
	}
	inline android::service::autofill::Presentations_Builder Presentations_Builder::setInlineTooltipPresentation(android::service::autofill::InlinePresentation arg0) const
	{
		return callObjectMethod(
			"setInlineTooltipPresentation",
			"(Landroid/service/autofill/InlinePresentation;)Landroid/service/autofill/Presentations$Builder;",
			arg0.object()
		);
	}
	inline android::service::autofill::Presentations_Builder Presentations_Builder::setMenuPresentation(android::widget::RemoteViews arg0) const
	{
		return callObjectMethod(
			"setMenuPresentation",
			"(Landroid/widget/RemoteViews;)Landroid/service/autofill/Presentations$Builder;",
			arg0.object()
		);
	}
} // namespace android::service::autofill

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::service::autofill;
#endif
