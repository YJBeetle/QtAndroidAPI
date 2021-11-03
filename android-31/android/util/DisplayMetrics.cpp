#include "./DisplayMetrics.hpp"

namespace android::util
{
	// Fields
	jint DisplayMetrics::DENSITY_140()
	{
		return getStaticField<jint>(
			"android.util.DisplayMetrics",
			"DENSITY_140"
		);
	}
	jint DisplayMetrics::DENSITY_180()
	{
		return getStaticField<jint>(
			"android.util.DisplayMetrics",
			"DENSITY_180"
		);
	}
	jint DisplayMetrics::DENSITY_200()
	{
		return getStaticField<jint>(
			"android.util.DisplayMetrics",
			"DENSITY_200"
		);
	}
	jint DisplayMetrics::DENSITY_220()
	{
		return getStaticField<jint>(
			"android.util.DisplayMetrics",
			"DENSITY_220"
		);
	}
	jint DisplayMetrics::DENSITY_260()
	{
		return getStaticField<jint>(
			"android.util.DisplayMetrics",
			"DENSITY_260"
		);
	}
	jint DisplayMetrics::DENSITY_280()
	{
		return getStaticField<jint>(
			"android.util.DisplayMetrics",
			"DENSITY_280"
		);
	}
	jint DisplayMetrics::DENSITY_300()
	{
		return getStaticField<jint>(
			"android.util.DisplayMetrics",
			"DENSITY_300"
		);
	}
	jint DisplayMetrics::DENSITY_340()
	{
		return getStaticField<jint>(
			"android.util.DisplayMetrics",
			"DENSITY_340"
		);
	}
	jint DisplayMetrics::DENSITY_360()
	{
		return getStaticField<jint>(
			"android.util.DisplayMetrics",
			"DENSITY_360"
		);
	}
	jint DisplayMetrics::DENSITY_400()
	{
		return getStaticField<jint>(
			"android.util.DisplayMetrics",
			"DENSITY_400"
		);
	}
	jint DisplayMetrics::DENSITY_420()
	{
		return getStaticField<jint>(
			"android.util.DisplayMetrics",
			"DENSITY_420"
		);
	}
	jint DisplayMetrics::DENSITY_440()
	{
		return getStaticField<jint>(
			"android.util.DisplayMetrics",
			"DENSITY_440"
		);
	}
	jint DisplayMetrics::DENSITY_450()
	{
		return getStaticField<jint>(
			"android.util.DisplayMetrics",
			"DENSITY_450"
		);
	}
	jint DisplayMetrics::DENSITY_560()
	{
		return getStaticField<jint>(
			"android.util.DisplayMetrics",
			"DENSITY_560"
		);
	}
	jint DisplayMetrics::DENSITY_600()
	{
		return getStaticField<jint>(
			"android.util.DisplayMetrics",
			"DENSITY_600"
		);
	}
	jint DisplayMetrics::DENSITY_DEFAULT()
	{
		return getStaticField<jint>(
			"android.util.DisplayMetrics",
			"DENSITY_DEFAULT"
		);
	}
	jint DisplayMetrics::DENSITY_DEVICE_STABLE()
	{
		return getStaticField<jint>(
			"android.util.DisplayMetrics",
			"DENSITY_DEVICE_STABLE"
		);
	}
	jint DisplayMetrics::DENSITY_HIGH()
	{
		return getStaticField<jint>(
			"android.util.DisplayMetrics",
			"DENSITY_HIGH"
		);
	}
	jint DisplayMetrics::DENSITY_LOW()
	{
		return getStaticField<jint>(
			"android.util.DisplayMetrics",
			"DENSITY_LOW"
		);
	}
	jint DisplayMetrics::DENSITY_MEDIUM()
	{
		return getStaticField<jint>(
			"android.util.DisplayMetrics",
			"DENSITY_MEDIUM"
		);
	}
	jint DisplayMetrics::DENSITY_TV()
	{
		return getStaticField<jint>(
			"android.util.DisplayMetrics",
			"DENSITY_TV"
		);
	}
	jint DisplayMetrics::DENSITY_XHIGH()
	{
		return getStaticField<jint>(
			"android.util.DisplayMetrics",
			"DENSITY_XHIGH"
		);
	}
	jint DisplayMetrics::DENSITY_XXHIGH()
	{
		return getStaticField<jint>(
			"android.util.DisplayMetrics",
			"DENSITY_XXHIGH"
		);
	}
	jint DisplayMetrics::DENSITY_XXXHIGH()
	{
		return getStaticField<jint>(
			"android.util.DisplayMetrics",
			"DENSITY_XXXHIGH"
		);
	}
	jfloat DisplayMetrics::density()
	{
		return getField<jfloat>(
			"density"
		);
	}
	jint DisplayMetrics::densityDpi()
	{
		return getField<jint>(
			"densityDpi"
		);
	}
	jint DisplayMetrics::heightPixels()
	{
		return getField<jint>(
			"heightPixels"
		);
	}
	jfloat DisplayMetrics::scaledDensity()
	{
		return getField<jfloat>(
			"scaledDensity"
		);
	}
	jint DisplayMetrics::widthPixels()
	{
		return getField<jint>(
			"widthPixels"
		);
	}
	jfloat DisplayMetrics::xdpi()
	{
		return getField<jfloat>(
			"xdpi"
		);
	}
	jfloat DisplayMetrics::ydpi()
	{
		return getField<jfloat>(
			"ydpi"
		);
	}
	
	// QJniObject forward
	DisplayMetrics::DisplayMetrics(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	DisplayMetrics::DisplayMetrics()
		: JObject(
			"android.util.DisplayMetrics",
			"()V"
		) {}
	
	// Methods
	jboolean DisplayMetrics::equals(android::util::DisplayMetrics arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Landroid/util/DisplayMetrics;)Z",
			arg0.object()
		);
	}
	jboolean DisplayMetrics::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint DisplayMetrics::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void DisplayMetrics::setTo(android::util::DisplayMetrics arg0)
	{
		callMethod<void>(
			"setTo",
			"(Landroid/util/DisplayMetrics;)V",
			arg0.object()
		);
	}
	void DisplayMetrics::setToDefaults()
	{
		callMethod<void>(
			"setToDefaults",
			"()V"
		);
	}
	jstring DisplayMetrics::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::util

