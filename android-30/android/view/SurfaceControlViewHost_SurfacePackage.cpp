#include "../os/Parcel.hpp"
#include "./SurfaceControlViewHost_SurfacePackage.hpp"

namespace android::view
{
	// Fields
	__JniBaseClass SurfaceControlViewHost_SurfacePackage::CREATOR()
	{
		return getStaticObjectField(
			"android.view.SurfaceControlViewHost$SurfacePackage",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	SurfaceControlViewHost_SurfacePackage::SurfaceControlViewHost_SurfacePackage(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint SurfaceControlViewHost_SurfacePackage::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void SurfaceControlViewHost_SurfacePackage::release()
	{
		callMethod<void>(
			"release",
			"()V"
		);
	}
	void SurfaceControlViewHost_SurfacePackage::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view

