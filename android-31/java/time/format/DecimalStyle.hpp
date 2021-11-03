#pragma once

#include "../../../JObject.hpp"

namespace java::util
{
	class Locale;
}

namespace java::time::format
{
	class DecimalStyle : public JObject
	{
	public:
		// Fields
		static java::time::format::DecimalStyle STANDARD();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DecimalStyle(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DecimalStyle(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static JObject getAvailableLocales();
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

