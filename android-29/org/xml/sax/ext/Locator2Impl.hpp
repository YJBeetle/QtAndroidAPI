#pragma once

#ifndef ORG_XML_SAX_EXT_LOCATOR2IMPL
#define ORG_XML_SAX_EXT_LOCATOR2IMPL

#include "../../../../__JniBaseClass.hpp"
#include "../helpers/LocatorImpl.hpp"


namespace __jni_impl::org::xml::sax::ext
{
	class Locator2Impl : public __jni_impl::org::xml::sax::helpers::LocatorImpl
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::__JniBaseClass arg0);
		
		// Methods
		QAndroidJniObject getEncoding();
		void setEncoding(jstring arg0);
		QAndroidJniObject getXMLVersion();
		void setXMLVersion(jstring arg0);
	};
} // namespace __jni_impl::org::xml::sax::ext


namespace __jni_impl::org::xml::sax::ext
{
	// Fields
	
	// Constructors
	void Locator2Impl::__constructor()
	{
		__thiz = QAndroidJniObject(
			"org.xml.sax.ext.Locator2Impl",
			"()V");
	}
	void Locator2Impl::__constructor(__jni_impl::__JniBaseClass arg0)
	{
		__thiz = QAndroidJniObject(
			"org.xml.sax.ext.Locator2Impl",
			"(Lorg/xml/sax/Locator;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	QAndroidJniObject Locator2Impl::getEncoding()
	{
		return __thiz.callObjectMethod(
			"getEncoding",
			"()Ljava/lang/String;");
	}
	void Locator2Impl::setEncoding(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setEncoding",
			"(Ljava/lang/String;)V",
			arg0);
	}
	QAndroidJniObject Locator2Impl::getXMLVersion()
	{
		return __thiz.callObjectMethod(
			"getXMLVersion",
			"()Ljava/lang/String;");
	}
	void Locator2Impl::setXMLVersion(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setXMLVersion",
			"(Ljava/lang/String;)V",
			arg0);
	}
} // namespace __jni_impl::org::xml::sax::ext

namespace org::xml::sax::ext
{
	class Locator2Impl : public __jni_impl::org::xml::sax::ext::Locator2Impl
	{
	public:
		Locator2Impl(QAndroidJniObject obj) { __thiz = obj; }
		Locator2Impl()
		{
			__constructor();
		}
		Locator2Impl(__jni_impl::__JniBaseClass arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace org::xml::sax::ext

#endif // ORG_XML_SAX_EXT_LOCATOR2IMPL

