#pragma once

#ifndef ANDROID_SERVICE_AUTOFILL_DATASET_BUILDER
#define ANDROID_SERVICE_AUTOFILL_DATASET_BUILDER

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class IntentSender;
}
namespace __jni_impl::android::service::autofill
{
	class Dataset;
}
namespace __jni_impl::android::view::autofill
{
	class AutofillId;
}
namespace __jni_impl::android::view::autofill
{
	class AutofillValue;
}
namespace __jni_impl::android::widget
{
	class RemoteViews;
}
namespace __jni_impl::java::util::regex
{
	class Pattern;
}

namespace __jni_impl::android::service::autofill
{
	class Dataset_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::android::widget::RemoteViews arg0);
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setAuthentication(__jni_impl::android::content::IntentSender arg0);
		QAndroidJniObject setId(jstring arg0);
		QAndroidJniObject setId(const QString &arg0);
		QAndroidJniObject setValue(__jni_impl::android::view::autofill::AutofillId arg0, __jni_impl::android::view::autofill::AutofillValue arg1);
		QAndroidJniObject setValue(__jni_impl::android::view::autofill::AutofillId arg0, __jni_impl::android::view::autofill::AutofillValue arg1, __jni_impl::android::widget::RemoteViews arg2);
		QAndroidJniObject setValue(__jni_impl::android::view::autofill::AutofillId arg0, __jni_impl::android::view::autofill::AutofillValue arg1, __jni_impl::java::util::regex::Pattern arg2);
		QAndroidJniObject setValue(__jni_impl::android::view::autofill::AutofillId arg0, __jni_impl::android::view::autofill::AutofillValue arg1, __jni_impl::java::util::regex::Pattern arg2, __jni_impl::android::widget::RemoteViews arg3);
	};
} // namespace __jni_impl::android::service::autofill

#include "../../content/IntentSender.hpp"
#include "Dataset.hpp"
#include "../../view/autofill/AutofillId.hpp"
#include "../../view/autofill/AutofillValue.hpp"
#include "../../widget/RemoteViews.hpp"
#include "../../../java/util/regex/Pattern.hpp"

namespace __jni_impl::android::service::autofill
{
	// Fields
	
	// Constructors
	void Dataset_Builder::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.service.autofill.Dataset$Builder",
			"()V"
		);
	}
	void Dataset_Builder::__constructor(__jni_impl::android::widget::RemoteViews arg0)
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
	QAndroidJniObject Dataset_Builder::setAuthentication(__jni_impl::android::content::IntentSender arg0)
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
	QAndroidJniObject Dataset_Builder::setValue(__jni_impl::android::view::autofill::AutofillId arg0, __jni_impl::android::view::autofill::AutofillValue arg1)
	{
		return __thiz.callObjectMethod(
			"setValue",
			"(Landroid/view/autofill/AutofillId;Landroid/view/autofill/AutofillValue;)Landroid/service/autofill/Dataset$Builder;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject Dataset_Builder::setValue(__jni_impl::android::view::autofill::AutofillId arg0, __jni_impl::android::view::autofill::AutofillValue arg1, __jni_impl::android::widget::RemoteViews arg2)
	{
		return __thiz.callObjectMethod(
			"setValue",
			"(Landroid/view/autofill/AutofillId;Landroid/view/autofill/AutofillValue;Landroid/widget/RemoteViews;)Landroid/service/autofill/Dataset$Builder;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject Dataset_Builder::setValue(__jni_impl::android::view::autofill::AutofillId arg0, __jni_impl::android::view::autofill::AutofillValue arg1, __jni_impl::java::util::regex::Pattern arg2)
	{
		return __thiz.callObjectMethod(
			"setValue",
			"(Landroid/view/autofill/AutofillId;Landroid/view/autofill/AutofillValue;Ljava/util/regex/Pattern;)Landroid/service/autofill/Dataset$Builder;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject Dataset_Builder::setValue(__jni_impl::android::view::autofill::AutofillId arg0, __jni_impl::android::view::autofill::AutofillValue arg1, __jni_impl::java::util::regex::Pattern arg2, __jni_impl::android::widget::RemoteViews arg3)
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
} // namespace __jni_impl::android::service::autofill

namespace android::service::autofill
{
	class Dataset_Builder : public __jni_impl::android::service::autofill::Dataset_Builder
	{
	public:
		Dataset_Builder(QAndroidJniObject obj) { __thiz = obj; }
		Dataset_Builder()
		{
			__constructor();
		}
		Dataset_Builder(__jni_impl::android::widget::RemoteViews arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::service::autofill

#endif // ANDROID_SERVICE_AUTOFILL_DATASET_BUILDER

