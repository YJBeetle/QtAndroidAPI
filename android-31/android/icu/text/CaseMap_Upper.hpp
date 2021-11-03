#pragma once

#include "./CaseMap.hpp"

namespace android::icu::text
{
	class CaseMap;
}
namespace android::icu::text
{
	class Edits;
}
class JString;
class JString;
namespace java::util
{
	class Locale;
}

namespace android::icu::text
{
	class CaseMap_Upper : public android::icu::text::CaseMap
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CaseMap_Upper(const char *className, const char *sig, Ts...agv) : android::icu::text::CaseMap(className, sig, std::forward<Ts>(agv)...) {}
		CaseMap_Upper(QJniObject obj);
		
		// Constructors
		
		// Methods
		JObject apply(java::util::Locale arg0, JString arg1, JObject arg2, android::icu::text::Edits arg3);
		JString apply(java::util::Locale arg0, JString arg1);
		android::icu::text::CaseMap_Upper omitUnchangedText();
	};
} // namespace android::icu::text

