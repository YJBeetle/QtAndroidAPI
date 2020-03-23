#pragma once

#ifndef ORG_XML_SAX_SAXNOTRECOGNIZEDEXCEPTION
#define ORG_XML_SAX_SAXNOTRECOGNIZEDEXCEPTION

#include "SAXException.hpp"


namespace __jni_impl::org::xml::sax
{
	class SAXNotRecognizedException : public __jni_impl::org::xml::sax::SAXException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jstring arg0);
		
		// Methods
	};
} // namespace __jni_impl::org::xml::sax


namespace __jni_impl::org::xml::sax
{
	// Fields
	
	// Constructors
	void SAXNotRecognizedException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"org.xml.sax.SAXNotRecognizedException",
			"()V");
	}
	void SAXNotRecognizedException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"org.xml.sax.SAXNotRecognizedException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	
	// Methods
} // namespace __jni_impl::org::xml::sax

namespace org::xml::sax
{
	class SAXNotRecognizedException : public __jni_impl::org::xml::sax::SAXNotRecognizedException
	{
	public:
		SAXNotRecognizedException(QAndroidJniObject obj) { __thiz = obj; }
		SAXNotRecognizedException()
		{
			__constructor();
		}
		SAXNotRecognizedException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace org::xml::sax

#endif // ORG_XML_SAX_SAXNOTRECOGNIZEDEXCEPTION

