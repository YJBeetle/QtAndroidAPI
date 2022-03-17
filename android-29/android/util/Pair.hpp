#pragma once

#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Pair.def.hpp"

namespace android::util
{
	// Fields
	inline JObject Pair::first()
	{
		return getObjectField(
			"first",
			"Ljava/lang/Object;"
		);
	}
	inline JObject Pair::second()
	{
		return getObjectField(
			"second",
			"Ljava/lang/Object;"
		);
	}
	
	// Constructors
	inline Pair::Pair(JObject arg0, JObject arg1)
		: JObject(
			"android.util.Pair",
			"(Ljava/lang/Object;Ljava/lang/Object;)V",
			arg0.object<jobject>(),
			arg1.object<jobject>()
		) {}
	
	// Methods
	inline android::util::Pair Pair::create(JObject arg0, JObject arg1)
	{
		return callStaticObjectMethod(
			"android.util.Pair",
			"create",
			"(Ljava/lang/Object;Ljava/lang/Object;)Landroid/util/Pair;",
			arg0.object<jobject>(),
			arg1.object<jobject>()
		);
	}
	inline jboolean Pair::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint Pair::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString Pair::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::util

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::util;
#endif
