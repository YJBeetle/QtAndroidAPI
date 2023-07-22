#pragma once

#include "../../../java/lang/Enum.def.hpp"

class JArray;
class JString;

namespace android::icu::text
{
	class ListFormatter_Type : public java::lang::Enum
	{
	public:
		// Fields
		static android::icu::text::ListFormatter_Type AND();
		static android::icu::text::ListFormatter_Type OR();
		static android::icu::text::ListFormatter_Type UNITS();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ListFormatter_Type(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		ListFormatter_Type(QAndroidJniObject obj) : java::lang::Enum(obj) {}
		
		// Constructors
		
		// Methods
		static android::icu::text::ListFormatter_Type valueOf(JString arg0);
		static JArray values();
	};
} // namespace android::icu::text

