#include "./BatchUpdates.hpp"
#include "../../widget/RemoteViews.hpp"
#include "./BatchUpdates_Builder.hpp"

namespace android::service::autofill
{
	// Fields
	
	// QAndroidJniObject forward
	BatchUpdates_Builder::BatchUpdates_Builder(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	BatchUpdates_Builder::BatchUpdates_Builder()
		: __JniBaseClass(
			"android.service.autofill.BatchUpdates$Builder",
			"()V"
		) {}
	
	// Methods
	android::service::autofill::BatchUpdates BatchUpdates_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/service/autofill/BatchUpdates;"
		);
	}
	android::service::autofill::BatchUpdates_Builder BatchUpdates_Builder::transformChild(jint arg0, __JniBaseClass arg1)
	{
		return callObjectMethod(
			"transformChild",
			"(ILandroid/service/autofill/Transformation;)Landroid/service/autofill/BatchUpdates$Builder;",
			arg0,
			arg1.object()
		);
	}
	android::service::autofill::BatchUpdates_Builder BatchUpdates_Builder::updateTemplate(android::widget::RemoteViews arg0)
	{
		return callObjectMethod(
			"updateTemplate",
			"(Landroid/widget/RemoteViews;)Landroid/service/autofill/BatchUpdates$Builder;",
			arg0.object()
		);
	}
} // namespace android::service::autofill

