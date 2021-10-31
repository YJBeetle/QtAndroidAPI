#include "../os/Parcel.hpp"
#include "./SurfaceControl.hpp"

namespace android::view
{
	// Fields
	__JniBaseClass SurfaceControl::CREATOR()
	{
		return getStaticObjectField(
			"android.view.SurfaceControl",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	SurfaceControl::SurfaceControl(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint SurfaceControl::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean SurfaceControl::isValid()
	{
		return callMethod<jboolean>(
			"isValid",
			"()Z"
		);
	}
	void SurfaceControl::readFromParcel(android::os::Parcel arg0)
	{
		callMethod<void>(
			"readFromParcel",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		);
	}
	void SurfaceControl::release()
	{
		callMethod<void>(
			"release",
			"()V"
		);
	}
	jstring SurfaceControl::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void SurfaceControl::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view

