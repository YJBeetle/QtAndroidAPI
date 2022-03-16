#include "../../os/Parcel.hpp"
#include "./CharSequenceTransformation_Builder.hpp"
#include "../../../JString.hpp"
#include "./CharSequenceTransformation.hpp"

namespace android::service::autofill
{
	// Fields
	JObject CharSequenceTransformation::CREATOR()
	{
		return getStaticObjectField(
			"android.service.autofill.CharSequenceTransformation",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	jint CharSequenceTransformation::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	JString CharSequenceTransformation::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void CharSequenceTransformation::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::service::autofill

