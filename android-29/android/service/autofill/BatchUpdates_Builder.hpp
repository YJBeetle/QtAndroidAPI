#pragma once

#include "./BatchUpdates.def.hpp"
#include "../../widget/RemoteViews.def.hpp"
#include "./BatchUpdates_Builder.def.hpp"

namespace android::service::autofill
{
	// Fields
	
	// Constructors
	inline BatchUpdates_Builder::BatchUpdates_Builder()
		: JObject(
			"android.service.autofill.BatchUpdates$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::service::autofill::BatchUpdates BatchUpdates_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/service/autofill/BatchUpdates;"
		);
	}
	inline android::service::autofill::BatchUpdates_Builder BatchUpdates_Builder::transformChild(jint arg0, JObject arg1) const
	{
		return callObjectMethod(
			"transformChild",
			"(ILandroid/service/autofill/Transformation;)Landroid/service/autofill/BatchUpdates$Builder;",
			arg0,
			arg1.object()
		);
	}
	inline android::service::autofill::BatchUpdates_Builder BatchUpdates_Builder::updateTemplate(android::widget::RemoteViews arg0) const
	{
		return callObjectMethod(
			"updateTemplate",
			"(Landroid/widget/RemoteViews;)Landroid/service/autofill/BatchUpdates$Builder;",
			arg0.object()
		);
	}
} // namespace android::service::autofill

// Base class headers

