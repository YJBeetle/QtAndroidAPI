#include "./BatchUpdates.hpp"
#include "./CustomDescription.hpp"
#include "../../widget/RemoteViews.hpp"
#include "./CustomDescription_Builder.hpp"

namespace android::service::autofill
{
	// Fields
	
	CustomDescription_Builder::CustomDescription_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	CustomDescription_Builder::CustomDescription_Builder(android::widget::RemoteViews arg0)
	{
		__thiz = QAndroidJniObject(
			"android.service.autofill.CustomDescription$Builder",
			"(Landroid/widget/RemoteViews;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject CustomDescription_Builder::addChild(jint arg0, __JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"addChild",
			"(ILandroid/service/autofill/Transformation;)Landroid/service/autofill/CustomDescription$Builder;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject CustomDescription_Builder::addOnClickAction(jint arg0, __JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"addOnClickAction",
			"(ILandroid/service/autofill/OnClickAction;)Landroid/service/autofill/CustomDescription$Builder;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject CustomDescription_Builder::batchUpdate(__JniBaseClass arg0, android::service::autofill::BatchUpdates arg1)
	{
		return __thiz.callObjectMethod(
			"batchUpdate",
			"(Landroid/service/autofill/Validator;Landroid/service/autofill/BatchUpdates;)Landroid/service/autofill/CustomDescription$Builder;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject CustomDescription_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/service/autofill/CustomDescription;"
		);
	}
} // namespace android::service::autofill

