#include "../os/Parcel.hpp"
#include "./DragAndDropPermissions.hpp"

namespace android::view
{
	// Fields
	JObject DragAndDropPermissions::CREATOR()
	{
		return getStaticObjectField(
			"android.view.DragAndDropPermissions",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	jint DragAndDropPermissions::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void DragAndDropPermissions::release() const
	{
		callMethod<void>(
			"release",
			"()V"
		);
	}
	void DragAndDropPermissions::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view

