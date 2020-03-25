#pragma once

#ifndef JAVAX_XML_XPATH_XPATHFUNCTIONEXCEPTION
#define JAVAX_XML_XPATH_XPATHFUNCTIONEXCEPTION

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Exception.hpp"
#include "XPathException.hpp"
#include "XPathExpressionException.hpp"


namespace __jni_impl::javax::xml::xpath
{
	class XPathFunctionException : public __jni_impl::javax::xml::xpath::XPathExpressionException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		void __constructor(jthrowable arg0);
		
		// Methods
	};
} // namespace __jni_impl::javax::xml::xpath


namespace __jni_impl::javax::xml::xpath
{
	// Fields
	
	// Constructors
	void XPathFunctionException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.xpath.XPathFunctionException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void XPathFunctionException::__constructor(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.xpath.XPathFunctionException",
			"(Ljava/lang/Throwable;)V",
			arg0);
	}
	
	// Methods
} // namespace __jni_impl::javax::xml::xpath

namespace javax::xml::xpath
{
	class XPathFunctionException : public __jni_impl::javax::xml::xpath::XPathFunctionException
	{
	public:
		XPathFunctionException(QAndroidJniObject obj) { __thiz = obj; }
		XPathFunctionException(jstring arg0)
		{
			__constructor(
				arg0);
		}
		XPathFunctionException(jthrowable arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace javax::xml::xpath

#endif // JAVAX_XML_XPATH_XPATHFUNCTIONEXCEPTION

