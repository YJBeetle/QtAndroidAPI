#include "../../os/Parcel.hpp"
#include "../../../JString.hpp"
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
	
	// QAndroidJniObject forward
	DisplayHash::DisplayHash(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint DisplayHash::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	JString DisplayHash::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void DisplayHash::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::displayhash

