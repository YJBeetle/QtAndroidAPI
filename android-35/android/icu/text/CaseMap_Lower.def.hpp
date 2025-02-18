#pragma once

#include "./CaseMap.def.hpp"

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
	class CaseMap_Lower : public android::icu::text::CaseMap
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CaseMap_Lower(const char *className, const char *sig, Ts...agv) : android::icu::text::CaseMap(className, sig, std::forward<Ts>(agv)...) {}
		CaseMap_Lower(QJniObject obj) : android::icu::text::CaseMap(obj) {}
		
		// Constructors
		
		// Methods
		JObject apply(java::util::Locale arg0, JString arg1, JObject arg2, android::icu::text::Edits arg3) const;
		JString apply(java::util::Locale arg0, JString arg1) const;
		android::icu::text::CaseMap_Lower omitUnchangedText() const;
	};
} // namespace android::icu::text

