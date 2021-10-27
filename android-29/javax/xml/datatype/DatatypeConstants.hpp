#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::javax::xml::datatype
{
	class DatatypeConstants_Field;
}
namespace __jni_impl::javax::xml::namespace
{
	class QName;
}

namespace __jni_impl::javax::xml::datatype
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
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::javax::xml::datatype

#include "DatatypeConstants_Field.hpp"
#include "../namespace/QName.hpp"

namespace __jni_impl::javax::xml::datatype
{
	// Fields
	jint DatatypeConstants::APRIL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"javax.xml.datatype.DatatypeConstants",
			"APRIL"
		);
	}
	jint DatatypeConstants::AUGUST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"javax.xml.datatype.DatatypeConstants",
			"AUGUST"
		);
	}
	QAndroidJniObject DatatypeConstants::DATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.datatype.DatatypeConstants",
			"DATE",
			"Ljavax/xml/namespace/QName;"
		);
	}
	QAndroidJniObject DatatypeConstants::DATETIME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.datatype.DatatypeConstants",
			"DATETIME",
			"Ljavax/xml/namespace/QName;"
		);
	}
	QAndroidJniObject DatatypeConstants::DAYS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.datatype.DatatypeConstants",
			"DAYS",
			"Ljavax/xml/datatype/DatatypeConstants$Field;"
		);
	}
	jint DatatypeConstants::DECEMBER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"javax.xml.datatype.DatatypeConstants",
			"DECEMBER"
		);
	}
	QAndroidJniObject DatatypeConstants::DURATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.datatype.DatatypeConstants",
			"DURATION",
			"Ljavax/xml/namespace/QName;"
		);
	}
	QAndroidJniObject DatatypeConstants::DURATION_DAYTIME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.datatype.DatatypeConstants",
			"DURATION_DAYTIME",
			"Ljavax/xml/namespace/QName;"
		);
	}
	QAndroidJniObject DatatypeConstants::DURATION_YEARMONTH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.datatype.DatatypeConstants",
			"DURATION_YEARMONTH",
			"Ljavax/xml/namespace/QName;"
		);
	}
	jint DatatypeConstants::EQUAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"javax.xml.datatype.DatatypeConstants",
			"EQUAL"
		);
	}
	jint DatatypeConstants::FEBRUARY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"javax.xml.datatype.DatatypeConstants",
			"FEBRUARY"
		);
	}
	jint DatatypeConstants::FIELD_UNDEFINED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"javax.xml.datatype.DatatypeConstants",
			"FIELD_UNDEFINED"
		);
	}
	QAndroidJniObject DatatypeConstants::GDAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.datatype.DatatypeConstants",
			"GDAY",
			"Ljavax/xml/namespace/QName;"
		);
	}
	QAndroidJniObject DatatypeConstants::GMONTH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.datatype.DatatypeConstants",
			"GMONTH",
			"Ljavax/xml/namespace/QName;"
		);
	}
	QAndroidJniObject DatatypeConstants::GMONTHDAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.datatype.DatatypeConstants",
			"GMONTHDAY",
			"Ljavax/xml/namespace/QName;"
		);
	}
	jint DatatypeConstants::GREATER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"javax.xml.datatype.DatatypeConstants",
			"GREATER"
		);
	}
	QAndroidJniObject DatatypeConstants::GYEAR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.datatype.DatatypeConstants",
			"GYEAR",
			"Ljavax/xml/namespace/QName;"
		);
	}
	QAndroidJniObject DatatypeConstants::GYEARMONTH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.datatype.DatatypeConstants",
			"GYEARMONTH",
			"Ljavax/xml/namespace/QName;"
		);
	}
	QAndroidJniObject DatatypeConstants::HOURS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.datatype.DatatypeConstants",
			"HOURS",
			"Ljavax/xml/datatype/DatatypeConstants$Field;"
		);
	}
	jint DatatypeConstants::INDETERMINATE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"javax.xml.datatype.DatatypeConstants",
			"INDETERMINATE"
		);
	}
	jint DatatypeConstants::JANUARY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"javax.xml.datatype.DatatypeConstants",
			"JANUARY"
		);
	}
	jint DatatypeConstants::JULY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"javax.xml.datatype.DatatypeConstants",
			"JULY"
		);
	}
	jint DatatypeConstants::JUNE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"javax.xml.datatype.DatatypeConstants",
			"JUNE"
		);
	}
	jint DatatypeConstants::LESSER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"javax.xml.datatype.DatatypeConstants",
			"LESSER"
		);
	}
	jint DatatypeConstants::MARCH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"javax.xml.datatype.DatatypeConstants",
			"MARCH"
		);
	}
	jint DatatypeConstants::MAX_TIMEZONE_OFFSET()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"javax.xml.datatype.DatatypeConstants",
			"MAX_TIMEZONE_OFFSET"
		);
	}
	jint DatatypeConstants::MAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"javax.xml.datatype.DatatypeConstants",
			"MAY"
		);
	}
	QAndroidJniObject DatatypeConstants::MINUTES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.datatype.DatatypeConstants",
			"MINUTES",
			"Ljavax/xml/datatype/DatatypeConstants$Field;"
		);
	}
	jint DatatypeConstants::MIN_TIMEZONE_OFFSET()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"javax.xml.datatype.DatatypeConstants",
			"MIN_TIMEZONE_OFFSET"
		);
	}
	QAndroidJniObject DatatypeConstants::MONTHS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.datatype.DatatypeConstants",
			"MONTHS",
			"Ljavax/xml/datatype/DatatypeConstants$Field;"
		);
	}
	jint DatatypeConstants::NOVEMBER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"javax.xml.datatype.DatatypeConstants",
			"NOVEMBER"
		);
	}
	jint DatatypeConstants::OCTOBER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"javax.xml.datatype.DatatypeConstants",
			"OCTOBER"
		);
	}
	QAndroidJniObject DatatypeConstants::SECONDS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.datatype.DatatypeConstants",
			"SECONDS",
			"Ljavax/xml/datatype/DatatypeConstants$Field;"
		);
	}
	jint DatatypeConstants::SEPTEMBER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"javax.xml.datatype.DatatypeConstants",
			"SEPTEMBER"
		);
	}
	QAndroidJniObject DatatypeConstants::TIME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.datatype.DatatypeConstants",
			"TIME",
			"Ljavax/xml/namespace/QName;"
		);
	}
	QAndroidJniObject DatatypeConstants::YEARS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.datatype.DatatypeConstants",
			"YEARS",
			"Ljavax/xml/datatype/DatatypeConstants$Field;"
		);
	}
	
	// Constructors
	void DatatypeConstants::__constructor()
	{
		__thiz = QAndroidJniObject(
			"javax.xml.datatype.DatatypeConstants",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::javax::xml::datatype

namespace javax::xml::datatype
{
	class DatatypeConstants : public __jni_impl::javax::xml::datatype::DatatypeConstants
	{
	public:
		DatatypeConstants(QAndroidJniObject obj) { __thiz = obj; }
		DatatypeConstants()
		{
			__constructor();
		}
	};
} // namespace javax::xml::datatype

