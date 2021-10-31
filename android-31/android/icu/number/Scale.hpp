#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::math
{
	class BigDecimal;
}

namespace android::icu::number
{
	class Scale : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Scale(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Scale(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static android::icu::number::Scale byBigDecimal(java::math::BigDecimal arg0);
		static android::icu::number::Scale byDouble(jdouble arg0);
		static android::icu::number::Scale byDoubleAndPowerOfTen(jdouble arg0, jint arg1);
		static android::icu::number::Scale none();
		static android::icu::number::Scale powerOfTen(jint arg0);
	};
} // namespace android::icu::number

