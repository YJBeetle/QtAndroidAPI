#pragma once

#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Size.def.hpp"

namespace android::util
{
	// Fields
	
	// Constructors
	inline Size::Size(jint arg0, jint arg1)
		: JObject(
			"android.util.Size",
			"(II)V",
			arg0,
			arg1
		) {}
	
	// Methods
	inline android::util::Size Size::parseSize(JString arg0)
	{
		return callStaticObjectMethod(
			"android.util.Size",
			"parseSize",
			"(Ljava/lang/String;)Landroid/util/Size;",
			arg0.object<jstring>()
		);
	}
	inline jboolean Size::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint Size::getHeight() const
	{
		return callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	inline jint Size::getWidth() const
	{
		return callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
	inline jint Size::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString Size::toString() const
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
