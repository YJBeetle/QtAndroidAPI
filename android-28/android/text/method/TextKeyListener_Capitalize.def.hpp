#pragma once

#include "../../../java/lang/Enum.def.hpp"

class JArray;
class JString;

namespace android::text::method
{
	class TextKeyListener_Capitalize : public java::lang::Enum
	{
	public:
		// Fields
		static android::text::method::TextKeyListener_Capitalize CHARACTERS();
		static android::text::method::TextKeyListener_Capitalize NONE();
		static android::text::method::TextKeyListener_Capitalize SENTENCES();
		static android::text::method::TextKeyListener_Capitalize WORDS();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TextKeyListener_Capitalize(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		TextKeyListener_Capitalize(QAndroidJniObject obj) : java::lang::Enum(obj) {}
		
		// Constructors
		
		// Methods
		static android::text::method::TextKeyListener_Capitalize valueOf(JString arg0);
		static JArray values();
	};
} // namespace android::text::method

