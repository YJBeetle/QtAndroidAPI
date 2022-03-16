#pragma once

#include "../../../JObject.hpp"

namespace android::icu::text
{
	class DateIntervalInfo_PatternInfo;
}
namespace android::icu::util
{
	class ULocale;
}
class JObject;
class JString;
namespace java::util
{
	class Locale;
}

namespace android::icu::text
{
	class DateIntervalInfo : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DateIntervalInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DateIntervalInfo(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		DateIntervalInfo(android::icu::util::ULocale arg0);
		DateIntervalInfo(java::util::Locale arg0);
		
		// Methods
		JObject clone() const;
		android::icu::text::DateIntervalInfo cloneAsThawed() const;
		jboolean equals(JObject arg0) const;
		android::icu::text::DateIntervalInfo freeze() const;
		jboolean getDefaultOrder() const;
		JString getFallbackIntervalPattern() const;
		android::icu::text::DateIntervalInfo_PatternInfo getIntervalPattern(JString arg0, jint arg1) const;
		jint hashCode() const;
		jboolean isFrozen() const;
		void setFallbackIntervalPattern(JString arg0) const;
		void setIntervalPattern(JString arg0, jint arg1, JString arg2) const;
	};
} // namespace android::icu::text

