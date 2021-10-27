#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Exception.hpp"
#include "XPathException.hpp"


namespace __jni_impl::javax::xml::xpath
{
	class XPathExpressionException : public __jni_impl::javax::xml::xpath::XPathException
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
	void XPathExpressionException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.xpath.XPathExpressionException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void XPathExpressionException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.xpath.XPathExpressionException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void XPathExpressionException::__constructor(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.xpath.XPathExpressionException",
			"(Ljava/lang/Throwable;)V",
			arg0
		);
	}
	
	// Methods
} // namespace __jni_impl::javax::xml::xpath

namespace javax::xml::xpath
{
	class XPathExpressionException : public __jni_impl::javax::xml::xpath::XPathExpressionException
	{
	public:
		XPathExpressionException(QAndroidJniObject obj) { __thiz = obj; }
		XPathExpressionException(jstring arg0)
		{
			__constructor(
				arg0);
		}
		XPathExpressionException(jthrowable arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace javax::xml::xpath

