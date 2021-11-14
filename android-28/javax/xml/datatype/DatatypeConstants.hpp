#pragma once

#include "../../../JObject.hpp"

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
	class DatatypeConstants : public JObject
	{
	public:
		// Fields
		static jint APRIL();
		static jint AUGUST();
		static javax::xml::namespace_::QName DATE();
		static javax::xml::namespace_::QName DATETIME();
		static javax::xml::datatype::DatatypeConstants_Field DAYS();
		static jint DECEMBER();
		static javax::xml::namespace_::QName DURATION();
		static javax::xml::namespace_::QName DURATION_DAYTIME();
		static javax::xml::namespace_::QName DURATION_YEARMONTH();
		static jint EQUAL();
		static jint FEBRUARY();
		static jint FIELD_UNDEFINED();
		static javax::xml::namespace_::QName GDAY();
		static javax::xml::namespace_::QName GMONTH();
		static javax::xml::namespace_::QName GMONTHDAY();
		static jint GREATER();
		static javax::xml::namespace_::QName GYEAR();
		static javax::xml::namespace_::QName GYEARMONTH();
		static javax::xml::datatype::DatatypeConstants_Field HOURS();
		static jint INDETERMINATE();
		static jint JANUARY();
		static jint JULY();
		static jint JUNE();
		static jint LESSER();
		static jint MARCH();
		static jint MAX_TIMEZONE_OFFSET();
		static jint MAY();
		static javax::xml::datatype::DatatypeConstants_Field MINUTES();
		static jint MIN_TIMEZONE_OFFSET();
		static javax::xml::datatype::DatatypeConstants_Field MONTHS();
		static jint NOVEMBER();
		static jint OCTOBER();
		static javax::xml::datatype::DatatypeConstants_Field SECONDS();
		static jint SEPTEMBER();
		static javax::xml::namespace_::QName TIME();
		static javax::xml::datatype::DatatypeConstants_Field YEARS();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DatatypeConstants(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DatatypeConstants(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace javax::xml::datatype

