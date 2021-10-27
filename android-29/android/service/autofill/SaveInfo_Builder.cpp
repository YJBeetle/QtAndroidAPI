#include "../../content/IntentSender.hpp"
#include "./CustomDescription.hpp"
#include "./SaveInfo.hpp"
#include "../../view/autofill/AutofillId.hpp"
#include "./SaveInfo_Builder.hpp"

namespace android::service::autofill
{
	// Fields
	
	SaveInfo_Builder::SaveInfo_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SaveInfo_Builder::SaveInfo_Builder(jint &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.service.autofill.SaveInfo$Builder",
			"(I)V",
			arg0
		);
	}
	SaveInfo_Builder::SaveInfo_Builder(jint &arg0, jarray &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.service.autofill.SaveInfo$Builder",
			"(I[Landroid/view/autofill/AutofillId;)V",
			arg0,
			arg1
		);
	}
	
	// Methods
	QAndroidJniObject SaveInfo_Builder::addSanitizer(__JniBaseClass arg0, jarray arg1)
	{
		return __thiz.callObjectMethod(
			"addSanitizer",
			"(Landroid/service/autofill/Sanitizer;[Landroid/view/autofill/AutofillId;)Landroid/service/autofill/SaveInfo$Builder;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject SaveInfo_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/service/autofill/SaveInfo;"
		);
	}
	QAndroidJniObject SaveInfo_Builder::setCustomDescription(android::service::autofill::CustomDescription arg0)
	{
		return __thiz.callObjectMethod(
			"setCustomDescription",
			"(Landroid/service/autofill/CustomDescription;)Landroid/service/autofill/SaveInfo$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject SaveInfo_Builder::setDescription(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"setDescription",
			"(Ljava/lang/CharSequence;)Landroid/service/autofill/SaveInfo$Builder;",
			arg0
		);
	}
	QAndroidJniObject SaveInfo_Builder::setDescription(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"setDescription",
			"(Ljava/lang/CharSequence;)Landroid/service/autofill/SaveInfo$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject SaveInfo_Builder::setFlags(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setFlags",
			"(I)Landroid/service/autofill/SaveInfo$Builder;",
			arg0
		);
	}
	QAndroidJniObject SaveInfo_Builder::setNegativeAction(jint arg0, android::content::IntentSender arg1)
	{
		return __thiz.callObjectMethod(
			"setNegativeAction",
			"(ILandroid/content/IntentSender;)Landroid/service/autofill/SaveInfo$Builder;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject SaveInfo_Builder::setOptionalIds(jarray arg0)
	{
		return __thiz.callObjectMethod(
			"setOptionalIds",
			"([Landroid/view/autofill/AutofillId;)Landroid/service/autofill/SaveInfo$Builder;",
			arg0
		);
	}
	QAndroidJniObject SaveInfo_Builder::setTriggerId(android::view::autofill::AutofillId arg0)
	{
		return __thiz.callObjectMethod(
			"setTriggerId",
			"(Landroid/view/autofill/AutofillId;)Landroid/service/autofill/SaveInfo$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject SaveInfo_Builder::setValidator(__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"setValidator",
			"(Landroid/service/autofill/Validator;)Landroid/service/autofill/SaveInfo$Builder;",
			arg0.__jniObject().object()
		);
	}
} // namespace android::service::autofill

