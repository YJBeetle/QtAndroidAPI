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
		static jstring METHOD();
		static jstring VERSION();
		static jstring ENCODING();
		static jstring OMIT_XML_DECLARATION();
		static jstring STANDALONE();
		static jstring DOCTYPE_PUBLIC();
		static jstring DOCTYPE_SYSTEM();
		static jstring CDATA_SECTION_ELEMENTS();
		static jstring INDENT();
		static jstring MEDIA_TYPE();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::javax::xml::transform


namespace __jni_impl::javax::xml::transform
{
	// Fields
	jstring OutputKeys::METHOD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.transform.OutputKeys",
			"METHOD",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring OutputKeys::VERSION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.transform.OutputKeys",
			"VERSION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring OutputKeys::ENCODING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.transform.OutputKeys",
			"ENCODING",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring OutputKeys::OMIT_XML_DECLARATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.transform.OutputKeys",
			"OMIT_XML_DECLARATION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring OutputKeys::STANDALONE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.transform.OutputKeys",
			"STANDALONE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring OutputKeys::DOCTYPE_PUBLIC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.transform.OutputKeys",
			"DOCTYPE_PUBLIC",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring OutputKeys::DOCTYPE_SYSTEM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.transform.OutputKeys",
			"DOCTYPE_SYSTEM",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring OutputKeys::CDATA_SECTION_ELEMENTS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.transform.OutputKeys",
			"CDATA_SECTION_ELEMENTS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring OutputKeys::INDENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.transform.OutputKeys",
			"INDENT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring OutputKeys::MEDIA_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.transform.OutputKeys",
			"MEDIA_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
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

