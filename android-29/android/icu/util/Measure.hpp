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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Measure(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Measure(QAndroidJniObject obj);
		
		// Constructors
		Measure(java::lang::Number arg0, android::icu::util::MeasureUnit arg1);
		
		// Methods
		jboolean equals(jobject arg0);
		QAndroidJniObject getNumber();
		QAndroidJniObject getUnit();
		jint hashCode();
		jstring toString();
	};
} // namespace android::icu::util

