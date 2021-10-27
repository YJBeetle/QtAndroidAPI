#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::icu::text
{
	class DateIntervalInfo_PatternInfo;
}
namespace android::icu::util
{
	class ULocale;
}
namespace java::util
{
	class Locale;
}

namespace android::icu::text
{
	class DateIntervalInfo : public __JniBaseClass
	{
	public:
		// Fields
		
		DateIntervalInfo(QAndroidJniObject obj);
		// Constructors
		DateIntervalInfo(android::icu::util::ULocale &arg0);
		DateIntervalInfo(java::util::Locale &arg0);
		DateIntervalInfo() = default;
		
		// Methods
		jobject clone();
		QAndroidJniObject cloneAsThawed();
		jboolean equals(jobject arg0);
		QAndroidJniObject freeze();
		jboolean getDefaultOrder();
		jstring getFallbackIntervalPattern();
		QAndroidJniObject getIntervalPattern(jstring arg0, jint arg1);
		QAndroidJniObject getIntervalPattern(const QString &arg0, jint arg1);
		jint hashCode();
		jboolean isFrozen();
		void setFallbackIntervalPattern(jstring arg0);
		void setFallbackIntervalPattern(const QString &arg0);
		void setIntervalPattern(jstring arg0, jint arg1, jstring arg2);
		void setIntervalPattern(const QString &arg0, jint arg1, const QString &arg2);
	};
} // namespace android::icu::text

