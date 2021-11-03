#include "../../os/Parcel.hpp"
#include "./Dataset_Builder.hpp"
#include "../../../JString.hpp"
#include "./Dataset.hpp"

namespace android::service::autofill
{
	// Fields
	JObject Dataset::CREATOR()
	{
		return getStaticObjectField(
			"android.service.autofill.Dataset",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	Dataset::Dataset(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint Dataset::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	JString Dataset::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void Dataset::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::service::autofill

