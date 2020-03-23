#pragma once

#ifndef JAVAX_XML_DATATYPE_DATATYPECONSTANTS
#define JAVAX_XML_DATATYPE_DATATYPECONSTANTS

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
		static jint JANUARY();
		static jint FEBRUARY();
		static jint MARCH();
		static jint APRIL();
		static jint MAY();
		static jint JUNE();
		static jint JULY();
		static jint AUGUST();
		static jint SEPTEMBER();
		static jint OCTOBER();
		static jint NOVEMBER();
		static jint DECEMBER();
		static jint LESSER();
		static jint EQUAL();
		static jint GREATER();
		static jint INDETERMINATE();
		static jint FIELD_UNDEFINED();
		static QAndroidJniObject YEARS();
		static QAndroidJniObject MONTHS();
		static QAndroidJniObject DAYS();
		static QAndroidJniObject HOURS();
		static QAndroidJniObject MINUTES();
		static QAndroidJniObject SECONDS();
		static QAndroidJniObject DATETIME();
		static QAndroidJniObject TIME();
		static QAndroidJniObject DATE();
		static QAndroidJniObject GYEARMONTH();
		static QAndroidJniObject GMONTHDAY();
		static QAndroidJniObject GYEAR();
		static QAndroidJniObject GMONTH();
		static QAndroidJniObject GDAY();
		static QAndroidJniObject DURATION();
		static QAndroidJniObject DURATION_DAYTIME();
		static QAndroidJniObject DURATION_YEARMONTH();
		static jint MAX_TIMEZONE_OFFSET();
		static jint MIN_TIMEZONE_OFFSET();
		
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
	jint DatatypeConstants::JANUARY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"javax.xml.datatype.DatatypeConstants",
			"JANUARY");
	}
	jint DatatypeConstants::FEBRUARY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"javax.xml.datatype.DatatypeConstants",
			"FEBRUARY");
	}
	jint DatatypeConstants::MARCH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"javax.xml.datatype.DatatypeConstants",
			"MARCH");
	}
	jint DatatypeConstants::APRIL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"javax.xml.datatype.DatatypeConstants",
			"APRIL");
	}
	jint DatatypeConstants::MAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"javax.xml.datatype.DatatypeConstants",
			"MAY");
	}
	jint DatatypeConstants::JUNE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"javax.xml.datatype.DatatypeConstants",
			"JUNE");
	}
	jint DatatypeConstants::JULY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"javax.xml.datatype.DatatypeConstants",
			"JULY");
	}
	jint DatatypeConstants::AUGUST()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"javax.xml.datatype.DatatypeConstants",
			"AUGUST");
	}
	jint DatatypeConstants::SEPTEMBER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"javax.xml.datatype.DatatypeConstants",
			"SEPTEMBER");
	}
	jint DatatypeConstants::OCTOBER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"javax.xml.datatype.DatatypeConstants",
			"OCTOBER");
	}
	jint DatatypeConstants::NOVEMBER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"javax.xml.datatype.DatatypeConstants",
			"NOVEMBER");
	}
	jint DatatypeConstants::DECEMBER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"javax.xml.datatype.DatatypeConstants",
			"DECEMBER");
	}
	jint DatatypeConstants::LESSER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"javax.xml.datatype.DatatypeConstants",
			"LESSER");
	}
	jint DatatypeConstants::EQUAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"javax.xml.datatype.DatatypeConstants",
			"EQUAL");
	}
	jint DatatypeConstants::GREATER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"javax.xml.datatype.DatatypeConstants",
			"GREATER");
	}
	jint DatatypeConstants::INDETERMINATE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"javax.xml.datatype.DatatypeConstants",
			"INDETERMINATE");
	}
	jint DatatypeConstants::FIELD_UNDEFINED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"javax.xml.datatype.DatatypeConstants",
			"FIELD_UNDEFINED");
	}
	QAndroidJniObject DatatypeConstants::YEARS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.datatype.DatatypeConstants",
			"YEARS",
			"Ljavax/xml/datatype/DatatypeConstants$Field;");
	}
	QAndroidJniObject DatatypeConstants::MONTHS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.datatype.DatatypeConstants",
			"MONTHS",
			"Ljavax/xml/datatype/DatatypeConstants$Field;");
	}
	QAndroidJniObject DatatypeConstants::DAYS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.datatype.DatatypeConstants",
			"DAYS",
			"Ljavax/xml/datatype/DatatypeConstants$Field;");
	}
	QAndroidJniObject DatatypeConstants::HOURS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.datatype.DatatypeConstants",
			"HOURS",
			"Ljavax/xml/datatype/DatatypeConstants$Field;");
	}
	QAndroidJniObject DatatypeConstants::MINUTES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.datatype.DatatypeConstants",
			"MINUTES",
			"Ljavax/xml/datatype/DatatypeConstants$Field;");
	}
	QAndroidJniObject DatatypeConstants::SECONDS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.datatype.DatatypeConstants",
			"SECONDS",
			"Ljavax/xml/datatype/DatatypeConstants$Field;");
	}
	QAndroidJniObject DatatypeConstants::DATETIME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.datatype.DatatypeConstants",
			"DATETIME",
			"Ljavax/xml/namespace/QName;");
	}
	QAndroidJniObject DatatypeConstants::TIME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.datatype.DatatypeConstants",
			"TIME",
			"Ljavax/xml/namespace/QName;");
	}
	QAndroidJniObject DatatypeConstants::DATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.datatype.DatatypeConstants",
			"DATE",
			"Ljavax/xml/namespace/QName;");
	}
	QAndroidJniObject DatatypeConstants::GYEARMONTH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.datatype.DatatypeConstants",
			"GYEARMONTH",
			"Ljavax/xml/namespace/QName;");
	}
	QAndroidJniObject DatatypeConstants::GMONTHDAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.datatype.DatatypeConstants",
			"GMONTHDAY",
			"Ljavax/xml/namespace/QName;");
	}
	QAndroidJniObject DatatypeConstants::GYEAR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.datatype.DatatypeConstants",
			"GYEAR",
			"Ljavax/xml/namespace/QName;");
	}
	QAndroidJniObject DatatypeConstants::GMONTH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.datatype.DatatypeConstants",
			"GMONTH",
			"Ljavax/xml/namespace/QName;");
	}
	QAndroidJniObject DatatypeConstants::GDAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.datatype.DatatypeConstants",
			"GDAY",
			"Ljavax/xml/namespace/QName;");
	}
	QAndroidJniObject DatatypeConstants::DURATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.datatype.DatatypeConstants",
			"DURATION",
			"Ljavax/xml/namespace/QName;");
	}
	QAndroidJniObject DatatypeConstants::DURATION_DAYTIME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.datatype.DatatypeConstants",
			"DURATION_DAYTIME",
			"Ljavax/xml/namespace/QName;");
	}
	QAndroidJniObject DatatypeConstants::DURATION_YEARMONTH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.datatype.DatatypeConstants",
			"DURATION_YEARMONTH",
			"Ljavax/xml/namespace/QName;");
	}
	jint DatatypeConstants::MAX_TIMEZONE_OFFSET()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"javax.xml.datatype.DatatypeConstants",
			"MAX_TIMEZONE_OFFSET");
	}
	jint DatatypeConstants::MIN_TIMEZONE_OFFSET()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"javax.xml.datatype.DatatypeConstants",
			"MIN_TIMEZONE_OFFSET");
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

#endif // JAVAX_XML_DATATYPE_DATATYPECONSTANTS

