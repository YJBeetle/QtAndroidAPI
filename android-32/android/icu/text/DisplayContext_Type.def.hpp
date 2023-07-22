#pragma once

#include "../../../java/lang/Enum.def.hpp"

class JArray;
class JString;

namespace android::icu::text
{
	class DisplayContext_Type : public java::lang::Enum
	{
	public:
		// Fields
		static android::icu::text::DisplayContext_Type CAPITALIZATION();
		static android::icu::text::DisplayContext_Type DIALECT_HANDLING();
		static android::icu::text::DisplayContext_Type DISPLAY_LENGTH();
		static android::icu::text::DisplayContext_Type SUBSTITUTE_HANDLING();
		
		// QJniObject forward
		template<typename ...Ts> explicit DisplayContext_Type(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		DisplayContext_Type(QJniObject obj) : java::lang::Enum(obj) {}
		
		// Constructors
		
		// Methods
		static android::icu::text::DisplayContext_Type valueOf(JString arg0);
		static JArray values();
	};
} // namespace android::icu::text

