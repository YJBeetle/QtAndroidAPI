#pragma once

#ifndef ORG_XML_SAX_SAXPARSEEXCEPTION
#define ORG_XML_SAX_SAXPARSEEXCEPTION

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Exception.hpp"
#include "SAXException.hpp"

namespace __jni_impl::java::lang
{
	class Exception;
}

namespace __jni_impl::org::xml::sax
{
	class SAXParseException : public __jni_impl::org::xml::sax::SAXException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0, jstring arg1, jstring arg2, jint arg3, jint arg4, __jni_impl::java::lang::Exception arg5);
		void __constructor(jstring arg0, jstring arg1, jstring arg2, jint arg3, jint arg4);
		void __constructor(jstring arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::java::lang::Exception arg2);
		void __constructor(jstring arg0, __jni_impl::__JniBaseClass arg1);
		
		// Methods
		jstring toString();
		jint getLineNumber();
		jint getColumnNumber();
		jstring getSystemId();
		jstring getPublicId();
	};
} // namespace __jni_impl::org::xml::sax

#include "../../../java/lang/Exception.hpp"

namespace __jni_impl::org::xml::sax
{
	// Fields
	
	// Constructors
	void SAXParseException::__constructor(jstring arg0, jstring arg1, jstring arg2, jint arg3, jint arg4, __jni_impl::java::lang::Exception arg5)
	{
		__thiz = QAndroidJniObject(
			"org.xml.sax.SAXParseException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;IILjava/lang/Exception;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5.__jniObject().object());
	}
	void SAXParseException::__constructor(jstring arg0, jstring arg1, jstring arg2, jint arg3, jint arg4)
	{
		__thiz = QAndroidJniObject(
			"org.xml.sax.SAXParseException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;II)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4);
	}
	void SAXParseException::__constructor(jstring arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::java::lang::Exception arg2)
	{
		__thiz = QAndroidJniObject(
			"org.xml.sax.SAXParseException",
			"(Ljava/lang/String;Lorg/xml/sax/Locator;Ljava/lang/Exception;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	void SAXParseException::__constructor(jstring arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"org.xml.sax.SAXParseException",
			"(Ljava/lang/String;Lorg/xml/sax/Locator;)V",
			arg0,
			arg1.__jniObject().object());
	}
	
	// Methods
	jstring SAXParseException::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint SAXParseException::getLineNumber()
	{
		return __thiz.callMethod<jint>(
			"getLineNumber",
			"()I"
		);
	}
	jint SAXParseException::getColumnNumber()
	{
		return __thiz.callMethod<jint>(
			"getColumnNumber",
			"()I"
		);
	}
	jstring SAXParseException::getSystemId()
	{
		return __thiz.callObjectMethod(
			"getSystemId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SAXParseException::getPublicId()
	{
		return __thiz.callObjectMethod(
			"getPublicId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::org::xml::sax

namespace org::xml::sax
{
	class SAXParseException : public __jni_impl::org::xml::sax::SAXParseException
	{
	public:
		SAXParseException(QAndroidJniObject obj) { __thiz = obj; }
		SAXParseException(jstring arg0, jstring arg1, jstring arg2, jint arg3, jint arg4, __jni_impl::java::lang::Exception arg5)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4,
				arg5);
		}
		SAXParseException(jstring arg0, jstring arg1, jstring arg2, jint arg3, jint arg4)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4);
		}
		SAXParseException(jstring arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::java::lang::Exception arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		SAXParseException(jstring arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace org::xml::sax

#endif // ORG_XML_SAX_SAXPARSEEXCEPTION

