#pragma once

#ifndef JAVAX_XML_PARSERS_PARSERCONFIGURATIONEXCEPTION
#define JAVAX_XML_PARSERS_PARSERCONFIGURATIONEXCEPTION

#include "../../../java/lang/Exception.hpp"


namespace __jni_impl::javax::xml::parsers
{
	class ParserConfigurationException : public __jni_impl::java::lang::Exception
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jstring arg0);
		
		// Methods
	};
} // namespace __jni_impl::javax::xml::parsers


namespace __jni_impl::javax::xml::parsers
{
	// Fields
	
	// Constructors
	void ParserConfigurationException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"javax.xml.parsers.ParserConfigurationException",
			"()V");
	}
	void ParserConfigurationException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.parsers.ParserConfigurationException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	
	// Methods
} // namespace __jni_impl::javax::xml::parsers

namespace javax::xml::parsers
{
	class ParserConfigurationException : public __jni_impl::javax::xml::parsers::ParserConfigurationException
	{
	public:
		ParserConfigurationException(QAndroidJniObject obj) { __thiz = obj; }
		ParserConfigurationException()
		{
			__constructor();
		}
		ParserConfigurationException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace javax::xml::parsers

#endif // JAVAX_XML_PARSERS_PARSERCONFIGURATIONEXCEPTION

