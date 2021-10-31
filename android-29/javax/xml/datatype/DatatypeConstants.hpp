#pragma once

#include "../../../__JniBaseClass.hpp"

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
	class DatatypeConstants : public __JniBaseClass
	{
	public:
		// Fields
		static jint APRIL();
		static jint AUGUST();
		static QAndroidJniObject DATE();
		static QAndroidJniObject DATETIME();
		static QAndroidJniObject DAYS();
		static jint DECEMBER();
		static QAndroidJniObject DURATION();
		static QAndroidJniObject DURATION_DAYTIME();
		static QAndroidJniObject DURATION_YEARMONTH();
		static jint EQUAL();
		static jint FEBRUARY();
		static jint FIELD_UNDEFINED();
		static QAndroidJniObject GDAY();
		static QAndroidJniObject GMONTH();
		static QAndroidJniObject GMONTHDAY();
		static jint GREATER();
		static QAndroidJniObject GYEAR();
		static QAndroidJniObject GYEARMONTH();
		static QAndroidJniObject HOURS();
		static jint INDETERMINATE();
		static jint JANUARY();
		static jint JULY();
		static jint JUNE();
		static jint LESSER();
		static jint MARCH();
		static jint MAX_TIMEZONE_OFFSET();
		static jint MAY();
		static QAndroidJniObject MINUTES();
		static jint MIN_TIMEZONE_OFFSET();
		static QAndroidJniObject MONTHS();
		static jint NOVEMBER();
		static jint OCTOBER();
		static QAndroidJniObject SECONDS();
		static jint SEPTEMBER();
		static QAndroidJniObject TIME();
		static QAndroidJniObject YEARS();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DatatypeConstants(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		DatatypeConstants(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace javax::xml::datatype

