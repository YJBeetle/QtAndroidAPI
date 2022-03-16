#pragma once

#include "../../../java/lang/Enum.def.hpp"

class JArray;
namespace android::icu::text
{
	class DisplayContext_Type;
}
class JString;

namespace android::icu::text
{
	class DisplayContext : public java::lang::Enum
	{
	public:
		// Fields
		static android::icu::text::DisplayContext CAPITALIZATION_FOR_BEGINNING_OF_SENTENCE();
		static android::icu::text::DisplayContext CAPITALIZATION_FOR_MIDDLE_OF_SENTENCE();
		static android::icu::text::DisplayContext CAPITALIZATION_FOR_STANDALONE();
		static android::icu::text::DisplayContext CAPITALIZATION_FOR_UI_LIST_OR_MENU();
		static android::icu::text::DisplayContext CAPITALIZATION_NONE();
		static android::icu::text::DisplayContext DIALECT_NAMES();
		static android::icu::text::DisplayContext LENGTH_FULL();
		static android::icu::text::DisplayContext LENGTH_SHORT();
		static android::icu::text::DisplayContext NO_SUBSTITUTE();
		static android::icu::text::DisplayContext STANDARD_NAMES();
		static android::icu::text::DisplayContext SUBSTITUTE();
		
		// QJniObject forward
		template<typename ...Ts> explicit DisplayContext(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		DisplayContext(QJniObject obj) : java::lang::Enum(obj) {}
		
		// Constructors
		
		// Methods
		static android::icu::text::DisplayContext valueOf(JString arg0);
		static JArray values();
		android::icu::text::DisplayContext_Type type() const;
		jint value() const;
	};
} // namespace android::icu::text

