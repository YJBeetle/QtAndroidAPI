#pragma once

#include "../../../java/lang/Enum.def.hpp"

class JArray;
class JString;

namespace android::icu::text
{
	class MessagePattern_ArgType : public java::lang::Enum
	{
	public:
		// Fields
		static android::icu::text::MessagePattern_ArgType CHOICE();
		static android::icu::text::MessagePattern_ArgType NONE();
		static android::icu::text::MessagePattern_ArgType PLURAL();
		static android::icu::text::MessagePattern_ArgType SELECT();
		static android::icu::text::MessagePattern_ArgType SELECTORDINAL();
		static android::icu::text::MessagePattern_ArgType SIMPLE();
		
		// QJniObject forward
		template<typename ...Ts> explicit MessagePattern_ArgType(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		MessagePattern_ArgType(QJniObject obj) : java::lang::Enum(obj) {}
		
		// Constructors
		
		// Methods
		static android::icu::text::MessagePattern_ArgType valueOf(JString arg0);
		static JArray values();
		jboolean hasPluralStyle() const;
	};
} // namespace android::icu::text

