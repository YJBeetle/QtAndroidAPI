#pragma once

#ifndef ANDROID_SERVICE_AUTOFILL_DATASET
#define ANDROID_SERVICE_AUTOFILL_DATASET

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::service::autofill
{
	class Dataset_Builder;
}
namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::service::autofill
{
	class Dataset : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		jstring toString();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::service::autofill

#include "Dataset_Builder.hpp"
#include "../../os/Parcel.hpp"

namespace __jni_impl::android::service::autofill
{
	// Fields
	QAndroidJniObject Dataset::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.service.autofill.Dataset",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void Dataset::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.service.autofill.Dataset",
			"(V)V");
	}
	
	// Methods
	jstring Dataset::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint Dataset::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void Dataset::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
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
	class Dataset : public __jni_impl::android::service::autofill::Dataset
	{
	public:
		Dataset(QAndroidJniObject obj) { __thiz = obj; }
		Dataset()
		{
			__constructor();
		}
	};
} // namespace android::service::autofill

#endif // ANDROID_SERVICE_AUTOFILL_DATASET

