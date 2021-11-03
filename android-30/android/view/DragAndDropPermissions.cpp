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
	
	// QJniObject forward
	DragAndDropPermissions::DragAndDropPermissions(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint DragAndDropPermissions::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void DragAndDropPermissions::release()
	{
		callMethod<void>(
			"release",
			"()V"
		);
	}
	void DragAndDropPermissions::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view

