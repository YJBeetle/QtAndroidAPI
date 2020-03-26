#pragma once

#ifndef ANDROID_SERVICE_AUTOFILL_FILLREQUEST
#define ANDROID_SERVICE_AUTOFILL_FILLREQUEST

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::os
{
	class Bundle;
}

namespace __jni_impl::android::service::autofill
{
	class FillRequest : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint FLAG_COMPATIBILITY_MODE_REQUEST();
		static jint FLAG_MANUAL_REQUEST();
		
		// Constructors
		void __constructor();
		
		// Methods
		jstring toString();
		jint getId();
		jint getFlags();
		QAndroidJniObject getFillContexts();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		QAndroidJniObject getClientState();
	};
} // namespace __jni_impl::android::service::autofill

#include "../../os/Parcel.hpp"
#include "../../os/Bundle.hpp"

namespace __jni_impl::android::service::autofill
{
	// Fields
	QAndroidJniObject FillRequest::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.service.autofill.FillRequest",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint FillRequest::FLAG_COMPATIBILITY_MODE_REQUEST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.autofill.FillRequest",
			"FLAG_COMPATIBILITY_MODE_REQUEST"
		);
	}
	jint FillRequest::FLAG_MANUAL_REQUEST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.autofill.FillRequest",
			"FLAG_MANUAL_REQUEST"
		);
	}
	
	// Constructors
	void FillRequest::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.service.autofill.FillRequest",
			"(V)V");
	}
	
	// Methods
	jstring FillRequest::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint FillRequest::getId()
	{
		return __thiz.callMethod<jint>(
			"getId",
			"()I"
		);
	}
	jint FillRequest::getFlags()
	{
		return __thiz.callMethod<jint>(
			"getFlags",
			"()I"
		);
	}
	QAndroidJniObject FillRequest::getFillContexts()
	{
		return __thiz.callObjectMethod(
			"getFillContexts",
			"()Ljava/util/List;"
		);
	}
	jint FillRequest::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void FillRequest::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject FillRequest::getClientState()
	{
		return __thiz.callObjectMethod(
			"getClientState",
			"()Landroid/os/Bundle;"
		);
	}
} // namespace __jni_impl::android::service::autofill

namespace android::service::autofill
{
	class FillRequest : public __jni_impl::android::service::autofill::FillRequest
	{
	public:
		FillRequest(QAndroidJniObject obj) { __thiz = obj; }
		FillRequest()
		{
			__constructor();
		}
	};
} // namespace android::service::autofill

#endif // ANDROID_SERVICE_AUTOFILL_FILLREQUEST

