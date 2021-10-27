#include "../../content/IntentSender.hpp"
#include "../../os/Bundle.hpp"
#include "./Dataset.hpp"
#include "./FillResponse.hpp"
#include "./SaveInfo.hpp"
#include "./UserData.hpp"
#include "../../widget/RemoteViews.hpp"
#include "./FillResponse_Builder.hpp"

namespace android::service::autofill
{
	// Fields
	
	FillResponse_Builder::FillResponse_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	FillResponse_Builder::FillResponse_Builder()
	{
		__thiz = QAndroidJniObject(
			"android.service.autofill.FillResponse$Builder",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject FillResponse_Builder::addDataset(android::service::autofill::Dataset arg0)
	{
		return __thiz.callObjectMethod(
			"addDataset",
			"(Landroid/service/autofill/Dataset;)Landroid/service/autofill/FillResponse$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject FillResponse_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/service/autofill/FillResponse;"
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
	QAndroidJniObject FillResponse_Builder::setAuthentication(jarray arg0, android::content::IntentSender arg1, android::widget::RemoteViews arg2)
	{
		return __thiz.callObjectMethod(
			"setAuthentication",
			"([Landroid/view/autofill/AutofillId;Landroid/content/IntentSender;Landroid/widget/RemoteViews;)Landroid/service/autofill/FillResponse$Builder;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject FillResponse_Builder::setClientState(android::os::Bundle arg0)
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
	QAndroidJniObject FillResponse_Builder::setFlags(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setFlags",
			"(I)Landroid/service/autofill/FillResponse$Builder;",
			arg0
		);
	}
	QAndroidJniObject FillResponse_Builder::setFooter(android::widget::RemoteViews arg0)
	{
		return __thiz.callObjectMethod(
			"setFooter",
			"(Landroid/widget/RemoteViews;)Landroid/service/autofill/FillResponse$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject FillResponse_Builder::setHeader(android::widget::RemoteViews arg0)
	{
		return __thiz.callObjectMethod(
			"setHeader",
			"(Landroid/widget/RemoteViews;)Landroid/service/autofill/FillResponse$Builder;",
			arg0.__jniObject().object()
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
	QAndroidJniObject FillResponse_Builder::setSaveInfo(android::service::autofill::SaveInfo arg0)
	{
		return __thiz.callObjectMethod(
			"setSaveInfo",
			"(Landroid/service/autofill/SaveInfo;)Landroid/service/autofill/FillResponse$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject FillResponse_Builder::setUserData(android::service::autofill::UserData arg0)
	{
		return __thiz.callObjectMethod(
			"setUserData",
			"(Landroid/service/autofill/UserData;)Landroid/service/autofill/FillResponse$Builder;",
			arg0.__jniObject().object()
		);
	}
} // namespace android::service::autofill

