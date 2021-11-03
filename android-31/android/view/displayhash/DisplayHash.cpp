#include "../../os/Parcel.hpp"
#include "./DisplayHash.hpp"

namespace android::view::displayhash
{
	// Fields
	JObject DisplayHash::CREATOR()
	{
		return getStaticObjectField(
			"android.view.displayhash.DisplayHash",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	DisplayHash::DisplayHash(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint DisplayHash::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jstring DisplayHash::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void DisplayHash::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::displayhash

