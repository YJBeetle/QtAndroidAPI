#pragma once

#include "../../../java/lang/Enum.def.hpp"

class JArray;
class JString;

namespace android::icu::text
{
	class DisplayOptions_NounClass : public java::lang::Enum
	{
	public:
		// Fields
		static android::icu::text::DisplayOptions_NounClass ANIMATE();
		static android::icu::text::DisplayOptions_NounClass COMMON();
		static android::icu::text::DisplayOptions_NounClass FEMININE();
		static android::icu::text::DisplayOptions_NounClass INANIMATE();
		static android::icu::text::DisplayOptions_NounClass MASCULINE();
		static android::icu::text::DisplayOptions_NounClass NEUTER();
		static android::icu::text::DisplayOptions_NounClass OTHER();
		static android::icu::text::DisplayOptions_NounClass PERSONAL();
		static android::icu::text::DisplayOptions_NounClass UNDEFINED();
		static JObject VALUES();
		
		// QJniObject forward
		template<typename ...Ts> explicit DisplayOptions_NounClass(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		DisplayOptions_NounClass(QJniObject obj) : java::lang::Enum(obj) {}
		
		// Constructors
		
		// Methods
		static android::icu::text::DisplayOptions_NounClass fromIdentifier(JString arg0);
		static android::icu::text::DisplayOptions_NounClass valueOf(JString arg0);
		static JArray values();
		JString getIdentifier() const;
	};
} // namespace android::icu::text

