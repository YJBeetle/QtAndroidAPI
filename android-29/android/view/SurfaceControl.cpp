#include "../os/Parcel.hpp"
#include "./SurfaceControl.hpp"

namespace android::view
{
	// Fields
	QAndroidJniObject SurfaceControl::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.SurfaceControl",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	SurfaceControl::SurfaceControl(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jint SurfaceControl::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean SurfaceControl::isValid()
	{
		return __thiz.callMethod<jboolean>(
			"isValid",
			"()Z"
		);
	}
	void SurfaceControl::readFromParcel(android::os::Parcel arg0)
	{
		__thiz.callMethod<void>(
			"readFromParcel",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object()
		);
	}
	void SurfaceControl::release()
	{
		__thiz.callMethod<void>(
			"release",
			"()V"
		);
	}
	jstring SurfaceControl::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void SurfaceControl::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::view

