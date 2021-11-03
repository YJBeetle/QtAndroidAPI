#include "../os/Parcel.hpp"
#include "../../JString.hpp"
#include "./SurfaceControl.hpp"

namespace android::view
{
	// Fields
	JObject SurfaceControl::CREATOR()
	{
		return getStaticObjectField(
			"android.view.SurfaceControl",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	SurfaceControl::SurfaceControl(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint SurfaceControl::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean SurfaceControl::isValid() const
	{
		return callMethod<jboolean>(
			"isValid",
			"()Z"
		);
	}
	void SurfaceControl::readFromParcel(android::os::Parcel arg0) const
	{
		callMethod<void>(
			"readFromParcel",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		);
	}
	void SurfaceControl::release() const
	{
		callMethod<void>(
			"release",
			"()V"
		);
	}
	JString SurfaceControl::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void SurfaceControl::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view

