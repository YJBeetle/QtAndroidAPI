#pragma once

#include "../../../JObject.hpp"

namespace android::icu::text
{
	class DisplayOptions;
}
namespace android::icu::text
{
	class DisplayOptions_Capitalization;
}
namespace android::icu::text
{
	class DisplayOptions_DisplayLength;
}
namespace android::icu::text
{
	class DisplayOptions_GrammaticalCase;
}
namespace android::icu::text
{
	class DisplayOptions_NameStyle;
}
namespace android::icu::text
{
	class DisplayOptions_NounClass;
}
namespace android::icu::text
{
	class DisplayOptions_PluralCategory;
}
namespace android::icu::text
{
	class DisplayOptions_SubstituteHandling;
}

namespace android::icu::text
{
	class DisplayOptions_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DisplayOptions_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DisplayOptions_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		android::icu::text::DisplayOptions build() const;
		android::icu::text::DisplayOptions_Builder setCapitalization(android::icu::text::DisplayOptions_Capitalization arg0) const;
		android::icu::text::DisplayOptions_Builder setDisplayLength(android::icu::text::DisplayOptions_DisplayLength arg0) const;
		android::icu::text::DisplayOptions_Builder setGrammaticalCase(android::icu::text::DisplayOptions_GrammaticalCase arg0) const;
		android::icu::text::DisplayOptions_Builder setNameStyle(android::icu::text::DisplayOptions_NameStyle arg0) const;
		android::icu::text::DisplayOptions_Builder setNounClass(android::icu::text::DisplayOptions_NounClass arg0) const;
		android::icu::text::DisplayOptions_Builder setPluralCategory(android::icu::text::DisplayOptions_PluralCategory arg0) const;
		android::icu::text::DisplayOptions_Builder setSubstituteHandling(android::icu::text::DisplayOptions_SubstituteHandling arg0) const;
	};
} // namespace android::icu::text

