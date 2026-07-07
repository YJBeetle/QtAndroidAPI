#pragma once

#include "../../../java/lang/Enum.def.hpp"

class JArray;
class JString;

namespace android::icu::text
{
	class DisplayOptions_NameStyle : public java::lang::Enum
	{
	public:
		// Fields
		static android::icu::text::DisplayOptions_NameStyle DIALECT_NAMES();
		static android::icu::text::DisplayOptions_NameStyle STANDARD_NAMES();
		static android::icu::text::DisplayOptions_NameStyle UNDEFINED();
		static JObject VALUES();
		
		// QJniObject forward
		template<typename ...Ts> explicit DisplayOptions_NameStyle(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		DisplayOptions_NameStyle(QJniObject obj) : java::lang::Enum(obj) {}
		
		// Constructors
		
		// Methods
		static android::icu::text::DisplayOptions_NameStyle valueOf(JString arg0);
		static JArray values();
	};
} // namespace android::icu::text

