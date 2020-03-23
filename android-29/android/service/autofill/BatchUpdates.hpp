#pragma once

#ifndef ANDROID_SERVICE_AUTOFILL_BATCHUPDATES
#define ANDROID_SERVICE_AUTOFILL_BATCHUPDATES

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::service::autofill
{
	class BatchUpdates_Builder;
}
namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::service::autofill
{
	class BatchUpdates : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject toString();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::service::autofill

#include "BatchUpdates_Builder.hpp"
#include "../../os/Parcel.hpp"

namespace __jni_impl::android::service::autofill
{
	// Fields
	QAndroidJniObject BatchUpdates::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.service.autofill.BatchUpdates",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	
	// Constructors
	void BatchUpdates::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.service.autofill.BatchUpdates",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject BatchUpdates::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint BatchUpdates::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void BatchUpdates::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
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
	class BatchUpdates : public __jni_impl::android::service::autofill::BatchUpdates
	{
	public:
		BatchUpdates(QAndroidJniObject obj) { __thiz = obj; }
		BatchUpdates()
		{
			__constructor();
		}
	};
} // namespace android::service::autofill

#endif // ANDROID_SERVICE_AUTOFILL_BATCHUPDATES

