#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::icu::text
{
	class AlphabeticIndex_ImmutableIndex;
}
namespace android::icu::text
{
	class RuleBasedCollator;
}
namespace android::icu::text
{
	class UnicodeSet;
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
	class AlphabeticIndex : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AlphabeticIndex(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AlphabeticIndex(QAndroidJniObject obj);
		
		// Constructors
		AlphabeticIndex(android::icu::text::RuleBasedCollator arg0);
		AlphabeticIndex(android::icu::util::ULocale arg0);
		AlphabeticIndex(java::util::Locale arg0);
		
		// Methods
		QAndroidJniObject addLabels(jarray arg0);
		QAndroidJniObject addLabels(android::icu::text::UnicodeSet arg0);
		QAndroidJniObject addRecord(jstring arg0, jobject arg1);
		QAndroidJniObject buildImmutableIndex();
		QAndroidJniObject clearRecords();
		jint getBucketCount();
		jint getBucketIndex(jstring arg0);
		QAndroidJniObject getBucketLabels();
		QAndroidJniObject getCollator();
		jstring getInflowLabel();
		jint getMaxLabelCount();
		jstring getOverflowLabel();
		jint getRecordCount();
		jstring getUnderflowLabel();
		QAndroidJniObject iterator();
		QAndroidJniObject setInflowLabel(jstring arg0);
		QAndroidJniObject setMaxLabelCount(jint arg0);
		QAndroidJniObject setOverflowLabel(jstring arg0);
		QAndroidJniObject setUnderflowLabel(jstring arg0);
	};
} // namespace android::icu::text

