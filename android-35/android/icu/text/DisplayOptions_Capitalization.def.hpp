#pragma once

#include "../../../java/lang/Enum.def.hpp"

class JArray;
class JString;

namespace android::icu::text
{
	class DisplayOptions_Capitalization : public java::lang::Enum
	{
	public:
		// Fields
		static android::icu::text::DisplayOptions_Capitalization BEGINNING_OF_SENTENCE();
		static android::icu::text::DisplayOptions_Capitalization MIDDLE_OF_SENTENCE();
		static android::icu::text::DisplayOptions_Capitalization STANDALONE();
		static android::icu::text::DisplayOptions_Capitalization UI_LIST_OR_MENU();
		static android::icu::text::DisplayOptions_Capitalization UNDEFINED();
		static JObject VALUES();
		
		// QJniObject forward
		template<typename ...Ts> explicit DisplayOptions_Capitalization(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		DisplayOptions_Capitalization(QJniObject obj) : java::lang::Enum(obj) {}
		
		// Constructors
		
		// Methods
		static android::icu::text::DisplayOptions_Capitalization valueOf(JString arg0);
		static JArray values();
	};
} // namespace android::icu::text

