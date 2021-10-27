#include "../../content/IntentSender.hpp"
#include "./Dataset.hpp"
#include "../../view/autofill/AutofillId.hpp"
#include "../../view/autofill/AutofillValue.hpp"
#include "../../widget/RemoteViews.hpp"
#include "../../../java/util/regex/Pattern.hpp"
#include "./Dataset_Builder.hpp"

namespace android::service::autofill
{
	// Fields
	
	Dataset_Builder::Dataset_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Dataset_Builder::Dataset_Builder()
	{
		__thiz = QAndroidJniObject(
			"android.service.autofill.Dataset$Builder",
			"()V"
		);
	}
	Dataset_Builder::Dataset_Builder(android::widget::RemoteViews &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.service.autofill.Dataset$Builder",
			"(Landroid/widget/RemoteViews;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject Dataset_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/service/autofill/Dataset;"
		);
	}
	QAndroidJniObject Dataset_Builder::setAuthentication(android::content::IntentSender arg0)
	{
		return __thiz.callObjectMethod(
			"setAuthentication",
			"(Landroid/content/IntentSender;)Landroid/service/autofill/Dataset$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Dataset_Builder::setId(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setId",
			"(Ljava/lang/String;)Landroid/service/autofill/Dataset$Builder;",
			arg0
		);
	}
	QAndroidJniObject Dataset_Builder::setId(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setId",
			"(Ljava/lang/String;)Landroid/service/autofill/Dataset$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject Dataset_Builder::setValue(android::view::autofill::AutofillId arg0, android::view::autofill::AutofillValue arg1)
	{
		return __thiz.callObjectMethod(
			"setValue",
			"(Landroid/view/autofill/AutofillId;Landroid/view/autofill/AutofillValue;)Landroid/service/autofill/Dataset$Builder;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Dataset_Builder::setValue(android::view::autofill::AutofillId arg0, android::view::autofill::AutofillValue arg1, android::widget::RemoteViews arg2)
	{
		return __thiz.callObjectMethod(
			"setValue",
			"(Landroid/view/autofill/AutofillId;Landroid/view/autofill/AutofillValue;Landroid/widget/RemoteViews;)Landroid/service/autofill/Dataset$Builder;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject Dataset_Builder::setValue(android::view::autofill::AutofillId arg0, android::view::autofill::AutofillValue arg1, java::util::regex::Pattern arg2)
	{
		return __thiz.callObjectMethod(
			"setValue",
			"(Landroid/view/autofill/AutofillId;Landroid/view/autofill/AutofillValue;Ljava/util/regex/Pattern;)Landroid/service/autofill/Dataset$Builder;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject Dataset_Builder::setValue(android::view::autofill::AutofillId arg0, android::view::autofill::AutofillValue arg1, java::util::regex::Pattern arg2, android::widget::RemoteViews arg3)
	{
		return __thiz.callObjectMethod(
			"setValue",
			"(Landroid/view/autofill/AutofillId;Landroid/view/autofill/AutofillValue;Ljava/util/regex/Pattern;Landroid/widget/RemoteViews;)Landroid/service/autofill/Dataset$Builder;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
} // namespace android::service::autofill

