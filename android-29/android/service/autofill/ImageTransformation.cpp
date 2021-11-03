#include "../../os/Parcel.hpp"
#include "./ImageTransformation_Builder.hpp"
#include "../../../JString.hpp"
#include "./ImageTransformation.hpp"

namespace android::service::autofill
{
	// Fields
	JObject ImageTransformation::CREATOR()
	{
		return getStaticObjectField(
			"android.service.autofill.ImageTransformation",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	ImageTransformation::ImageTransformation(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint ImageTransformation::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	JString ImageTransformation::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void ImageTransformation::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::service::autofill

