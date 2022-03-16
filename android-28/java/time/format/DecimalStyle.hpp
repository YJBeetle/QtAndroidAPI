#pragma once

#include "../../../JObject.hpp"

class JObject;
class JString;
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
		DecimalStyle(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static JObject getAvailableLocales();
		static java::time::format::DecimalStyle of(java::util::Locale arg0);
		static java::time::format::DecimalStyle ofDefaultLocale();
		jboolean equals(JObject arg0) const;
		jchar getDecimalSeparator() const;
		jchar getNegativeSign() const;
		jchar getPositiveSign() const;
		jchar getZeroDigit() const;
		jint hashCode() const;
		JString toString() const;
		java::time::format::DecimalStyle withDecimalSeparator(jchar arg0) const;
		java::time::format::DecimalStyle withNegativeSign(jchar arg0) const;
		java::time::format::DecimalStyle withPositiveSign(jchar arg0) const;
		java::time::format::DecimalStyle withZeroDigit(jchar arg0) const;
	};
} // namespace java::time::format

