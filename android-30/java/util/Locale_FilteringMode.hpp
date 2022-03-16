#pragma once

#include "../lang/Enum.hpp"

class JArray;
class JString;

namespace java::util
{
	class Locale_FilteringMode : public java::lang::Enum
	{
	public:
		// Fields
		static java::util::Locale_FilteringMode AUTOSELECT_FILTERING();
		static java::util::Locale_FilteringMode EXTENDED_FILTERING();
		static java::util::Locale_FilteringMode IGNORE_EXTENDED_RANGES();
		static java::util::Locale_FilteringMode MAP_EXTENDED_RANGES();
		static java::util::Locale_FilteringMode REJECT_EXTENDED_RANGES();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Locale_FilteringMode(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		Locale_FilteringMode(QAndroidJniObject obj) : java::lang::Enum(obj) {}
		
		// Constructors
		
		// Methods
		static java::util::Locale_FilteringMode valueOf(JString arg0);
		static JArray values();
	};
} // namespace java::util

