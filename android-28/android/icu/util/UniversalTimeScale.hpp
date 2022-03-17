#pragma once

#include "../math/BigDecimal.def.hpp"
#include "./UniversalTimeScale.def.hpp"

namespace android::icu::util
{
	// Fields
	inline jint UniversalTimeScale::DB2_TIME()
	{
		return getStaticField<jint>(
			"android.icu.util.UniversalTimeScale",
			"DB2_TIME"
		);
	}
	inline jint UniversalTimeScale::DOTNET_DATE_TIME()
	{
		return getStaticField<jint>(
			"android.icu.util.UniversalTimeScale",
			"DOTNET_DATE_TIME"
		);
	}
	inline jint UniversalTimeScale::EPOCH_OFFSET_PLUS_1_VALUE()
	{
		return getStaticField<jint>(
			"android.icu.util.UniversalTimeScale",
			"EPOCH_OFFSET_PLUS_1_VALUE"
		);
	}
	inline jint UniversalTimeScale::EPOCH_OFFSET_VALUE()
	{
		return getStaticField<jint>(
			"android.icu.util.UniversalTimeScale",
			"EPOCH_OFFSET_VALUE"
		);
	}
	inline jint UniversalTimeScale::EXCEL_TIME()
	{
		return getStaticField<jint>(
			"android.icu.util.UniversalTimeScale",
			"EXCEL_TIME"
		);
	}
	inline jint UniversalTimeScale::FROM_MAX_VALUE()
	{
		return getStaticField<jint>(
			"android.icu.util.UniversalTimeScale",
			"FROM_MAX_VALUE"
		);
	}
	inline jint UniversalTimeScale::FROM_MIN_VALUE()
	{
		return getStaticField<jint>(
			"android.icu.util.UniversalTimeScale",
			"FROM_MIN_VALUE"
		);
	}
	inline jint UniversalTimeScale::ICU4C_TIME()
	{
		return getStaticField<jint>(
			"android.icu.util.UniversalTimeScale",
			"ICU4C_TIME"
		);
	}
	inline jint UniversalTimeScale::JAVA_TIME()
	{
		return getStaticField<jint>(
			"android.icu.util.UniversalTimeScale",
			"JAVA_TIME"
		);
	}
	inline jint UniversalTimeScale::MAC_OLD_TIME()
	{
		return getStaticField<jint>(
			"android.icu.util.UniversalTimeScale",
			"MAC_OLD_TIME"
		);
	}
	inline jint UniversalTimeScale::MAC_TIME()
	{
		return getStaticField<jint>(
			"android.icu.util.UniversalTimeScale",
			"MAC_TIME"
		);
	}
	inline jint UniversalTimeScale::MAX_SCALE()
	{
		return getStaticField<jint>(
			"android.icu.util.UniversalTimeScale",
			"MAX_SCALE"
		);
	}
	inline jint UniversalTimeScale::TO_MAX_VALUE()
	{
		return getStaticField<jint>(
			"android.icu.util.UniversalTimeScale",
			"TO_MAX_VALUE"
		);
	}
	inline jint UniversalTimeScale::TO_MIN_VALUE()
	{
		return getStaticField<jint>(
			"android.icu.util.UniversalTimeScale",
			"TO_MIN_VALUE"
		);
	}
	inline jint UniversalTimeScale::UNITS_VALUE()
	{
		return getStaticField<jint>(
			"android.icu.util.UniversalTimeScale",
			"UNITS_VALUE"
		);
	}
	inline jint UniversalTimeScale::UNIX_MICROSECONDS_TIME()
	{
		return getStaticField<jint>(
			"android.icu.util.UniversalTimeScale",
			"UNIX_MICROSECONDS_TIME"
		);
	}
	inline jint UniversalTimeScale::UNIX_TIME()
	{
		return getStaticField<jint>(
			"android.icu.util.UniversalTimeScale",
			"UNIX_TIME"
		);
	}
	inline jint UniversalTimeScale::WINDOWS_FILE_TIME()
	{
		return getStaticField<jint>(
			"android.icu.util.UniversalTimeScale",
			"WINDOWS_FILE_TIME"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::icu::math::BigDecimal UniversalTimeScale::bigDecimalFrom(android::icu::math::BigDecimal arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.icu.util.UniversalTimeScale",
			"bigDecimalFrom",
			"(Landroid/icu/math/BigDecimal;I)Landroid/icu/math/BigDecimal;",
			arg0.object(),
			arg1
		);
	}
	inline android::icu::math::BigDecimal UniversalTimeScale::bigDecimalFrom(jdouble arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.icu.util.UniversalTimeScale",
			"bigDecimalFrom",
			"(DI)Landroid/icu/math/BigDecimal;",
			arg0,
			arg1
		);
	}
	inline android::icu::math::BigDecimal UniversalTimeScale::bigDecimalFrom(jlong arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.icu.util.UniversalTimeScale",
			"bigDecimalFrom",
			"(JI)Landroid/icu/math/BigDecimal;",
			arg0,
			arg1
		);
	}
	inline jlong UniversalTimeScale::from(jlong arg0, jint arg1)
	{
		return callStaticMethod<jlong>(
			"android.icu.util.UniversalTimeScale",
			"from",
			"(JI)J",
			arg0,
			arg1
		);
	}
	inline jlong UniversalTimeScale::getTimeScaleValue(jint arg0, jint arg1)
	{
		return callStaticMethod<jlong>(
			"android.icu.util.UniversalTimeScale",
			"getTimeScaleValue",
			"(II)J",
			arg0,
			arg1
		);
	}
	inline android::icu::math::BigDecimal UniversalTimeScale::toBigDecimal(android::icu::math::BigDecimal arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.icu.util.UniversalTimeScale",
			"toBigDecimal",
			"(Landroid/icu/math/BigDecimal;I)Landroid/icu/math/BigDecimal;",
			arg0.object(),
			arg1
		);
	}
	inline android::icu::math::BigDecimal UniversalTimeScale::toBigDecimal(jlong arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"android.icu.util.UniversalTimeScale",
			"toBigDecimal",
			"(JI)Landroid/icu/math/BigDecimal;",
			arg0,
			arg1
		);
	}
	inline jlong UniversalTimeScale::toLong(jlong arg0, jint arg1)
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

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::icu::util;
#endif
