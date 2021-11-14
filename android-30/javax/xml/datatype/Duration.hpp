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
namespace javax::xml::namespace_
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
		javax::xml::datatype::Duration add(javax::xml::datatype::Duration arg0) const;
		void addTo(java::util::Calendar arg0) const;
		void addTo(java::util::Date arg0) const;
		jint compare(javax::xml::datatype::Duration arg0) const;
		jboolean equals(JObject arg0) const;
		jint getDays() const;
		java::lang::Number getField(javax::xml::datatype::DatatypeConstants_Field arg0) const;
		jint getHours() const;
		jint getMinutes() const;
		jint getMonths() const;
		jint getSeconds() const;
		jint getSign() const;
		jlong getTimeInMillis(java::util::Calendar arg0) const;
		jlong getTimeInMillis(java::util::Date arg0) const;
		javax::xml::namespace_::QName getXMLSchemaType() const;
		jint getYears() const;
		jint hashCode() const;
		jboolean isLongerThan(javax::xml::datatype::Duration arg0) const;
		jboolean isSet(javax::xml::datatype::DatatypeConstants_Field arg0) const;
		jboolean isShorterThan(javax::xml::datatype::Duration arg0) const;
		javax::xml::datatype::Duration multiply(jint arg0) const;
		javax::xml::datatype::Duration multiply(java::math::BigDecimal arg0) const;
		javax::xml::datatype::Duration negate() const;
		javax::xml::datatype::Duration normalizeWith(java::util::Calendar arg0) const;
		javax::xml::datatype::Duration subtract(javax::xml::datatype::Duration arg0) const;
		JString toString() const;
	};
} // namespace javax::xml::datatype

