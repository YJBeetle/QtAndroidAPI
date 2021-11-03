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
		
		// QJniObject forward
		template<typename ...Ts> explicit AlphabeticIndex(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AlphabeticIndex(QJniObject obj);
		
		// Constructors
		AlphabeticIndex(android::icu::text::RuleBasedCollator arg0);
		AlphabeticIndex(android::icu::util::ULocale arg0);
		AlphabeticIndex(java::util::Locale arg0);
		
		// Methods
		android::icu::text::AlphabeticIndex addLabels(JArray arg0) const;
		android::icu::text::AlphabeticIndex addLabels(android::icu::text::UnicodeSet arg0) const;
		android::icu::text::AlphabeticIndex addRecord(JString arg0, JObject arg1) const;
		android::icu::text::AlphabeticIndex_ImmutableIndex buildImmutableIndex() const;
		android::icu::text::AlphabeticIndex clearRecords() const;
		jint getBucketCount() const;
		jint getBucketIndex(JString arg0) const;
		JObject getBucketLabels() const;
		android::icu::text::RuleBasedCollator getCollator() const;
		JString getInflowLabel() const;
		jint getMaxLabelCount() const;
		JString getOverflowLabel() const;
		jint getRecordCount() const;
		JString getUnderflowLabel() const;
		JObject iterator() const;
		android::icu::text::AlphabeticIndex setInflowLabel(JString arg0) const;
		android::icu::text::AlphabeticIndex setMaxLabelCount(jint arg0) const;
		android::icu::text::AlphabeticIndex setOverflowLabel(JString arg0) const;
		android::icu::text::AlphabeticIndex setUnderflowLabel(JString arg0) const;
	};
} // namespace android::icu::text

