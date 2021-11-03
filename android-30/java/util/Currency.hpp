#pragma once

#include "../../JObject.hpp"

class JIntArray;
namespace java::io
{
	class DataInputStream;
}
class JObject;
class JString;
namespace java::util
{
	class HashSet;
}
namespace java::util
{
	class Locale;
}
namespace java::util
{
	class Optional;
}
namespace java::util
{
	class Properties;
}
namespace java::util::regex
{
	class Pattern;
}

namespace java::util
{
	class Currency : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Currency(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Currency(QJniObject obj);
		
		// Constructors
		
		// Methods
		static JObject getAvailableCurrencies();
		static java::util::Currency getInstance(JString arg0);
		static java::util::Currency getInstance(java::util::Locale arg0);
		JString getCurrencyCode();
		jint getDefaultFractionDigits();
		JString getDisplayName();
		JString getDisplayName(java::util::Locale arg0);
		jint getNumericCode();
		JString getNumericCodeAsString();
		JString getSymbol();
		JString getSymbol(java::util::Locale arg0);
		JString toString();
	};
} // namespace java::util

