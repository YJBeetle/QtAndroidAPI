#pragma once

#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./StructTimespec.def.hpp"

namespace android::system
{
	// Fields
	inline jlong StructTimespec::tv_nsec()
	{
		return getField<jlong>(
			"tv_nsec"
		);
	}
	inline jlong StructTimespec::tv_sec()
	{
		return getField<jlong>(
			"tv_sec"
		);
	}
	
	// Constructors
	inline StructTimespec::StructTimespec(jlong arg0, jlong arg1)
		: JObject(
			"android.system.StructTimespec",
			"(JJ)V",
			arg0,
			arg1
		) {}
	
	// Methods
	inline jint StructTimespec::compareTo(android::system::StructTimespec arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Landroid/system/StructTimespec;)I",
			arg0.object()
		);
	}
	inline jint StructTimespec::compareTo(JObject arg0) const
	{
		return callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0.object<jobject>()
		);
	}
	inline jboolean StructTimespec::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint StructTimespec::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString StructTimespec::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::system

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::system;
#endif
