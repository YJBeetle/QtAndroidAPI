#pragma once

#ifndef ANDROID_ICU_UTIL_UNIVERSALTIMESCALE
#define ANDROID_ICU_UTIL_UNIVERSALTIMESCALE

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::icu::math
{
	class BigDecimal;
}

namespace __jni_impl::android::icu::util
{
	class UniversalTimeScale : public __JniBaseClass
	{
	public:
		// Fields
		static jint DB2_TIME();
		static jint DOTNET_DATE_TIME();
		static jint EPOCH_OFFSET_PLUS_1_VALUE();
		static jint EPOCH_OFFSET_VALUE();
		static jint EXCEL_TIME();
		static jint FROM_MAX_VALUE();
		static jint FROM_MIN_VALUE();
		static jint ICU4C_TIME();
		static jint JAVA_TIME();
		static jint MAC_OLD_TIME();
		static jint MAC_TIME();
		static jint MAX_SCALE();
		static jint TO_MAX_VALUE();
		static jint TO_MIN_VALUE();
		static jint UNITS_VALUE();
		static jint UNIX_MICROSECONDS_TIME();
		static jint UNIX_TIME();
		static jint WINDOWS_FILE_TIME();
		
		// Constructors
		void __constructor();
		
		// Methods
		static jlong from(jlong arg0, jint arg1);
		static QAndroidJniObject toBigDecimal(jlong arg0, jint arg1);
		static QAndroidJniObject toBigDecimal(__jni_impl::android::icu::math::BigDecimal arg0, jint arg1);
		static jlong toLong(jlong arg0, jint arg1);
		static QAndroidJniObject bigDecimalFrom(jdouble arg0, jint arg1);
		static QAndroidJniObject bigDecimalFrom(jlong arg0, jint arg1);
		static QAndroidJniObject bigDecimalFrom(__jni_impl::android::icu::math::BigDecimal arg0, jint arg1);
		static jlong getTimeScaleValue(jint arg0, jint arg1);
	};
} // namespace __jni_impl::android::icu::util

#include "../math/BigDecimal.hpp"

namespace __jni_impl::android::icu::util
{
	// Fields
	jint UniversalTimeScale::DB2_TIME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.UniversalTimeScale",
			"DB2_TIME");
	}
	jint UniversalTimeScale::DOTNET_DATE_TIME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.UniversalTimeScale",
			"DOTNET_DATE_TIME");
	}
	jint UniversalTimeScale::EPOCH_OFFSET_PLUS_1_VALUE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.UniversalTimeScale",
			"EPOCH_OFFSET_PLUS_1_VALUE");
	}
	jint UniversalTimeScale::EPOCH_OFFSET_VALUE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.UniversalTimeScale",
			"EPOCH_OFFSET_VALUE");
	}
	jint UniversalTimeScale::EXCEL_TIME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.UniversalTimeScale",
			"EXCEL_TIME");
	}
	jint UniversalTimeScale::FROM_MAX_VALUE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.UniversalTimeScale",
			"FROM_MAX_VALUE");
	}
	jint UniversalTimeScale::FROM_MIN_VALUE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.UniversalTimeScale",
			"FROM_MIN_VALUE");
	}
	jint UniversalTimeScale::ICU4C_TIME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.UniversalTimeScale",
			"ICU4C_TIME");
	}
	jint UniversalTimeScale::JAVA_TIME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.UniversalTimeScale",
			"JAVA_TIME");
	}
	jint UniversalTimeScale::MAC_OLD_TIME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.UniversalTimeScale",
			"MAC_OLD_TIME");
	}
	jint UniversalTimeScale::MAC_TIME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.UniversalTimeScale",
			"MAC_TIME");
	}
	jint UniversalTimeScale::MAX_SCALE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.UniversalTimeScale",
			"MAX_SCALE");
	}
	jint UniversalTimeScale::TO_MAX_VALUE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.UniversalTimeScale",
			"TO_MAX_VALUE");
	}
	jint UniversalTimeScale::TO_MIN_VALUE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.UniversalTimeScale",
			"TO_MIN_VALUE");
	}
	jint UniversalTimeScale::UNITS_VALUE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.UniversalTimeScale",
			"UNITS_VALUE");
	}
	jint UniversalTimeScale::UNIX_MICROSECONDS_TIME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.UniversalTimeScale",
			"UNIX_MICROSECONDS_TIME");
	}
	jint UniversalTimeScale::UNIX_TIME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.UniversalTimeScale",
			"UNIX_TIME");
	}
	jint UniversalTimeScale::WINDOWS_FILE_TIME()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.UniversalTimeScale",
			"WINDOWS_FILE_TIME");
	}
	
	// Constructors
	void UniversalTimeScale::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.UniversalTimeScale",
			"(V)V");
	}
	
	// Methods
	jlong UniversalTimeScale::from(jlong arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.icu.util.UniversalTimeScale",
			"from",
			"(JI)J",
			arg0,
			arg1);
	}
	QAndroidJniObject UniversalTimeScale::toBigDecimal(jlong arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.UniversalTimeScale",
			"toBigDecimal",
			"(JI)Landroid/icu/math/BigDecimal;",
			arg0,
			arg1);
	}
	QAndroidJniObject UniversalTimeScale::toBigDecimal(__jni_impl::android::icu::math::BigDecimal arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.UniversalTimeScale",
			"toBigDecimal",
			"(Landroid/icu/math/BigDecimal;I)Landroid/icu/math/BigDecimal;",
			arg0.__jniObject().object(),
			arg1);
	}
	jlong UniversalTimeScale::toLong(jlong arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.icu.util.UniversalTimeScale",
			"toLong",
			"(JI)J",
			arg0,
			arg1);
	}
	QAndroidJniObject UniversalTimeScale::bigDecimalFrom(jdouble arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.UniversalTimeScale",
			"bigDecimalFrom",
			"(DI)Landroid/icu/math/BigDecimal;",
			arg0,
			arg1);
	}
	QAndroidJniObject UniversalTimeScale::bigDecimalFrom(jlong arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.UniversalTimeScale",
			"bigDecimalFrom",
			"(JI)Landroid/icu/math/BigDecimal;",
			arg0,
			arg1);
	}
	QAndroidJniObject UniversalTimeScale::bigDecimalFrom(__jni_impl::android::icu::math::BigDecimal arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.util.UniversalTimeScale",
			"bigDecimalFrom",
			"(Landroid/icu/math/BigDecimal;I)Landroid/icu/math/BigDecimal;",
			arg0.__jniObject().object(),
			arg1);
	}
	jlong UniversalTimeScale::getTimeScaleValue(jint arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.icu.util.UniversalTimeScale",
			"getTimeScaleValue",
			"(II)J",
			arg0,
			arg1);
	}
} // namespace __jni_impl::android::icu::util

namespace android::icu::util
{
	class UniversalTimeScale : public __jni_impl::android::icu::util::UniversalTimeScale
	{
	public:
		UniversalTimeScale(QAndroidJniObject obj) { __thiz = obj; }
		UniversalTimeScale()
		{
			__constructor();
		}
	};
} // namespace android::icu::util

#endif // ANDROID_ICU_UTIL_UNIVERSALTIMESCALE

