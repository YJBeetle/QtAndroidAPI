#include "./BatchUpdates.hpp"
#include "../../widget/RemoteViews.hpp"
#include "./BatchUpdates_Builder.hpp"

namespace android::service::autofill
{
	// Fields
	
	BatchUpdates_Builder::BatchUpdates_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	BatchUpdates_Builder::BatchUpdates_Builder()
	{
		__thiz = QAndroidJniObject(
			"android.service.autofill.BatchUpdates$Builder",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject BatchUpdates_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/service/autofill/BatchUpdates;"
		);
	}
	QAndroidJniObject BatchUpdates_Builder::transformChild(jint arg0, __JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"transformChild",
			"(ILandroid/service/autofill/Transformation;)Landroid/service/autofill/BatchUpdates$Builder;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject BatchUpdates_Builder::updateTemplate(android::widget::RemoteViews arg0)
	{
		return __thiz.callObjectMethod(
			"updateTemplate",
			"(Landroid/widget/RemoteViews;)Landroid/service/autofill/BatchUpdates$Builder;",
			arg0.__jniObject().object()
		);
	}
} // namespace android::service::autofill

