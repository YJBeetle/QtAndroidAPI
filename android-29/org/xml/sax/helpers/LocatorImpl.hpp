#pragma once

#ifndef ORG_XML_SAX_HELPERS_LOCATORIMPL
#define ORG_XML_SAX_HELPERS_LOCATORIMPL

#include "../../../../__JniBaseClass.hpp"


namespace __jni_impl::org::xml::sax::helpers
{
	class LocatorImpl : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::__JniBaseClass arg0);
		
		// Methods
		jint getLineNumber();
		QAndroidJniObject getSystemId();
		jint getColumnNumber();
		void setColumnNumber(jint arg0);
		void setLineNumber(jint arg0);
		void setSystemId(jstring arg0);
		void setPublicId(jstring arg0);
		QAndroidJniObject getPublicId();
	};
} // namespace __jni_impl::org::xml::sax::helpers


namespace __jni_impl::org::xml::sax::helpers
{
	// Fields
	
	// Constructors
	void LocatorImpl::__constructor()
	{
		__thiz = QAndroidJniObject(
			"org.xml.sax.helpers.LocatorImpl",
			"()V");
	}
	void LocatorImpl::__constructor(__jni_impl::__JniBaseClass arg0)
	{
		__thiz = QAndroidJniObject(
			"org.xml.sax.helpers.LocatorImpl",
			"(Lorg/xml/sax/Locator;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	jint LocatorImpl::getLineNumber()
	{
		return __thiz.callMethod<jint>(
			"getLineNumber",
			"()I");
	}
	QAndroidJniObject LocatorImpl::getSystemId()
	{
		return __thiz.callObjectMethod(
			"getSystemId",
			"()Ljava/lang/String;");
	}
	jint LocatorImpl::getColumnNumber()
	{
		return __thiz.callMethod<jint>(
			"getColumnNumber",
			"()I");
	}
	void LocatorImpl::setColumnNumber(jint arg0)
	{
		__thiz.callMethod<void>(
			"setColumnNumber",
			"(I)V",
			arg0);
	}
	void LocatorImpl::setLineNumber(jint arg0)
	{
		__thiz.callMethod<void>(
			"setLineNumber",
			"(I)V",
			arg0);
	}
	void LocatorImpl::setSystemId(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setSystemId",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void LocatorImpl::setPublicId(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setPublicId",
			"(Ljava/lang/String;)V",
			arg0);
	}
	QAndroidJniObject LocatorImpl::getPublicId()
	{
		return __thiz.callObjectMethod(
			"getPublicId",
			"()Ljava/lang/String;");
	}
} // namespace __jni_impl::org::xml::sax::helpers

namespace org::xml::sax::helpers
{
	class LocatorImpl : public __jni_impl::org::xml::sax::helpers::LocatorImpl
	{
	public:
		LocatorImpl(QAndroidJniObject obj) { __thiz = obj; }
		LocatorImpl()
		{
			__constructor();
		}
		LocatorImpl(__jni_impl::__JniBaseClass arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace org::xml::sax::helpers

#endif // ORG_XML_SAX_HELPERS_LOCATORIMPL

