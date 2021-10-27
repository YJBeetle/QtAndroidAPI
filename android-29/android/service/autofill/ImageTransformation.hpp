#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::service::autofill
{
	class ImageTransformation_Builder;
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
		jint describeContents();
		jstring toString();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::service::autofill

#include "../../os/Parcel.hpp"
#include "ImageTransformation_Builder.hpp"

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
	jint ImageTransformation::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jstring ImageTransformation::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
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

