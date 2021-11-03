#include "../../os/Parcel.hpp"
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
	
	// QJniObject forward
	CharSequenceTransformation::CharSequenceTransformation(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint CharSequenceTransformation::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jstring CharSequenceTransformation::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void CharSequenceTransformation::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::service::autofill

