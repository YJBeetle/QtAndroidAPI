#include "../math/BigDecimal.hpp"
#include "./UniversalTimeScale.hpp"

namespace android::icu::util
{
	// Fields
	jint UniversalTimeScale::DB2_TIME()
	{
		return getStaticField<jint>(
			"android.icu.util.UniversalTimeScale",
			"DB2_TIME"
		);
	}
	jint UniversalTimeScale::DOTNET_DATE_TIME()
	{
		return getStaticField<jint>(
			"android.icu.util.UniversalTimeScale",
			"DOTNET_DATE_TIME"
		);
	}
	jint UniversalTimeScale::EPOCH_OFFSET_PLUS_1_VALUE()
	{
		return getStaticField<jint>(
			"android.icu.util.UniversalTimeScale",
			"EPOCH_OFFSET_PLUS_1_VALUE"
		);
	}
	jint UniversalTimeScale::EPOCH_OFFSET_VALUE()
	{
		return getStaticField<jint>(
			"android.icu.util.UniversalTimeScale",
			"EPOCH_OFFSET_VALUE"
		);
	}
	jint UniversalTimeScale::EXCEL_TIME()
	{
		return getStaticField<jint>(
			"android.icu.util.UniversalTimeScale",
			"EXCEL_TIME"
		);
	}
	jint UniversalTimeScale::FROM_MAX_VALUE()
	{
		return getStaticField<jint>(
			"android.icu.util.UniversalTimeScale",
			"FROM_MAX_VALUE"
		);
	}
	jint UniversalTimeScale::FROM_MIN_VALUE()
	{
		return getStaticField<jint>(
			"android.icu.util.UniversalTimeScale",
			"FROM_MIN_VALUE"
		);
	}
	jint UniversalTimeScale::ICU4C_TIME()
	{
		return getStaticField<jint>(
			"android.icu.util.UniversalTimeScale",
			"ICU4C_TIME"
		);
	}
	jint UniversalTimeScale::JAVA_TIME()
	{
		return getStaticField<jint>(
			"android.icu.util.UniversalTimeScale",
			"JAVA_TIME"
		);
	}
	jint UniversalTimeScale::MAC_OLD_TIME()
	{
		return getStaticField<jint>(
			"android.icu.util.UniversalTimeScale",
			"MAC_OLD_TIME"
		);
	}
	jint UniversalTimeScale::MAC_TIME()
	{
		return getStaticField<jint>(
			"android.icu.util.UniversalTimeScale",
			"MAC_TIME"
		);
	}
	jint UniversalTimeScale::MAX_SCALE()
	{
		return getStaticField<jint>(
			"android.icu.util.UniversalTimeScale",
			"MAX_SCALE"
		);
	}
	jint UniversalTimeScale::TO_MAX_VALUE()
	{
		return getStaticField<jint>(
			"android.icu.util.UniversalTimeScale",
			"TO_MAX_VALUE"
		);
	}
	jint UniversalTimeScale::TO_MIN_VALUE()
	{
		return getStaticField<jint>(
			"android.icu.util.UniversalTimeScale",
			"TO_MIN_VALUE"
		);
	}
	jint UniversalTimeScale::UNITS_VALUE()
	{
		return getStaticField<jint>(
			"android.icu.util.UniversalTimeScale",
			"UNITS_VALUE"
		);
	}
	jint UniversalTimeScale::UNIX_MICROSECONDS_TIME()
	{
		return getStaticField<jint>(
			"android.icu.util.UniversalTimeScale",
			"UNIX_MICROSECONDS_TIME"
		);
	}
	jint UniversalTimeScale::UNIX_TIME()
	{
		return getStaticField<jint>(
			"android.icu.util.UniversalTimeScale",
			"UNIX_TIME"
		);
	}
	jint UniversalTimeScale::WINDOWS_FILE_TIME()
	{
		return getStaticField<jint>(
			"android.icu.util.UniversalTimeScale",
			"WINDOWS_FILE_TIME"
		);
	}
	
	// Constructors
	
	// Methods
	android::icu::math::BigDecimal UniversalTimeScale::bigDecimalFrom(android::icu::math::BigDecimal arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.icu.util.UniversalTimeScale",
			"bigDecimalFrom",
			"(Landroid/icu/math/BigDecimal;I)Landroid/icu/math/BigDecimal;",
			arg0.object(),
			arg1
		);
	}
	android::icu::math::BigDecimal UniversalTimeScale::bigDecimalFrom(jdouble arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.icu.util.UniversalTimeScale",
			"bigDecimalFrom",
			"(DI)Landroid/icu/math/BigDecimal;",
			arg0,
			arg1
		);
	}
	android::icu::math::BigDecimal UniversalTimeScale::bigDecimalFrom(jlong arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.icu.util.UniversalTimeScale",
			"bigDecimalFrom",
			"(JI)Landroid/icu/math/BigDecimal;",
			arg0,
			arg1
		);
	}
	jlong UniversalTimeScale::from(jlong arg0, jint arg1)
	{
		return callStaticMethod<jlong>(
			"android.icu.util.UniversalTimeScale",
			"from",
			"(JI)J",
			arg0,
			arg1
		);
	}
	jlong UniversalTimeScale::getTimeScaleValue(jint arg0, jint arg1)
	{
		return callStaticMethod<jlong>(
			"android.icu.util.UniversalTimeScale",
			"getTimeScaleValue",
			"(II)J",
			arg0,
			arg1
		);
	}
	android::icu::math::BigDecimal UniversalTimeScale::toBigDecimal(android::icu::math::BigDecimal arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.icu.util.UniversalTimeScale",
			"toBigDecimal",
			"(Landroid/icu/math/BigDecimal;I)Landroid/icu/math/BigDecimal;",
			arg0.object(),
			arg1
		);
	}
	android::icu::math::BigDecimal UniversalTimeScale::toBigDecimal(jlong arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.icu.util.UniversalTimeScale",
			"toBigDecimal",
			"(JI)Landroid/icu/math/BigDecimal;",
			arg0,
			arg1
		);
	}
	jlong UniversalTimeScale::toLong(jlong arg0, jint arg1)
	{
		return callStaticMethod<jlong>(
			"android.icu.util.UniversalTimeScale",
			"toLong",
			"(JI)J",
			arg0,
			arg1
		);
	}
} // namespace android::icu::util

