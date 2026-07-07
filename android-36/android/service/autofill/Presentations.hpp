#pragma once

#include "./InlinePresentation.def.hpp"
#include "../../widget/RemoteViews.def.hpp"
#include "./Presentations.def.hpp"

namespace android::service::autofill
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::widget::RemoteViews Presentations::getDialogPresentation() const
	{
		return callObjectMethod(
			"getDialogPresentation",
			"()Landroid/widget/RemoteViews;"
		);
	}
	inline android::service::autofill::InlinePresentation Presentations::getInlinePresentation() const
	{
		return callObjectMethod(
			"getInlinePresentation",
			"()Landroid/service/autofill/InlinePresentation;"
		);
	}
	inline android::service::autofill::InlinePresentation Presentations::getInlineTooltipPresentation() const
	{
		return callObjectMethod(
			"getInlineTooltipPresentation",
			"()Landroid/service/autofill/InlinePresentation;"
		);
	}
	inline android::widget::RemoteViews Presentations::getMenuPresentation() const
	{
		return callObjectMethod(
			"getMenuPresentation",
			"()Landroid/widget/RemoteViews;"
		);
	}
} // namespace android::service::autofill

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::service::autofill;
#endif
