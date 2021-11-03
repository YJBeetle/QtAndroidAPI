#pragma once

#include "../../../JObject.hpp"

namespace java::lang
{
	class Number;
}
class JObject;
class JString;
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
	class Duration : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Duration(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Duration(QAndroidJniObject obj);
		
		// Constructors
		Duration();
		
		// Methods
		javax::xml::datatype::Duration add(javax::xml::datatype::Duration arg0);
		void addTo(java::util::Calendar arg0);
		void addTo(java::util::Date arg0);
		jint compare(javax::xml::datatype::Duration arg0);
		jboolean equals(JObject arg0);
		jint getDays();
		java::lang::Number getField(javax::xml::datatype::DatatypeConstants_Field arg0);
		jint getHours();
		jint getMinutes();
		jint getMonths();
		jint getSeconds();
		jint getSign();
		jlong getTimeInMillis(java::util::Calendar arg0);
		jlong getTimeInMillis(java::util::Date arg0);
		javax::xml::_namespace::QName getXMLSchemaType();
		jint getYears();
		jint hashCode();
		jboolean isLongerThan(javax::xml::datatype::Duration arg0);
		jboolean isSet(javax::xml::datatype::DatatypeConstants_Field arg0);
		jboolean isShorterThan(javax::xml::datatype::Duration arg0);
		javax::xml::datatype::Duration multiply(jint arg0);
		javax::xml::datatype::Duration multiply(java::math::BigDecimal arg0);
		javax::xml::datatype::Duration negate();
		javax::xml::datatype::Duration normalizeWith(java::util::Calendar arg0);
		javax::xml::datatype::Duration subtract(javax::xml::datatype::Duration arg0);
		JString toString();
	};
} // namespace javax::xml::datatype

