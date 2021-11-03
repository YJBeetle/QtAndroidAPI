#pragma once

#include "../../../JObject.hpp"

class JArray;
class JArray;
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
class JString;
class JObject;
class JString;
namespace java::util
{
	class Locale;
}

namespace android::icu::text
{
	class AlphabeticIndex : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AlphabeticIndex(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AlphabeticIndex(QAndroidJniObject obj);
		
		// Constructors
		AlphabeticIndex(android::icu::text::RuleBasedCollator arg0);
		AlphabeticIndex(android::icu::util::ULocale arg0);
		AlphabeticIndex(java::util::Locale arg0);
		
		// Methods
		android::icu::text::AlphabeticIndex addLabels(JArray arg0);
		android::icu::text::AlphabeticIndex addLabels(android::icu::text::UnicodeSet arg0);
		android::icu::text::AlphabeticIndex addRecord(JString arg0, JObject arg1);
		android::icu::text::AlphabeticIndex_ImmutableIndex buildImmutableIndex();
		android::icu::text::AlphabeticIndex clearRecords();
		jint getBucketCount();
		jint getBucketIndex(JString arg0);
		JObject getBucketLabels();
		android::icu::text::RuleBasedCollator getCollator();
		JString getInflowLabel();
		jint getMaxLabelCount();
		JString getOverflowLabel();
		jint getRecordCount();
		JString getUnderflowLabel();
		JObject iterator();
		android::icu::text::AlphabeticIndex setInflowLabel(JString arg0);
		android::icu::text::AlphabeticIndex setMaxLabelCount(jint arg0);
		android::icu::text::AlphabeticIndex setOverflowLabel(JString arg0);
		android::icu::text::AlphabeticIndex setUnderflowLabel(JString arg0);
	};
} // namespace android::icu::text

