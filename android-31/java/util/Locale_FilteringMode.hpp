#pragma once

#include "../../JObject.hpp"
#include "../lang/Enum.hpp"


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
		
		// QJniObject forward
		template<typename ...Ts> explicit Locale_FilteringMode(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		Locale_FilteringMode(QJniObject obj);
		
		// Constructors
		
		// Methods
		static java::util::Locale_FilteringMode valueOf(jstring arg0);
		static jarray values();
	};
} // namespace java::util

