#pragma once

#include "./Point.def.hpp"
#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./PointF.def.hpp"

namespace android::graphics
{
	// Fields
	inline JObject PointF::CREATOR()
	{
		return getStaticObjectField(
			"android.graphics.PointF",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jfloat PointF::x()
	{
		return getField<jfloat>(
			"x"
		);
	}
	inline jfloat PointF::y()
	{
		return getField<jfloat>(
			"y"
		);
	}
	
	// Constructors
	inline PointF::PointF()
		: JObject(
			"android.graphics.PointF",
			"()V"
		) {}
	inline PointF::PointF(android::graphics::Point arg0)
		: JObject(
			"android.graphics.PointF",
			"(Landroid/graphics/Point;)V",
			arg0.object()
		) {}
	inline PointF::PointF(jfloat arg0, jfloat arg1)
		: JObject(
			"android.graphics.PointF",
			"(FF)V",
			arg0,
			arg1
		) {}
	
	// Methods
	inline jfloat PointF::length(jfloat arg0, jfloat arg1)
	{
		return callStaticMethod<jfloat>(
			"android.graphics.PointF",
			"length",
			"(FF)F",
			arg0,
			arg1
		);
	}
	inline jint PointF::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean PointF::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jboolean PointF::equals(jfloat arg0, jfloat arg1) const
	{
		return callMethod<jboolean>(
			"equals",
			"(FF)Z",
			arg0,
			arg1
		);
	}
	inline jint PointF::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jfloat PointF::length() const
	{
		return callMethod<jfloat>(
			"length",
			"()F"
		);
	}
	inline void PointF::negate() const
	{
		callMethod<void>(
			"negate",
			"()V"
		);
	}
	inline void PointF::offset(jfloat arg0, jfloat arg1) const
	{
		callMethod<void>(
			"offset",
			"(FF)V",
			arg0,
			arg1
		);
	}
	inline void PointF::readFromParcel(android::os::Parcel arg0) const
	{
		callMethod<void>(
			"readFromParcel",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		);
	}
	inline void PointF::set(android::graphics::PointF arg0) const
	{
		callMethod<void>(
			"set",
			"(Landroid/graphics/PointF;)V",
			arg0.object()
		);
	}
	inline void PointF::set(jfloat arg0, jfloat arg1) const
	{
		callMethod<void>(
			"set",
			"(FF)V",
			arg0,
			arg1
		);
	}
	inline JString PointF::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void PointF::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

