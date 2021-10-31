#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::icu::text
{
	class DecimalFormat;
}
namespace android::icu::util
{
	class ULocale;
}

namespace android::icu::text
{
	class ScientificNumberFormatter : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ScientificNumberFormatter(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ScientificNumberFormatter(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject getMarkupInstance(android::icu::text::DecimalFormat arg0, jstring arg1, jstring arg2);
		static QAndroidJniObject getMarkupInstance(android::icu::util::ULocale arg0, jstring arg1, jstring arg2);
		static QAndroidJniObject getSuperscriptInstance(android::icu::text::DecimalFormat arg0);
		static QAndroidJniObject getSuperscriptInstance(android::icu::util::ULocale arg0);
		jstring format(jobject arg0);
	};
} // namespace android::icu::text

