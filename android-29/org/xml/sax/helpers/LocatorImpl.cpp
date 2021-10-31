#include "./LocatorImpl.hpp"

namespace org::xml::sax::helpers
{
	// Fields
	
	LocatorImpl::LocatorImpl(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	LocatorImpl::LocatorImpl()
	{
		__thiz = QAndroidJniObject(
			"org.xml.sax.helpers.LocatorImpl",
			"()V"
		);
	}
	LocatorImpl::LocatorImpl(__JniBaseClass arg0)
	{
		__thiz = QAndroidJniObject(
			"org.xml.sax.helpers.LocatorImpl",
			"(Lorg/xml/sax/Locator;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	jint LocatorImpl::getColumnNumber()
	{
		return __thiz.callMethod<jint>(
			"getColumnNumber",
			"()I"
		);
	}
	jint LocatorImpl::getLineNumber()
	{
		return __thiz.callMethod<jint>(
			"getLineNumber",
			"()I"
		);
	}
	jstring LocatorImpl::getPublicId()
	{
		return __thiz.callObjectMethod(
			"getPublicId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring LocatorImpl::getSystemId()
	{
		return __thiz.callObjectMethod(
			"getSystemId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void LocatorImpl::setColumnNumber(jint arg0)
	{
		__thiz.callMethod<void>(
			"setColumnNumber",
			"(I)V",
			arg0
		);
	}
	void LocatorImpl::setLineNumber(jint arg0)
	{
		__thiz.callMethod<void>(
			"setLineNumber",
			"(I)V",
			arg0
		);
	}
	void LocatorImpl::setPublicId(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setPublicId",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void LocatorImpl::setSystemId(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setSystemId",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
} // namespace org::xml::sax::helpers

