#pragma once

#ifndef JAVAX_XML_TRANSFORM_OUTPUTKEYS
#define JAVAX_XML_TRANSFORM_OUTPUTKEYS

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::javax::xml::transform
{
	class OutputKeys : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject METHOD();
		static QAndroidJniObject VERSION();
		static QAndroidJniObject ENCODING();
		static QAndroidJniObject OMIT_XML_DECLARATION();
		static QAndroidJniObject STANDALONE();
		static QAndroidJniObject DOCTYPE_PUBLIC();
		static QAndroidJniObject DOCTYPE_SYSTEM();
		static QAndroidJniObject CDATA_SECTION_ELEMENTS();
		static QAndroidJniObject INDENT();
		static QAndroidJniObject MEDIA_TYPE();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::javax::xml::transform


namespace __jni_impl::javax::xml::transform
{
	// Fields
	QAndroidJniObject OutputKeys::METHOD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.transform.OutputKeys",
			"METHOD",
			"Ljava/lang/String;");
	}
	QAndroidJniObject OutputKeys::VERSION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.transform.OutputKeys",
			"VERSION",
			"Ljava/lang/String;");
	}
	QAndroidJniObject OutputKeys::ENCODING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.transform.OutputKeys",
			"ENCODING",
			"Ljava/lang/String;");
	}
	QAndroidJniObject OutputKeys::OMIT_XML_DECLARATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.transform.OutputKeys",
			"OMIT_XML_DECLARATION",
			"Ljava/lang/String;");
	}
	QAndroidJniObject OutputKeys::STANDALONE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.transform.OutputKeys",
			"STANDALONE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject OutputKeys::DOCTYPE_PUBLIC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.transform.OutputKeys",
			"DOCTYPE_PUBLIC",
			"Ljava/lang/String;");
	}
	QAndroidJniObject OutputKeys::DOCTYPE_SYSTEM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.transform.OutputKeys",
			"DOCTYPE_SYSTEM",
			"Ljava/lang/String;");
	}
	QAndroidJniObject OutputKeys::CDATA_SECTION_ELEMENTS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.transform.OutputKeys",
			"CDATA_SECTION_ELEMENTS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject OutputKeys::INDENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.transform.OutputKeys",
			"INDENT",
			"Ljava/lang/String;");
	}
	QAndroidJniObject OutputKeys::MEDIA_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.transform.OutputKeys",
			"MEDIA_TYPE",
			"Ljava/lang/String;");
	}
	
	// Constructors
	void OutputKeys::__constructor()
	{
		__thiz = QAndroidJniObject(
			"javax.xml.transform.OutputKeys",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::javax::xml::transform

namespace javax::xml::transform
{
	class OutputKeys : public __jni_impl::javax::xml::transform::OutputKeys
	{
	public:
		OutputKeys(QAndroidJniObject obj) { __thiz = obj; }
		OutputKeys()
		{
			__constructor();
		}
	};
} // namespace javax::xml::transform

#endif // JAVAX_XML_TRANSFORM_OUTPUTKEYS

