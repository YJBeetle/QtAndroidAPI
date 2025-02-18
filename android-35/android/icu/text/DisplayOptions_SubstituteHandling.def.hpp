#pragma once

#include "../../../java/lang/Enum.def.hpp"

class JArray;
class JString;

namespace android::icu::text
{
	class DisplayOptions_SubstituteHandling : public java::lang::Enum
	{
	public:
		// Fields
		static android::icu::text::DisplayOptions_SubstituteHandling NO_SUBSTITUTE();
		static android::icu::text::DisplayOptions_SubstituteHandling SUBSTITUTE();
		static android::icu::text::DisplayOptions_SubstituteHandling UNDEFINED();
		static JObject VALUES();
		
		// QJniObject forward
		template<typename ...Ts> explicit DisplayOptions_SubstituteHandling(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		DisplayOptions_SubstituteHandling(QJniObject obj) : java::lang::Enum(obj) {}
		
		// Constructors
		
		// Methods
		static android::icu::text::DisplayOptions_SubstituteHandling valueOf(JString arg0);
		static JArray values();
	};
} // namespace android::icu::text

