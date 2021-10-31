#include "../graphics/Point.hpp"
#include "../os/Parcel.hpp"
#include "./RoundedCorner.hpp"

namespace android::view
{
	// Fields
	__JniBaseClass RoundedCorner::CREATOR()
	{
		return getStaticObjectField(
			"android.view.RoundedCorner",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint RoundedCorner::POSITION_BOTTOM_LEFT()
	{
		return getStaticField<jint>(
			"android.view.RoundedCorner",
			"POSITION_BOTTOM_LEFT"
		);
	}
	jint RoundedCorner::POSITION_BOTTOM_RIGHT()
	{
		return getStaticField<jint>(
			"android.view.RoundedCorner",
			"POSITION_BOTTOM_RIGHT"
		);
	}
	jint RoundedCorner::POSITION_TOP_LEFT()
	{
		return getStaticField<jint>(
			"android.view.RoundedCorner",
			"POSITION_TOP_LEFT"
		);
	}
	jint RoundedCorner::POSITION_TOP_RIGHT()
	{
		return getStaticField<jint>(
			"android.view.RoundedCorner",
			"POSITION_TOP_RIGHT"
		);
	}
	
	// QJniObject forward
	RoundedCorner::RoundedCorner(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	RoundedCorner::RoundedCorner(jint arg0, jint arg1, jint arg2, jint arg3)
		: __JniBaseClass(
			"android.view.RoundedCorner",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		) {}
	
	// Methods
	jint RoundedCorner::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean RoundedCorner::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	android::graphics::Point RoundedCorner::getCenter()
	{
		return callObjectMethod(
			"getCenter",
			"()Landroid/graphics/Point;"
		);
	}
	jint RoundedCorner::getPosition()
	{
		return callMethod<jint>(
			"getPosition",
			"()I"
		);
	}
	jint RoundedCorner::getRadius()
	{
		return callMethod<jint>(
			"getRadius",
			"()I"
		);
	}
	jint RoundedCorner::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring RoundedCorner::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void RoundedCorner::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view

