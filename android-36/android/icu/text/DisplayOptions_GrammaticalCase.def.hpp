#pragma once

#include "../../../java/lang/Enum.def.hpp"

class JArray;
class JString;

namespace android::icu::text
{
	class DisplayOptions_GrammaticalCase : public java::lang::Enum
	{
	public:
		// Fields
		static android::icu::text::DisplayOptions_GrammaticalCase ABLATIVE();
		static android::icu::text::DisplayOptions_GrammaticalCase ACCUSATIVE();
		static android::icu::text::DisplayOptions_GrammaticalCase COMITATIVE();
		static android::icu::text::DisplayOptions_GrammaticalCase DATIVE();
		static android::icu::text::DisplayOptions_GrammaticalCase ERGATIVE();
		static android::icu::text::DisplayOptions_GrammaticalCase GENITIVE();
		static android::icu::text::DisplayOptions_GrammaticalCase INSTRUMENTAL();
		static android::icu::text::DisplayOptions_GrammaticalCase LOCATIVE();
		static android::icu::text::DisplayOptions_GrammaticalCase LOCATIVE_COPULATIVE();
		static android::icu::text::DisplayOptions_GrammaticalCase NOMINATIVE();
		static android::icu::text::DisplayOptions_GrammaticalCase OBLIQUE();
		static android::icu::text::DisplayOptions_GrammaticalCase PREPOSITIONAL();
		static android::icu::text::DisplayOptions_GrammaticalCase SOCIATIVE();
		static android::icu::text::DisplayOptions_GrammaticalCase UNDEFINED();
		static JObject VALUES();
		static android::icu::text::DisplayOptions_GrammaticalCase VOCATIVE();
		
		// QJniObject forward
		template<typename ...Ts> explicit DisplayOptions_GrammaticalCase(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		DisplayOptions_GrammaticalCase(QJniObject obj) : java::lang::Enum(obj) {}
		
		// Constructors
		
		// Methods
		static android::icu::text::DisplayOptions_GrammaticalCase fromIdentifier(JString arg0);
		static android::icu::text::DisplayOptions_GrammaticalCase valueOf(JString arg0);
		static JArray values();
		JString getIdentifier() const;
	};
} // namespace android::icu::text

