#pragma once

#include "./Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./WorkSource.def.hpp"

namespace android::os
{
	// Fields
	inline JObject WorkSource::CREATOR()
	{
		return getStaticObjectField(
			"android.os.WorkSource",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline WorkSource::WorkSource()
		: JObject(
			"android.os.WorkSource",
			"()V"
		) {}
	inline WorkSource::WorkSource(android::os::WorkSource &arg0)
		: JObject(
			"android.os.WorkSource",
			"(Landroid/os/WorkSource;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jboolean WorkSource::add(android::os::WorkSource arg0) const
	{
		return callMethod<jboolean>(
			"add",
			"(Landroid/os/WorkSource;)Z",
			arg0.object()
		);
	}
	inline void WorkSource::clear() const
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	inline jint WorkSource::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean WorkSource::diff(android::os::WorkSource arg0) const
	{
		return callMethod<jboolean>(
			"diff",
			"(Landroid/os/WorkSource;)Z",
			arg0.object()
		);
	}
	inline jboolean WorkSource::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint WorkSource::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean WorkSource::remove(android::os::WorkSource arg0) const
	{
		return callMethod<jboolean>(
			"remove",
			"(Landroid/os/WorkSource;)Z",
			arg0.object()
		);
	}
	inline void WorkSource::set(android::os::WorkSource arg0) const
	{
		callMethod<void>(
			"set",
			"(Landroid/os/WorkSource;)V",
			arg0.object()
		);
	}
	inline JString WorkSource::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void WorkSource::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::os

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::os;
#endif
