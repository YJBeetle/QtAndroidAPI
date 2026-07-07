#pragma once

#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Paint_FontMetrics.def.hpp"

namespace android::graphics
{
	// Fields
	inline jfloat Paint_FontMetrics::ascent()
	{
		return getField<jfloat>(
			"ascent"
		);
	}
	inline jfloat Paint_FontMetrics::bottom()
	{
		return getField<jfloat>(
			"bottom"
		);
	}
	inline jfloat Paint_FontMetrics::descent()
	{
		return getField<jfloat>(
			"descent"
		);
	}
	inline jfloat Paint_FontMetrics::leading()
	{
		return getField<jfloat>(
			"leading"
		);
	}
	inline jfloat Paint_FontMetrics::top()
	{
		return getField<jfloat>(
			"top"
		);
	}
	
	// Constructors
	inline Paint_FontMetrics::Paint_FontMetrics()
		: JObject(
			"android.graphics.Paint$FontMetrics",
			"()V"
		) {}
	
	// Methods
	inline jboolean Paint_FontMetrics::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint Paint_FontMetrics::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString Paint_FontMetrics::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::graphics

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::graphics;
#endif
