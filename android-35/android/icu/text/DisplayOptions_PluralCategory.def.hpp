#pragma once

#include "../../../java/lang/Enum.def.hpp"

class JArray;
class JString;

namespace android::icu::text
{
	class DisplayOptions_PluralCategory : public java::lang::Enum
	{
	public:
		// Fields
		static android::icu::text::DisplayOptions_PluralCategory FEW();
		static android::icu::text::DisplayOptions_PluralCategory MANY();
		static android::icu::text::DisplayOptions_PluralCategory ONE();
		static android::icu::text::DisplayOptions_PluralCategory OTHER();
		static android::icu::text::DisplayOptions_PluralCategory TWO();
		static android::icu::text::DisplayOptions_PluralCategory UNDEFINED();
		static JObject VALUES();
		static android::icu::text::DisplayOptions_PluralCategory ZERO();
		
		// QJniObject forward
		template<typename ...Ts> explicit DisplayOptions_PluralCategory(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		DisplayOptions_PluralCategory(QJniObject obj) : java::lang::Enum(obj) {}
		
		// Constructors
		
		// Methods
		static android::icu::text::DisplayOptions_PluralCategory fromIdentifier(JString arg0);
		static android::icu::text::DisplayOptions_PluralCategory valueOf(JString arg0);
		static JArray values();
		JString getIdentifier() const;
	};
} // namespace android::icu::text

