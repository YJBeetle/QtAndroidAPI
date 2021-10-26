#pragma once

#ifndef ANDROID_SERVICE_AUTOFILL_FILLRESPONSE_BUILDER
#define ANDROID_SERVICE_AUTOFILL_FILLRESPONSE_BUILDER

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::service::autofill
{
	class FillResponse;
}
namespace __jni_impl::android::service::autofill
{
	class Dataset;
}
namespace __jni_impl::android::service::autofill
{
	class SaveInfo;
}
namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::widget
{
	class RemoteViews;
}
namespace __jni_impl::android::service::autofill
{
	class UserData;
}
namespace __jni_impl::android::content
{
	class IntentSender;
}

namespace __jni_impl::android::service::autofill
{
	class FillResponse_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setIgnoredIds(jarray arg0);
		QAndroidJniObject addDataset(__jni_impl::android::service::autofill::Dataset arg0);
		QAndroidJniObject setSaveInfo(__jni_impl::android::service::autofill::SaveInfo arg0);
		QAndroidJniObject setClientState(__jni_impl::android::os::Bundle arg0);
		QAndroidJniObject setFieldClassificationIds(jarray arg0);
		QAndroidJniObject disableAutofill(jlong arg0);
		QAndroidJniObject setHeader(__jni_impl::android::widget::RemoteViews arg0);
		QAndroidJniObject setFooter(__jni_impl::android::widget::RemoteViews arg0);
		QAndroidJniObject setUserData(__jni_impl::android::service::autofill::UserData arg0);
		QAndroidJniObject setAuthentication(jarray arg0, __jni_impl::android::content::IntentSender arg1, __jni_impl::android::widget::RemoteViews arg2);
		QAndroidJniObject setFlags(jint arg0);
	};
} // namespace __jni_impl::android::service::autofill

#include "FillResponse.hpp"
#include "Dataset.hpp"
#include "SaveInfo.hpp"
#include "../../os/Bundle.hpp"
#include "../../widget/RemoteViews.hpp"
#include "UserData.hpp"
#include "../../content/IntentSender.hpp"

namespace __jni_impl::android::service::autofill
{
	// Fields
	
	// Constructors
	void FillResponse_Builder::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.service.autofill.FillResponse$Builder",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject FillResponse_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/service/autofill/FillResponse;"
		);
	}
	QAndroidJniObject FillResponse_Builder::setIgnoredIds(jarray arg0)
	{
		return __thiz.callObjectMethod(
			"setIgnoredIds",
			"([Landroid/view/autofill/AutofillId;)Landroid/service/autofill/FillResponse$Builder;",
			arg0
		);
	}
	QAndroidJniObject FillResponse_Builder::addDataset(__jni_impl::android::service::autofill::Dataset arg0)
	{
		return __thiz.callObjectMethod(
			"addDataset",
			"(Landroid/service/autofill/Dataset;)Landroid/service/autofill/FillResponse$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject FillResponse_Builder::setSaveInfo(__jni_impl::android::service::autofill::SaveInfo arg0)
	{
		return __thiz.callObjectMethod(
			"setSaveInfo",
			"(Landroid/service/autofill/SaveInfo;)Landroid/service/autofill/FillResponse$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject FillResponse_Builder::setClientState(__jni_impl::android::os::Bundle arg0)
	{
		return __thiz.callObjectMethod(
			"setClientState",
			"(Landroid/os/Bundle;)Landroid/service/autofill/FillResponse$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject FillResponse_Builder::setFieldClassificationIds(jarray arg0)
	{
		return __thiz.callObjectMethod(
			"setFieldClassificationIds",
			"([Landroid/view/autofill/AutofillId;)Landroid/service/autofill/FillResponse$Builder;",
			arg0
		);
	}
	QAndroidJniObject FillResponse_Builder::disableAutofill(jlong arg0)
	{
		return __thiz.callObjectMethod(
			"disableAutofill",
			"(J)Landroid/service/autofill/FillResponse$Builder;",
			arg0
		);
	}
	QAndroidJniObject FillResponse_Builder::setHeader(__jni_impl::android::widget::RemoteViews arg0)
	{
		return __thiz.callObjectMethod(
			"setHeader",
			"(Landroid/widget/RemoteViews;)Landroid/service/autofill/FillResponse$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject FillResponse_Builder::setFooter(__jni_impl::android::widget::RemoteViews arg0)
	{
		return __thiz.callObjectMethod(
			"setFooter",
			"(Landroid/widget/RemoteViews;)Landroid/service/autofill/FillResponse$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject FillResponse_Builder::setUserData(__jni_impl::android::service::autofill::UserData arg0)
	{
		return __thiz.callObjectMethod(
			"setUserData",
			"(Landroid/service/autofill/UserData;)Landroid/service/autofill/FillResponse$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject FillResponse_Builder::setAuthentication(jarray arg0, __jni_impl::android::content::IntentSender arg1, __jni_impl::android::widget::RemoteViews arg2)
	{
		return __thiz.callObjectMethod(
			"setAuthentication",
			"([Landroid/view/autofill/AutofillId;Landroid/content/IntentSender;Landroid/widget/RemoteViews;)Landroid/service/autofill/FillResponse$Builder;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject FillResponse_Builder::setFlags(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setFlags",
			"(I)Landroid/service/autofill/FillResponse$Builder;",
			arg0
		);
	}
} // namespace __jni_impl::android::service::autofill

namespace android::service::autofill
{
	class FillResponse_Builder : public __jni_impl::android::service::autofill::FillResponse_Builder
	{
	public:
		FillResponse_Builder(QAndroidJniObject obj) { __thiz = obj; }
		FillResponse_Builder()
		{
			__constructor();
		}
	};
} // namespace android::service::autofill

#endif // ANDROID_SERVICE_AUTOFILL_FILLRESPONSE_BUILDER

