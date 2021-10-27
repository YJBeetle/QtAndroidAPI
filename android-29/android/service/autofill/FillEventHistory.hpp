#pragma once

#ifndef ANDROID_SERVICE_AUTOFILL_FILLEVENTHISTORY
#define ANDROID_SERVICE_AUTOFILL_FILLEVENTHISTORY

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::service::autofill
{
	class FillEventHistory : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		jint describeContents();
		QAndroidJniObject getClientState();
		QAndroidJniObject getEvents();
		jstring toString();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::service::autofill

#include "../../os/Bundle.hpp"
#include "../../os/Parcel.hpp"

namespace __jni_impl::android::service::autofill
{
	// Fields
	QAndroidJniObject FillEventHistory::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.service.autofill.FillEventHistory",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void FillEventHistory::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.service.autofill.FillEventHistory",
			"(V)V");
	}
	
	// Methods
	jint FillEventHistory::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	QAndroidJniObject FillEventHistory::getClientState()
	{
		return __thiz.callObjectMethod(
			"getClientState",
			"()Landroid/os/Bundle;"
		);
	}
	QAndroidJniObject FillEventHistory::getEvents()
	{
		return __thiz.callObjectMethod(
			"getEvents",
			"()Ljava/util/List;"
		);
	}
	jstring FillEventHistory::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void FillEventHistory::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
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
	class FillEventHistory : public __jni_impl::android::service::autofill::FillEventHistory
	{
	public:
		FillEventHistory(QAndroidJniObject obj) { __thiz = obj; }
		FillEventHistory()
		{
			__constructor();
		}
	};
} // namespace android::service::autofill

#endif // ANDROID_SERVICE_AUTOFILL_FILLEVENTHISTORY

