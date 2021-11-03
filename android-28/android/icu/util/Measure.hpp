#pragma once

#include "../../../JObject.hpp"

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
	class Measure : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Measure(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Measure(QJniObject obj);
		
		// Constructors
		Measure(java::lang::Number arg0, android::icu::util::MeasureUnit arg1);
		
		// Methods
		jboolean equals(jobject arg0);
		java::lang::Number getNumber();
		android::icu::util::MeasureUnit getUnit();
		jint hashCode();
		jstring toString();
	};
} // namespace android::icu::util

