#pragma once

#ifndef ANDROID_SERVICE_AUTOFILL_IMAGETRANSFORMATION
#define ANDROID_SERVICE_AUTOFILL_IMAGETRANSFORMATION

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::service::autofill
{
	class ImageTransformation_Builder;
}
namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::service::autofill
{
	class ImageTransformation : public __JniBaseClass
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

#include "ImageTransformation_Builder.hpp"
#include "../../os/Parcel.hpp"

namespace __jni_impl::android::service::autofill
{
	// Fields
	QAndroidJniObject ImageTransformation::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.service.autofill.ImageTransformation",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void ImageTransformation::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.service.autofill.ImageTransformation",
			"(V)V");
	}
	
	// Methods
	jstring ImageTransformation::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint ImageTransformation::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void ImageTransformation::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
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
	class ImageTransformation : public __jni_impl::android::service::autofill::ImageTransformation
	{
	public:
		ImageTransformation(QAndroidJniObject obj) { __thiz = obj; }
		ImageTransformation()
		{
			__constructor();
		}
	};
} // namespace android::service::autofill

#endif // ANDROID_SERVICE_AUTOFILL_IMAGETRANSFORMATION

