#pragma once

#include "../../../java/lang/Enum.def.hpp"

class JArray;
class JString;

namespace android::icu::text
{
	class MessagePattern_Part_Type : public java::lang::Enum
	{
	public:
		// Fields
		static android::icu::text::MessagePattern_Part_Type ARG_DOUBLE();
		static android::icu::text::MessagePattern_Part_Type ARG_INT();
		static android::icu::text::MessagePattern_Part_Type ARG_LIMIT();
		static android::icu::text::MessagePattern_Part_Type ARG_NAME();
		static android::icu::text::MessagePattern_Part_Type ARG_NUMBER();
		static android::icu::text::MessagePattern_Part_Type ARG_SELECTOR();
		static android::icu::text::MessagePattern_Part_Type ARG_START();
		static android::icu::text::MessagePattern_Part_Type ARG_STYLE();
		static android::icu::text::MessagePattern_Part_Type ARG_TYPE();
		static android::icu::text::MessagePattern_Part_Type INSERT_CHAR();
		static android::icu::text::MessagePattern_Part_Type MSG_LIMIT();
		static android::icu::text::MessagePattern_Part_Type MSG_START();
		static android::icu::text::MessagePattern_Part_Type REPLACE_NUMBER();
		static android::icu::text::MessagePattern_Part_Type SKIP_SYNTAX();
		
		// QJniObject forward
		template<typename ...Ts> explicit MessagePattern_Part_Type(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		MessagePattern_Part_Type(QJniObject obj) : java::lang::Enum(obj) {}
		
		// Constructors
		
		// Methods
		static android::icu::text::MessagePattern_Part_Type valueOf(JString arg0);
		static JArray values();
		jboolean hasNumericValue() const;
	};
} // namespace android::icu::text

