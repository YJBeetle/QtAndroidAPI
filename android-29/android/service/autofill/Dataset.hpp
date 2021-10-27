#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::service::autofill
{
	class Dataset_Builder;
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
		jint describeContents();
		jstring toString();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::service::autofill

#include "../../os/Parcel.hpp"
#include "./Dataset_Builder.hpp"

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
	jint Dataset::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jstring Dataset::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
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

