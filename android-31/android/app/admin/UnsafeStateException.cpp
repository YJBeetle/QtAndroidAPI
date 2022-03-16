#include "../../os/Parcel.hpp"
#include "../../../JString.hpp"
#include "./UnsafeStateException.hpp"

namespace android::app::admin
{
	// Fields
	JObject UnsafeStateException::CREATOR()
	{
		return getStaticObjectField(
			"android.app.admin.UnsafeStateException",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	jint UnsafeStateException::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	JString UnsafeStateException::getMessage() const
	{
		return callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		);
	}
	JObject UnsafeStateException::getReasons() const
	{
		return callObjectMethod(
			"getReasons",
			"()Ljava/util/List;"
		);
	}
	void UnsafeStateException::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app::admin

