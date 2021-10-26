#pragma once

#ifndef ANDROID_SERVICE_AUTOFILL_BATCHUPDATES_BUILDER
#define ANDROID_SERVICE_AUTOFILL_BATCHUPDATES_BUILDER

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::service::autofill
{
	class BatchUpdates;
}
namespace __jni_impl::android::widget
{
	class RemoteViews;
}

namespace __jni_impl::android::service::autofill
{
	class BatchUpdates_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject transformChild(jint arg0, __jni_impl::__JniBaseClass arg1);
		QAndroidJniObject updateTemplate(__jni_impl::android::widget::RemoteViews arg0);
	};
} // namespace __jni_impl::android::service::autofill

#include "BatchUpdates.hpp"
#include "../../widget/RemoteViews.hpp"

namespace __jni_impl::android::service::autofill
{
	// Fields
	
	// Constructors
	void BatchUpdates_Builder::__constructor()
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
	QAndroidJniObject BatchUpdates_Builder::transformChild(jint arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"transformChild",
			"(ILandroid/service/autofill/Transformation;)Landroid/service/autofill/BatchUpdates$Builder;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject BatchUpdates_Builder::updateTemplate(__jni_impl::android::widget::RemoteViews arg0)
	{
		return __thiz.callObjectMethod(
			"updateTemplate",
			"(Landroid/widget/RemoteViews;)Landroid/service/autofill/BatchUpdates$Builder;",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::service::autofill

namespace android::service::autofill
{
	class BatchUpdates_Builder : public __jni_impl::android::service::autofill::BatchUpdates_Builder
	{
	public:
		BatchUpdates_Builder(QAndroidJniObject obj) { __thiz = obj; }
		BatchUpdates_Builder()
		{
			__constructor();
		}
	};
} // namespace android::service::autofill

#endif // ANDROID_SERVICE_AUTOFILL_BATCHUPDATES_BUILDER

