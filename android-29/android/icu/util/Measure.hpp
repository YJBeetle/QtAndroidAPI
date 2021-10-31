#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::icu::util
{
	class MeasureUnit;
}
namespace java::lang
{
	class Number;
}

namespace android::icu::util
{
	class Measure : public __JniBaseClass
	{
	public:
		// Fields
		
		Measure(QAndroidJniObject obj);
		// Constructors
		Measure(java::lang::Number arg0, android::icu::util::MeasureUnit arg1);
		Measure() = default;
		
		// Methods
		jboolean equals(jobject arg0);
		QAndroidJniObject getNumber();
		QAndroidJniObject getUnit();
		jint hashCode();
		jstring toString();
	};
} // namespace android::icu::util

