#pragma once

#ifndef ANDROID_SERVICE_AUTOFILL_FILLCONTEXT
#define ANDROID_SERVICE_AUTOFILL_FILLCONTEXT

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::view::autofill
{
	class AutofillId;
}
namespace __jni_impl::android::app::assist
{
	class AssistStructure;
}

namespace __jni_impl::android::service::autofill
{
	class FillContext : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject toString();
		QAndroidJniObject getFocusedId();
		QAndroidJniObject getStructure();
		jint getRequestId();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::service::autofill

#include "../../os/Parcel.hpp"
#include "../../view/autofill/AutofillId.hpp"
#include "../../app/assist/AssistStructure.hpp"

namespace __jni_impl::android::service::autofill
{
	// Fields
	QAndroidJniObject FillContext::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.service.autofill.FillContext",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	
	// Constructors
	void FillContext::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.service.autofill.FillContext",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject FillContext::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject FillContext::getFocusedId()
	{
		return __thiz.callObjectMethod(
			"getFocusedId",
			"()Landroid/view/autofill/AutofillId;");
	}
	QAndroidJniObject FillContext::getStructure()
	{
		return __thiz.callObjectMethod(
			"getStructure",
			"()Landroid/app/assist/AssistStructure;");
	}
	jint FillContext::getRequestId()
	{
		return __thiz.callMethod<jint>(
			"getRequestId",
			"()I");
	}
	jint FillContext::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void FillContext::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
} // namespace __jni_impl::android::service::autofill

namespace android::service::autofill
{
	class FillContext : public __jni_impl::android::service::autofill::FillContext
	{
	public:
		FillContext(QAndroidJniObject obj) { __thiz = obj; }
		FillContext()
		{
			__constructor();
		}
	};
} // namespace android::service::autofill

#endif // ANDROID_SERVICE_AUTOFILL_FILLCONTEXT

