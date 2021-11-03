#include "../../os/Parcel.hpp"
#include "./CustomDescription_Builder.hpp"
#include "./CustomDescription.hpp"

namespace android::service::autofill
{
	// Fields
	JObject CustomDescription::CREATOR()
	{
		return getStaticObjectField(
			"android.service.autofill.CustomDescription",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	CustomDescription::CustomDescription(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint CustomDescription::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jstring CustomDescription::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void CustomDescription::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::service::autofill

