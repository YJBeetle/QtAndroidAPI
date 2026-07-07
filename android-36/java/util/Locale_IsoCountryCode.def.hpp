#pragma once

#include "../lang/Enum.def.hpp"

class JArray;
class JString;

namespace java::util
{
	class Locale_IsoCountryCode : public java::lang::Enum
	{
	public:
		// Fields
		static java::util::Locale_IsoCountryCode PART1_ALPHA2();
		static java::util::Locale_IsoCountryCode PART1_ALPHA3();
		static java::util::Locale_IsoCountryCode PART3();
		
		// QJniObject forward
		template<typename ...Ts> explicit Locale_IsoCountryCode(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		Locale_IsoCountryCode(QJniObject obj) : java::lang::Enum(obj) {}
		
		// Constructors
		
		// Methods
		static java::util::Locale_IsoCountryCode valueOf(JString arg0);
		static JArray values();
	};
} // namespace java::util

