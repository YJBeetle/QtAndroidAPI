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
		DateIntervalInfo(QAndroidJniObject obj);
		
		// Constructors
		DateIntervalInfo(android::icu::util::ULocale arg0);
		DateIntervalInfo(java::util::Locale arg0);
		
		// Methods
		JObject clone();
		android::icu::text::DateIntervalInfo cloneAsThawed();
		jboolean equals(JObject arg0);
		android::icu::text::DateIntervalInfo freeze();
		jboolean getDefaultOrder();
		JString getFallbackIntervalPattern();
		android::icu::text::DateIntervalInfo_PatternInfo getIntervalPattern(JString arg0, jint arg1);
		jint hashCode();
		jboolean isFrozen();
		void setFallbackIntervalPattern(JString arg0);
		void setIntervalPattern(JString arg0, jint arg1, JString arg2);
	};
} // namespace android::icu::text

