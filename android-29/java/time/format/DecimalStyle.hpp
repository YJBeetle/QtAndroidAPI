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
		static QAndroidJniObject STANDARD();
		
		DecimalStyle(QAndroidJniObject obj);
		// Constructors
		DecimalStyle() = default;
		
		// Methods
		static QAndroidJniObject getAvailableLocales();
		static QAndroidJniObject of(java::util::Locale arg0);
		static QAndroidJniObject ofDefaultLocale();
		jboolean equals(jobject arg0);
		jchar getDecimalSeparator();
		jchar getNegativeSign();
		jchar getPositiveSign();
		jchar getZeroDigit();
		jint hashCode();
		jstring toString();
		QAndroidJniObject withDecimalSeparator(jchar arg0);
		QAndroidJniObject withNegativeSign(jchar arg0);
		QAndroidJniObject withPositiveSign(jchar arg0);
		QAndroidJniObject withZeroDigit(jchar arg0);
	};
} // namespace java::time::format

