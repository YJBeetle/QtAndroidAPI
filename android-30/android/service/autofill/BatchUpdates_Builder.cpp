#include "./BatchUpdates.hpp"
#include "../../widget/RemoteViews.hpp"
#include "./BatchUpdates_Builder.hpp"

namespace android::service::autofill
{
	// Fields
	
	// QJniObject forward
	BatchUpdates_Builder::BatchUpdates_Builder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	BatchUpdates_Builder::BatchUpdates_Builder()
		: JObject(
			"android.service.autofill.BatchUpdates$Builder",
			"()V"
		) {}
	
	// Methods
	android::service::autofill::BatchUpdates BatchUpdates_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/service/autofill/BatchUpdates;"
		);
	}
	android::service::autofill::BatchUpdates_Builder BatchUpdates_Builder::transformChild(jint arg0, JObject arg1) const
	{
		return callObjectMethod(
			"transformChild",
			"(ILandroid/service/autofill/Transformation;)Landroid/service/autofill/BatchUpdates$Builder;",
			arg0,
			arg1.object()
		);
	}
	android::service::autofill::BatchUpdates_Builder BatchUpdates_Builder::updateTemplate(android::widget::RemoteViews arg0) const
	{
		return callObjectMethod(
			"updateTemplate",
			"(Landroid/widget/RemoteViews;)Landroid/service/autofill/BatchUpdates$Builder;",
			arg0.object()
		);
	}
} // namespace android::service::autofill

