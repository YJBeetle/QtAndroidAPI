#pragma once

#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Point.def.hpp"

namespace android::graphics
{
	// Fields
	inline JObject Point::CREATOR()
	{
		return getStaticObjectField(
			"android.graphics.Point",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint Point::x()
	{
		return getField<jint>(
			"x"
		);
	}
	inline jint Point::y()
	{
		return getField<jint>(
			"y"
		);
	}
	
	// Constructors
	inline Point::Point()
		: JObject(
			"android.graphics.Point",
			"()V"
		) {}
	inline Point::Point(android::graphics::Point &arg0)
		: JObject(
			"android.graphics.Point",
			"(Landroid/graphics/Point;)V",
			arg0.object()
		) {}
	inline Point::Point(jint arg0, jint arg1)
		: JObject(
			"android.graphics.Point",
			"(II)V",
			arg0,
			arg1
		) {}
	
	// Methods
	inline jint Point::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean Point::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jboolean Point::equals(jint arg0, jint arg1) const
	{
		return callMethod<jboolean>(
			"equals",
			"(II)Z",
			arg0,
			arg1
		);
	}
	inline jint Point::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline void Point::negate() const
	{
		callMethod<void>(
			"negate",
			"()V"
		);
	}
	inline void Point::offset(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"offset",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void Point::readFromParcel(android::os::Parcel arg0) const
	{
		callMethod<void>(
			"readFromParcel",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		);
	}
	inline void Point::set(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"set",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline JString Point::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void Point::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::graphics

// Base class headers

