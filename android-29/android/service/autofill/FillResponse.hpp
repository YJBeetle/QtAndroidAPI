#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::service::autofill
{
	class FillResponse_Builder;
}

namespace __jni_impl::android::service::autofill
{
	class FillResponse : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint FLAG_DISABLE_ACTIVITY_ONLY();
		static jint FLAG_TRACK_CONTEXT_COMMITED();
		
		// Constructors
		void __constructor();
		
		// Methods
		jint describeContents();
		jstring toString();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::service::autofill

#include "../../os/Parcel.hpp"
#include "./FillResponse_Builder.hpp"

namespace __jni_impl::android::service::autofill
{
	// Fields
	QAndroidJniObject FillResponse::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.service.autofill.FillResponse",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint FillResponse::FLAG_DISABLE_ACTIVITY_ONLY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.autofill.FillResponse",
			"FLAG_DISABLE_ACTIVITY_ONLY"
		);
	}
	jint FillResponse::FLAG_TRACK_CONTEXT_COMMITED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.service.autofill.FillResponse",
			"FLAG_TRACK_CONTEXT_COMMITED"
		);
	}
	
	// Constructors
	void FillResponse::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.service.autofill.FillResponse",
			"(V)V");
	}
	
	// Methods
	jint FillResponse::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jstring FillResponse::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void FillResponse::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
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
	class FillResponse : public __jni_impl::android::service::autofill::FillResponse
	{
	public:
		FillResponse(QAndroidJniObject obj) { __thiz = obj; }
		FillResponse()
		{
			__constructor();
		}
	};
} // namespace android::service::autofill

