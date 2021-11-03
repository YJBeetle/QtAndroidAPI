#include "../graphics/Point.hpp"
#include "../os/Parcel.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./RoundedCorner.hpp"

namespace android::view
{
	// Fields
	JObject RoundedCorner::CREATOR()
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
	RoundedCorner::RoundedCorner(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	RoundedCorner::RoundedCorner(jint arg0, jint arg1, jint arg2, jint arg3)
		: JObject(
			"android.view.RoundedCorner",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		) {}
	
	// Methods
	jint RoundedCorner::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean RoundedCorner::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	android::graphics::Point RoundedCorner::getCenter() const
	{
		return callObjectMethod(
			"getCenter",
			"()Landroid/graphics/Point;"
		);
	}
	jint RoundedCorner::getPosition() const
	{
		return callMethod<jint>(
			"getPosition",
			"()I"
		);
	}
	jint RoundedCorner::getRadius() const
	{
		return callMethod<jint>(
			"getRadius",
			"()I"
		);
	}
	jint RoundedCorner::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString RoundedCorner::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void RoundedCorner::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view

