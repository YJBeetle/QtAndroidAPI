#pragma once

#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Paint_FontMetricsInt.def.hpp"

namespace android::graphics
{
	// Fields
	inline jint Paint_FontMetricsInt::ascent()
	{
		return getField<jint>(
			"ascent"
		);
	}
	inline jint Paint_FontMetricsInt::bottom()
	{
		return getField<jint>(
			"bottom"
		);
	}
	inline jint Paint_FontMetricsInt::descent()
	{
		return getField<jint>(
			"descent"
		);
	}
	inline jint Paint_FontMetricsInt::leading()
	{
		return getField<jint>(
			"leading"
		);
	}
	inline jint Paint_FontMetricsInt::top()
	{
		return getField<jint>(
			"top"
		);
	}
	
	// Constructors
	inline Paint_FontMetricsInt::Paint_FontMetricsInt()
		: JObject(
			"android.graphics.Paint$FontMetricsInt",
			"()V"
		) {}
	
	// Methods
	inline jboolean Paint_FontMetricsInt::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint Paint_FontMetricsInt::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString Paint_FontMetricsInt::toString() const
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
