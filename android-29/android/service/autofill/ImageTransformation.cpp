#include "../../os/Parcel.hpp"
#include "./ImageTransformation_Builder.hpp"
#include "./ImageTransformation.hpp"

namespace android::service::autofill
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
	
	ImageTransformation::ImageTransformation(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
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
	void ImageTransformation::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::service::autofill

