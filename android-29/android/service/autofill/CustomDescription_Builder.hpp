#pragma once

#ifndef ANDROID_SERVICE_AUTOFILL_CUSTOMDESCRIPTION_BUILDER
#define ANDROID_SERVICE_AUTOFILL_CUSTOMDESCRIPTION_BUILDER

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::widget
{
	class RemoteViews;
}
namespace __jni_impl::android::service::autofill
{
	class CustomDescription;
}
namespace __jni_impl::android::service::autofill
{
	class BatchUpdates;
}

namespace __jni_impl::android::service::autofill
{
	class CustomDescription_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::widget::RemoteViews arg0);
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject addChild(jint arg0, __jni_impl::__JniBaseClass arg1);
		QAndroidJniObject batchUpdate(__jni_impl::__JniBaseClass arg0, __jni_impl::android::service::autofill::BatchUpdates arg1);
		QAndroidJniObject addOnClickAction(jint arg0, __jni_impl::__JniBaseClass arg1);
	};
} // namespace __jni_impl::android::service::autofill

#include "../../widget/RemoteViews.hpp"
#include "CustomDescription.hpp"
#include "BatchUpdates.hpp"

namespace __jni_impl::android::service::autofill
{
	// Fields
	
	// Constructors
	void CustomDescription_Builder::__constructor(__jni_impl::android::widget::RemoteViews arg0)
	{
		__thiz = QAndroidJniObject(
			"android.service.autofill.CustomDescription$Builder",
			"(Landroid/widget/RemoteViews;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	QAndroidJniObject CustomDescription_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/service/autofill/CustomDescription;");
	}
	QAndroidJniObject CustomDescription_Builder::addChild(jint arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"addChild",
			"(ILandroid/service/autofill/Transformation;)Landroid/service/autofill/CustomDescription$Builder;",
			arg0,
			arg1.__jniObject().object());
	}
	QAndroidJniObject CustomDescription_Builder::batchUpdate(__jni_impl::__JniBaseClass arg0, __jni_impl::android::service::autofill::BatchUpdates arg1)
	{
		return __thiz.callObjectMethod(
			"batchUpdate",
			"(Landroid/service/autofill/Validator;Landroid/service/autofill/BatchUpdates;)Landroid/service/autofill/CustomDescription$Builder;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	QAndroidJniObject CustomDescription_Builder::addOnClickAction(jint arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"addOnClickAction",
			"(ILandroid/service/autofill/OnClickAction;)Landroid/service/autofill/CustomDescription$Builder;",
			arg0,
			arg1.__jniObject().object());
	}
} // namespace __jni_impl::android::service::autofill

namespace android::service::autofill
{
	class CustomDescription_Builder : public __jni_impl::android::service::autofill::CustomDescription_Builder
	{
	public:
		CustomDescription_Builder(QAndroidJniObject obj) { __thiz = obj; }
		CustomDescription_Builder(__jni_impl::android::widget::RemoteViews arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::service::autofill

#endif // ANDROID_SERVICE_AUTOFILL_CUSTOMDESCRIPTION_BUILDER

