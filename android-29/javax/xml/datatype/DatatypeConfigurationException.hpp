#pragma once

#ifndef JAVAX_XML_DATATYPE_DATATYPECONFIGURATIONEXCEPTION
#define JAVAX_XML_DATATYPE_DATATYPECONFIGURATIONEXCEPTION

#include "../../../java/lang/Exception.hpp"


namespace __jni_impl::javax::xml::datatype
{
	class DatatypeConfigurationException : public __jni_impl::java::lang::Exception
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jthrowable arg0);
		void __constructor(jstring arg0, jthrowable arg1);
		void __constructor(jstring arg0);
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::javax::xml::datatype


namespace __jni_impl::javax::xml::datatype
{
	// Fields
	
	// Constructors
	void DatatypeConfigurationException::__constructor(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.datatype.DatatypeConfigurationException",
			"(Ljava/lang/Throwable;)V",
			arg0);
	}
	void DatatypeConfigurationException::__constructor(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.datatype.DatatypeConfigurationException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1);
	}
	void DatatypeConfigurationException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.datatype.DatatypeConfigurationException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void DatatypeConfigurationException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"javax.xml.datatype.DatatypeConfigurationException",
			"()V");
	}
	
	// Methods
} // namespace __jni_impl::javax::xml::datatype

namespace javax::xml::datatype
{
	class DatatypeConfigurationException : public __jni_impl::javax::xml::datatype::DatatypeConfigurationException
	{
	public:
		DatatypeConfigurationException(QAndroidJniObject obj) { __thiz = obj; }
		DatatypeConfigurationException(jthrowable arg0)
		{
			__constructor(
				arg0);
		}
		DatatypeConfigurationException(jstring arg0, jthrowable arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		DatatypeConfigurationException(jstring arg0)
		{
			__constructor(
				arg0);
		}
		DatatypeConfigurationException()
		{
			__constructor();
		}
	};
} // namespace javax::xml::datatype

#endif // JAVAX_XML_DATATYPE_DATATYPECONFIGURATIONEXCEPTION

