#pragma once

#include "../../../JObject.hpp"

namespace android::icu::text
{
	class DisplayOptions_Builder;
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
	class DisplayOptions : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DisplayOptions(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DisplayOptions(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static android::icu::text::DisplayOptions_Builder builder();
		android::icu::text::DisplayOptions_Builder copyToBuilder() const;
		android::icu::text::DisplayOptions_Capitalization getCapitalization() const;
		android::icu::text::DisplayOptions_DisplayLength getDisplayLength() const;
		android::icu::text::DisplayOptions_GrammaticalCase getGrammaticalCase() const;
		android::icu::text::DisplayOptions_NameStyle getNameStyle() const;
		android::icu::text::DisplayOptions_NounClass getNounClass() const;
		android::icu::text::DisplayOptions_PluralCategory getPluralCategory() const;
		android::icu::text::DisplayOptions_SubstituteHandling getSubstituteHandling() const;
	};
} // namespace android::icu::text

