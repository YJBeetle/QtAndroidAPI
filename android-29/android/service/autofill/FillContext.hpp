#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::app::assist
{
	class AssistStructure;
}
namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::view::autofill
{
	class AutofillId;
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
		jint describeContents();
		QAndroidJniObject getFocusedId();
		jint getRequestId();
		QAndroidJniObject getStructure();
		jstring toString();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::service::autofill

#include "../../app/assist/AssistStructure.hpp"
#include "../../os/Parcel.hpp"
#include "../../view/autofill/AutofillId.hpp"

namespace __jni_impl::android::service::autofill
{
	// Fields
	QAndroidJniObject FillContext::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.service.autofill.FillContext",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void FillContext::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.service.autofill.FillContext",
			"(V)V");
	}
	
	// Methods
	jint FillContext::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	QAndroidJniObject FillContext::getFocusedId()
	{
		return __thiz.callObjectMethod(
			"getFocusedId",
			"()Landroid/view/autofill/AutofillId;"
		);
	}
	jint FillContext::getRequestId()
	{
		return __thiz.callMethod<jint>(
			"getRequestId",
			"()I"
		);
	}
	QAndroidJniObject FillContext::getStructure()
	{
		return __thiz.callObjectMethod(
			"getStructure",
			"()Landroid/app/assist/AssistStructure;"
		);
	}
	jstring FillContext::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void FillContext::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
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

