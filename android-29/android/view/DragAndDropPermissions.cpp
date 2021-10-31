#include "../os/Parcel.hpp"
#include "./DragAndDropPermissions.hpp"

namespace android::view
{
	// Fields
	QAndroidJniObject DragAndDropPermissions::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.DragAndDropPermissions",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	DragAndDropPermissions::DragAndDropPermissions(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
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

