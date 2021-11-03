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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Currency(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Currency(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static JObject getAvailableCurrencies();
		static java::util::Currency getInstance(JString arg0);
		static java::util::Currency getInstance(java::util::Locale arg0);
		JString getCurrencyCode() const;
		jint getDefaultFractionDigits() const;
		JString getDisplayName() const;
		JString getDisplayName(java::util::Locale arg0) const;
		jint getNumericCode() const;
		JString getNumericCodeAsString() const;
		JString getSymbol() const;
		JString getSymbol(java::util::Locale arg0) const;
		JString toString() const;
	};
} // namespace java::util

