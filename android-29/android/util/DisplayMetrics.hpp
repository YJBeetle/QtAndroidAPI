#pragma once

#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./DisplayMetrics.def.hpp"

namespace android::util
{
	// Fields
	inline jint DisplayMetrics::DENSITY_140()
	{
		return getStaticField<jint>(
			"android.util.DisplayMetrics",
			"DENSITY_140"
		);
	}
	inline jint DisplayMetrics::DENSITY_180()
	{
		return getStaticField<jint>(
			"android.util.DisplayMetrics",
			"DENSITY_180"
		);
	}
	inline jint DisplayMetrics::DENSITY_200()
	{
		return getStaticField<jint>(
			"android.util.DisplayMetrics",
			"DENSITY_200"
		);
	}
	inline jint DisplayMetrics::DENSITY_220()
	{
		return getStaticField<jint>(
			"android.util.DisplayMetrics",
			"DENSITY_220"
		);
	}
	inline jint DisplayMetrics::DENSITY_260()
	{
		return getStaticField<jint>(
			"android.util.DisplayMetrics",
			"DENSITY_260"
		);
	}
	inline jint DisplayMetrics::DENSITY_280()
	{
		return getStaticField<jint>(
			"android.util.DisplayMetrics",
			"DENSITY_280"
		);
	}
	inline jint DisplayMetrics::DENSITY_300()
	{
		return getStaticField<jint>(
			"android.util.DisplayMetrics",
			"DENSITY_300"
		);
	}
	inline jint DisplayMetrics::DENSITY_340()
	{
		return getStaticField<jint>(
			"android.util.DisplayMetrics",
			"DENSITY_340"
		);
	}
	inline jint DisplayMetrics::DENSITY_360()
	{
		return getStaticField<jint>(
			"android.util.DisplayMetrics",
			"DENSITY_360"
		);
	}
	inline jint DisplayMetrics::DENSITY_400()
	{
		return getStaticField<jint>(
			"android.util.DisplayMetrics",
			"DENSITY_400"
		);
	}
	inline jint DisplayMetrics::DENSITY_420()
	{
		return getStaticField<jint>(
			"android.util.DisplayMetrics",
			"DENSITY_420"
		);
	}
	inline jint DisplayMetrics::DENSITY_440()
	{
		return getStaticField<jint>(
			"android.util.DisplayMetrics",
			"DENSITY_440"
		);
	}
	inline jint DisplayMetrics::DENSITY_450()
	{
		return getStaticField<jint>(
			"android.util.DisplayMetrics",
			"DENSITY_450"
		);
	}
	inline jint DisplayMetrics::DENSITY_560()
	{
		return getStaticField<jint>(
			"android.util.DisplayMetrics",
			"DENSITY_560"
		);
	}
	inline jint DisplayMetrics::DENSITY_600()
	{
		return getStaticField<jint>(
			"android.util.DisplayMetrics",
			"DENSITY_600"
		);
	}
	inline jint DisplayMetrics::DENSITY_DEFAULT()
	{
		return getStaticField<jint>(
			"android.util.DisplayMetrics",
			"DENSITY_DEFAULT"
		);
	}
	inline jint DisplayMetrics::DENSITY_DEVICE_STABLE()
	{
		return getStaticField<jint>(
			"android.util.DisplayMetrics",
			"DENSITY_DEVICE_STABLE"
		);
	}
	inline jint DisplayMetrics::DENSITY_HIGH()
	{
		return getStaticField<jint>(
			"android.util.DisplayMetrics",
			"DENSITY_HIGH"
		);
	}
	inline jint DisplayMetrics::DENSITY_LOW()
	{
		return getStaticField<jint>(
			"android.util.DisplayMetrics",
			"DENSITY_LOW"
		);
	}
	inline jint DisplayMetrics::DENSITY_MEDIUM()
	{
		return getStaticField<jint>(
			"android.util.DisplayMetrics",
			"DENSITY_MEDIUM"
		);
	}
	inline jint DisplayMetrics::DENSITY_TV()
	{
		return getStaticField<jint>(
			"android.util.DisplayMetrics",
			"DENSITY_TV"
		);
	}
	inline jint DisplayMetrics::DENSITY_XHIGH()
	{
		return getStaticField<jint>(
			"android.util.DisplayMetrics",
			"DENSITY_XHIGH"
		);
	}
	inline jint DisplayMetrics::DENSITY_XXHIGH()
	{
		return getStaticField<jint>(
			"android.util.DisplayMetrics",
			"DENSITY_XXHIGH"
		);
	}
	inline jint DisplayMetrics::DENSITY_XXXHIGH()
	{
		return getStaticField<jint>(
			"android.util.DisplayMetrics",
			"DENSITY_XXXHIGH"
		);
	}
	inline jfloat DisplayMetrics::density()
	{
		return getField<jfloat>(
			"density"
		);
	}
	inline jint DisplayMetrics::densityDpi()
	{
		return getField<jint>(
			"densityDpi"
		);
	}
	inline jint DisplayMetrics::heightPixels()
	{
		return getField<jint>(
			"heightPixels"
		);
	}
	inline jfloat DisplayMetrics::scaledDensity()
	{
		return getField<jfloat>(
			"scaledDensity"
		);
	}
	inline jint DisplayMetrics::widthPixels()
	{
		return getField<jint>(
			"widthPixels"
		);
	}
	inline jfloat DisplayMetrics::xdpi()
	{
		return getField<jfloat>(
			"xdpi"
		);
	}
	inline jfloat DisplayMetrics::ydpi()
	{
		return getField<jfloat>(
			"ydpi"
		);
	}
	
	// Constructors
	inline DisplayMetrics::DisplayMetrics()
		: JObject(
			"android.util.DisplayMetrics",
			"()V"
		) {}
	
	// Methods
	inline jboolean DisplayMetrics::equals(android::util::DisplayMetrics arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Landroid/util/DisplayMetrics;)Z",
			arg0.object()
		);
	}
	inline jboolean DisplayMetrics::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint DisplayMetrics::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline void DisplayMetrics::setTo(android::util::DisplayMetrics arg0) const
	{
		callMethod<void>(
			"setTo",
			"(Landroid/util/DisplayMetrics;)V",
			arg0.object()
		);
	}
	inline void DisplayMetrics::setToDefaults() const
	{
		callMethod<void>(
			"setToDefaults",
			"()V"
		);
	}
	inline JString DisplayMetrics::toString() const
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
