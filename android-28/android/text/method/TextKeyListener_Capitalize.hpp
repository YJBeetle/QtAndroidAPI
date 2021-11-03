#pragma once

#include "../../../JObject.hpp"
#include "../../../java/lang/Enum.hpp"


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
		
		// QJniObject forward
		template<typename ...Ts> explicit TextKeyListener_Capitalize(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		TextKeyListener_Capitalize(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::text::method::TextKeyListener_Capitalize valueOf(jstring arg0);
		static jarray values();
	};
} // namespace android::text::method

