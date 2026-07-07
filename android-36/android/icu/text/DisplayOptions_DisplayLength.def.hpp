#pragma once

#include "../../../java/lang/Enum.def.hpp"

class JArray;
class JString;

namespace android::icu::text
{
	class DisplayOptions_DisplayLength : public java::lang::Enum
	{
	public:
		// Fields
		static android::icu::text::DisplayOptions_DisplayLength LENGTH_FULL();
		static android::icu::text::DisplayOptions_DisplayLength LENGTH_SHORT();
		static android::icu::text::DisplayOptions_DisplayLength UNDEFINED();
		static JObject VALUES();
		
		// QJniObject forward
		template<typename ...Ts> explicit DisplayOptions_DisplayLength(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		DisplayOptions_DisplayLength(QJniObject obj) : java::lang::Enum(obj) {}
		
		// Constructors
		
		// Methods
		static android::icu::text::DisplayOptions_DisplayLength valueOf(JString arg0);
		static JArray values();
	};
} // namespace android::icu::text

