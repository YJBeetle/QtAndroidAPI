#pragma once

#include "../../../JObject.hpp"

namespace android::icu::math
{
	class BigDecimal;
}

namespace android::icu::util
{
	class UniversalTimeScale : public JObject
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit UniversalTimeScale(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		UniversalTimeScale(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static android::icu::math::BigDecimal bigDecimalFrom(android::icu::math::BigDecimal arg0, jint arg1);
		static android::icu::math::BigDecimal bigDecimalFrom(jdouble arg0, jint arg1);
		static android::icu::math::BigDecimal bigDecimalFrom(jlong arg0, jint arg1);
		static jlong from(jlong arg0, jint arg1);
		static jlong getTimeScaleValue(jint arg0, jint arg1);
		static android::icu::math::BigDecimal toBigDecimal(android::icu::math::BigDecimal arg0, jint arg1);
		static android::icu::math::BigDecimal toBigDecimal(jlong arg0, jint arg1);
		static jlong toLong(jlong arg0, jint arg1);
	};
} // namespace android::icu::util

