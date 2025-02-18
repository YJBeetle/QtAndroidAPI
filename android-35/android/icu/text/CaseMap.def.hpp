#pragma once

#include "../../../JObject.hpp"

namespace android::icu::text
{
	class CaseMap_Fold;
}
namespace android::icu::text
{
	class CaseMap_Lower;
}
namespace android::icu::text
{
	class CaseMap_Title;
}
namespace android::icu::text
{
	class CaseMap_Upper;
}

namespace android::icu::text
{
	class CaseMap : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CaseMap(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CaseMap(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static android::icu::text::CaseMap_Fold fold();
		static android::icu::text::CaseMap_Lower toLower();
		static android::icu::text::CaseMap_Title toTitle();
		static android::icu::text::CaseMap_Upper toUpper();
		android::icu::text::CaseMap omitUnchangedText() const;
	};
} // namespace android::icu::text

