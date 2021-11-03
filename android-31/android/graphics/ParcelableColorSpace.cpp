#include "./ColorSpace.hpp"
#include "../os/Parcel.hpp"
#include "../../JObject.hpp"
#include "./ParcelableColorSpace.hpp"

namespace android::graphics
{
	// Fields
	JObject ParcelableColorSpace::CREATOR()
	{
		return getStaticObjectField(
			"android.graphics.ParcelableColorSpace",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	ParcelableColorSpace::ParcelableColorSpace(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	ParcelableColorSpace::ParcelableColorSpace(android::graphics::ColorSpace arg0)
		: JObject(
			"android.graphics.ParcelableColorSpace",
			"(Landroid/graphics/ColorSpace;)V",
			arg0.object()
		) {}
	
	// Methods
	jboolean ParcelableColorSpace::isParcelable(android::graphics::ColorSpace arg0)
	{
		return callStaticMethod<jboolean>(
			"android.graphics.ParcelableColorSpace",
			"isParcelable",
			"(Landroid/graphics/ColorSpace;)Z",
			arg0.object()
		);
	}
	jint ParcelableColorSpace::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean ParcelableColorSpace::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	android::graphics::ColorSpace ParcelableColorSpace::getColorSpace() const
	{
		return callObjectMethod(
			"getColorSpace",
			"()Landroid/graphics/ColorSpace;"
		);
	}
	jint ParcelableColorSpace::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void ParcelableColorSpace::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::graphics

