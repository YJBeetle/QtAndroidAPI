#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::util
{
	class Locale;
}

namespace java::time::format
{
	class DecimalStyle : public __JniBaseClass
	{
	public:
		// Fields
		static java::time::format::DecimalStyle STANDARD();
		
		// QJniObject forward
		template<typename ...Ts> explicit DecimalStyle(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		DecimalStyle(QJniObject obj);
		
		// Constructors
		
		// Methods
		static __JniBaseClass getAvailableLocales();
		static java::time::format::DecimalStyle of(java::util::Locale arg0);
		static java::time::format::DecimalStyle ofDefaultLocale();
		jboolean equals(jobject arg0);
		jchar getDecimalSeparator();
		jchar getNegativeSign();
		jchar getPositiveSign();
		jchar getZeroDigit();
		jint hashCode();
		jstring toString();
		java::time::format::DecimalStyle withDecimalSeparator(jchar arg0);
		java::time::format::DecimalStyle withNegativeSign(jchar arg0);
		java::time::format::DecimalStyle withPositiveSign(jchar arg0);
		java::time::format::DecimalStyle withZeroDigit(jchar arg0);
	};
} // namespace java::time::format

