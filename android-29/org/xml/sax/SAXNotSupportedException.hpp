#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Exception.hpp"
#include "./SAXException.hpp"


namespace __jni_impl::org::xml::sax
{
	class SAXNotSupportedException : public __jni_impl::org::xml::sax::SAXException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		
		// Methods
	};
} // namespace __jni_impl::org::xml::sax


namespace __jni_impl::org::xml::sax
{
	// Fields
	
	// Constructors
	void SAXNotSupportedException::__constructor()
	{
		__thiz = QAndroidJniObject(
			"org.xml.sax.SAXNotSupportedException",
			"()V"
		);
	}
	void SAXNotSupportedException::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"org.xml.sax.SAXNotSupportedException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void SAXNotSupportedException::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"org.xml.sax.SAXNotSupportedException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace __jni_impl::org::xml::sax

namespace org::xml::sax
{
	class SAXNotSupportedException : public __jni_impl::org::xml::sax::SAXNotSupportedException
	{
	public:
		SAXNotSupportedException(QAndroidJniObject obj) { __thiz = obj; }
		SAXNotSupportedException()
		{
			__constructor();
		}
		SAXNotSupportedException(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace org::xml::sax

