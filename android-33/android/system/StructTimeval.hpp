#pragma once

#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./StructTimeval.def.hpp"

namespace android::system
{
	// Fields
	inline jlong StructTimeval::tv_sec()
	{
		return getField<jlong>(
			"tv_sec"
		);
	}
	inline jlong StructTimeval::tv_usec()
	{
		return getField<jlong>(
			"tv_usec"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::system::StructTimeval StructTimeval::fromMillis(jlong arg0)
	{
		return callStaticObjectMethod(
			"android.system.StructTimeval",
			"fromMillis",
			"(J)Landroid/system/StructTimeval;",
			arg0
		);
	}
	inline jboolean StructTimeval::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint StructTimeval::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jlong StructTimeval::toMillis() const
	{
		return callMethod<jlong>(
			"toMillis",
			"()J"
		);
	}
	inline JString StructTimeval::toString() const
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
