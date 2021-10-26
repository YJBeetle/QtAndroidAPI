#pragma once

#ifndef JAVAX_XML_XPATH_XPATHFACTORYCONFIGURATIONEXCEPTION
#define JAVAX_XML_XPATH_XPATHFACTORYCONFIGURATIONEXCEPTION

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Exception.hpp"
#include "XPathException.hpp"


namespace __jni_impl::javax::xml::xpath
{
	class XPathFactoryConfigurationException : public __jni_impl::javax::xml::xpath::XPathException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		void __constructor(jthrowable arg0);
		
		// Methods
	};
} // namespace __jni_impl::javax::xml::xpath


namespace __jni_impl::javax::xml::xpath
{
	// Fields
	
	// Constructors
	void XPathFactoryConfigurationException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.xpath.XPathFactoryConfigurationException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void XPathFactoryConfigurationException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.xpath.XPathFactoryConfigurationException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void XPathFactoryConfigurationException::__constructor(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.xpath.XPathFactoryConfigurationException",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	
	// Methods
} // namespace __jni_impl::javax::xml::xpath

namespace javax::xml::xpath
{
	class XPathFactoryConfigurationException : public __jni_impl::javax::xml::xpath::XPathFactoryConfigurationException
	{
	public:
		XPathFactoryConfigurationException(QAndroidJniObject obj) { __thiz = obj; }
		XPathFactoryConfigurationException(jstring arg0)
		{
			__constructor(
				arg0);
		}
		XPathFactoryConfigurationException(jthrowable arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace javax::xml::xpath

#endif // JAVAX_XML_XPATH_XPATHFACTORYCONFIGURATIONEXCEPTION

