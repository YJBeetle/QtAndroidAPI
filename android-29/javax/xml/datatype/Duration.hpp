#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::lang
{
	class Number;
}
namespace java::math
{
	class BigDecimal;
}
namespace java::util
{
	class Calendar;
}
namespace java::util
{
	class Date;
}
namespace javax::xml::datatype
{
	class DatatypeConstants_Field;
}
namespace javax::xml::_namespace
{
	class QName;
}

namespace javax::xml::datatype
{
	class Duration : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Duration(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Duration(QAndroidJniObject obj);
		
		// Constructors
		Duration();
		
		// Methods
		QAndroidJniObject add(javax::xml::datatype::Duration arg0);
		void addTo(java::util::Calendar arg0);
		void addTo(java::util::Date arg0);
		jint compare(javax::xml::datatype::Duration arg0);
		jboolean equals(jobject arg0);
		jint getDays();
		QAndroidJniObject getField(javax::xml::datatype::DatatypeConstants_Field arg0);
		jint getHours();
		jint getMinutes();
		jint getMonths();
		jint getSeconds();
		jint getSign();
		jlong getTimeInMillis(java::util::Calendar arg0);
		jlong getTimeInMillis(java::util::Date arg0);
		QAndroidJniObject getXMLSchemaType();
		jint getYears();
		jint hashCode();
		jboolean isLongerThan(javax::xml::datatype::Duration arg0);
		jboolean isSet(javax::xml::datatype::DatatypeConstants_Field arg0);
		jboolean isShorterThan(javax::xml::datatype::Duration arg0);
		QAndroidJniObject multiply(jint arg0);
		QAndroidJniObject multiply(java::math::BigDecimal arg0);
		QAndroidJniObject negate();
		QAndroidJniObject normalizeWith(java::util::Calendar arg0);
		QAndroidJniObject subtract(javax::xml::datatype::Duration arg0);
		jstring toString();
	};
} // namespace javax::xml::datatype

