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
class JObject;
class JString;

namespace android::icu::util
{
	class Measure : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Measure(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Measure(QAndroidJniObject obj);
		
		// Constructors
		Measure(java::lang::Number arg0, android::icu::util::MeasureUnit arg1);
		
		// Methods
		jboolean equals(JObject arg0) const;
		java::lang::Number getNumber() const;
		android::icu::util::MeasureUnit getUnit() const;
		jint hashCode() const;
		JString toString() const;
	};
} // namespace android::icu::util

