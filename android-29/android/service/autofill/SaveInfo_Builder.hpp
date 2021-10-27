#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class IntentSender;
}
namespace __jni_impl::android::service::autofill
{
	class CustomDescription;
}
namespace __jni_impl::android::service::autofill
{
	class SaveInfo;
}
namespace __jni_impl::android::view::autofill
{
	class AutofillId;
}

namespace __jni_impl::android::service::autofill
{
	class SaveInfo_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jint arg0);
		void __constructor(jint arg0, jarray arg1);
		
		// Methods
		QAndroidJniObject addSanitizer(__jni_impl::__JniBaseClass arg0, jarray arg1);
		QAndroidJniObject build();
		QAndroidJniObject setCustomDescription(__jni_impl::android::service::autofill::CustomDescription arg0);
		QAndroidJniObject setDescription(jstring arg0);
		QAndroidJniObject setDescription(const QString &arg0);
		QAndroidJniObject setFlags(jint arg0);
		QAndroidJniObject setNegativeAction(jint arg0, __jni_impl::android::content::IntentSender arg1);
		QAndroidJniObject setOptionalIds(jarray arg0);
		QAndroidJniObject setTriggerId(__jni_impl::android::view::autofill::AutofillId arg0);
		QAndroidJniObject setValidator(__jni_impl::__JniBaseClass arg0);
	};
} // namespace __jni_impl::android::service::autofill

#include "../../content/IntentSender.hpp"
#include "CustomDescription.hpp"
#include "SaveInfo.hpp"
#include "../../view/autofill/AutofillId.hpp"

namespace __jni_impl::android::service::autofill
{
	// Fields
	
	// Constructors
	void SaveInfo_Builder::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"android.service.autofill.SaveInfo$Builder",
			"(I)V",
			arg0
		);
	}
	void SaveInfo_Builder::__constructor(jint arg0, jarray arg1)
	{
		__thiz = QAndroidJniObject(
			"android.service.autofill.SaveInfo$Builder",
			"(I[Landroid/view/autofill/AutofillId;)V",
			arg0,
			arg1
		);
	}
	
	// Methods
	QAndroidJniObject SaveInfo_Builder::addSanitizer(__jni_impl::__JniBaseClass arg0, jarray arg1)
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
	QAndroidJniObject SaveInfo_Builder::setCustomDescription(__jni_impl::android::service::autofill::CustomDescription arg0)
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
	QAndroidJniObject SaveInfo_Builder::setNegativeAction(jint arg0, __jni_impl::android::content::IntentSender arg1)
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
	QAndroidJniObject SaveInfo_Builder::setTriggerId(__jni_impl::android::view::autofill::AutofillId arg0)
	{
		return __thiz.callObjectMethod(
			"setTriggerId",
			"(Landroid/view/autofill/AutofillId;)Landroid/service/autofill/SaveInfo$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject SaveInfo_Builder::setValidator(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"setValidator",
			"(Landroid/service/autofill/Validator;)Landroid/service/autofill/SaveInfo$Builder;",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::service::autofill

namespace android::service::autofill
{
	class SaveInfo_Builder : public __jni_impl::android::service::autofill::SaveInfo_Builder
	{
	public:
		SaveInfo_Builder(QAndroidJniObject obj) { __thiz = obj; }
		SaveInfo_Builder(jint arg0)
		{
			__constructor(
				arg0);
		}
		SaveInfo_Builder(jint arg0, jarray arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::service::autofill

