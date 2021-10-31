#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::io
{
	class DataInputStream;
}
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
	class Currency : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Currency(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Currency(QJniObject obj);
		
		// Constructors
		
		// Methods
		static __JniBaseClass getAvailableCurrencies();
		static java::util::Currency getInstance(jstring arg0);
		static java::util::Currency getInstance(java::util::Locale arg0);
		jstring getCurrencyCode();
		jint getDefaultFractionDigits();
		jstring getDisplayName();
		jstring getDisplayName(java::util::Locale arg0);
		jint getNumericCode();
		jstring getNumericCodeAsString();
		jstring getSymbol();
		jstring getSymbol(java::util::Locale arg0);
		jstring toString();
	};
} // namespace java::util

