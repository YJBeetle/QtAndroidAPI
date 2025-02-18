#pragma once

#include "../graphics/Point.def.hpp"
#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./RoundedCorner.def.hpp"

namespace android::view
{
	// Fields
	inline JObject RoundedCorner::CREATOR()
	{
		return getStaticObjectField(
			"android.view.RoundedCorner",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint RoundedCorner::POSITION_BOTTOM_LEFT()
	{
		return getStaticField<jint>(
			"android.view.RoundedCorner",
			"POSITION_BOTTOM_LEFT"
		);
	}
	inline jint RoundedCorner::POSITION_BOTTOM_RIGHT()
	{
		return getStaticField<jint>(
			"android.view.RoundedCorner",
			"POSITION_BOTTOM_RIGHT"
		);
	}
	inline jint RoundedCorner::POSITION_TOP_LEFT()
	{
		return getStaticField<jint>(
			"android.view.RoundedCorner",
			"POSITION_TOP_LEFT"
		);
	}
	inline jint RoundedCorner::POSITION_TOP_RIGHT()
	{
		return getStaticField<jint>(
			"android.view.RoundedCorner",
			"POSITION_TOP_RIGHT"
		);
	}
	
	// Constructors
	inline RoundedCorner::RoundedCorner(jint arg0, jint arg1, jint arg2, jint arg3)
		: JObject(
			"android.view.RoundedCorner",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		) {}
	
	// Methods
	inline jint RoundedCorner::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean RoundedCorner::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::graphics::Point RoundedCorner::getCenter() const
	{
		return callObjectMethod(
			"getCenter",
			"()Landroid/graphics/Point;"
		);
	}
	inline jint RoundedCorner::getPosition() const
	{
		return callMethod<jint>(
			"getPosition",
			"()I"
		);
	}
	inline jint RoundedCorner::getRadius() const
	{
		return callMethod<jint>(
			"getRadius",
			"()I"
		);
	}
	inline jint RoundedCorner::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString RoundedCorner::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void RoundedCorner::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view;
#endif
