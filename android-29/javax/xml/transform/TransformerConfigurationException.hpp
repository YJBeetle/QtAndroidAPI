#pragma once

#ifndef JAVAX_XML_TRANSFORM_TRANSFORMERCONFIGURATIONEXCEPTION
#define JAVAX_XML_TRANSFORM_TRANSFORMERCONFIGURATIONEXCEPTION

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Exception.hpp"
#include "TransformerException.hpp"


namespace __jni_impl::javax::xml::transform
{
	class TransformerConfigurationException : public __jni_impl::javax::xml::transform::TransformerException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0, __jni_impl::__JniBaseClass arg1, jthrowable arg2);
		void __constructor(jstring arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(jstring arg0, jthrowable arg1);
		void __constructor(jthrowable arg0);
		void __constructor(jstring arg0);
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::javax::xml::transform


namespace __jni_impl::javax::xml::transform
{
	// Fields
	
	// Constructors
	void TransformerConfigurationException::__constructor(jstring arg0, __jni_impl::__JniBaseClass arg1, jthrowable arg2)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.transform.TransformerConfigurationException",
			"(Ljava/lang/String;Ljavax/xml/transform/SourceLocator;Ljava/lang/Throwable;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2);
	}
	void TransformerConfigurationException::__constructor(jstring arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.transform.TransformerConfigurationException",
			"(Ljava/lang/String;Ljavax/xml/transform/SourceLocator;)V",
			arg0,
			arg1.__jniObject().object());
	}
	void TransformerConfigurationException::__constructor(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.transform.TransformerConfigurationException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1);
	}
	void TransformerConfigurationException::__constructor(jthrowable arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.transform.TransformerConfigurationException",
			"(Ljava/lang/Throwable;)V",
			arg0);
	}
	void TransformerConfigurationException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.transform.TransformerConfigurationException",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void TransformerConfigurationException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"javax.xml.transform.TransformerConfigurationException",
			"()V");
	}
	
	// Methods
} // namespace __jni_impl::javax::xml::transform

namespace javax::xml::transform
{
	class TransformerConfigurationException : public __jni_impl::javax::xml::transform::TransformerConfigurationException
	{
	public:
		TransformerConfigurationException(QAndroidJniObject obj) { __thiz = obj; }
		TransformerConfigurationException(jstring arg0, __jni_impl::__JniBaseClass arg1, jthrowable arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		TransformerConfigurationException(jstring arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		TransformerConfigurationException(jstring arg0, jthrowable arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		TransformerConfigurationException(jthrowable arg0)
		{
			__constructor(
				arg0);
		}
		TransformerConfigurationException(jstring arg0)
		{
			__constructor(
				arg0);
		}
		TransformerConfigurationException()
		{
			__constructor();
		}
	};
} // namespace javax::xml::transform

#endif // JAVAX_XML_TRANSFORM_TRANSFORMERCONFIGURATIONEXCEPTION

