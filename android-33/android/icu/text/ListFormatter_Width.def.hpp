#pragma once

#include "../../../java/lang/Enum.def.hpp"

class JArray;
class JString;

namespace android::icu::text
{
	class ListFormatter_Width : public java::lang::Enum
	{
	public:
		// Fields
		static android::icu::text::ListFormatter_Width NARROW();
		static android::icu::text::ListFormatter_Width SHORT();
		static android::icu::text::ListFormatter_Width WIDE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ListFormatter_Width(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		ListFormatter_Width(QAndroidJniObject obj) : java::lang::Enum(obj) {}
		
		// Constructors
		
		// Methods
		static android::icu::text::ListFormatter_Width valueOf(JString arg0);
		static JArray values();
	};
} // namespace android::icu::text

