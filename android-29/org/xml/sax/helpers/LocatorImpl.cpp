#include "./LocatorImpl.hpp"

namespace org::xml::sax::helpers
{
	// Fields
	
	// QJniObject forward
	LocatorImpl::LocatorImpl(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	LocatorImpl::LocatorImpl()
		: JObject(
			"org.xml.sax.helpers.LocatorImpl",
			"()V"
		) {}
	LocatorImpl::LocatorImpl(JObject arg0)
		: JObject(
			"org.xml.sax.helpers.LocatorImpl",
			"(Lorg/xml/sax/Locator;)V",
			arg0.object()
		) {}
	
	// Methods
	jint LocatorImpl::getColumnNumber()
	{
		return callMethod<jint>(
			"getColumnNumber",
			"()I"
		);
	}
	jint LocatorImpl::getLineNumber()
	{
		return callMethod<jint>(
			"getLineNumber",
			"()I"
		);
	}
	jstring LocatorImpl::getPublicId()
	{
		return callObjectMethod(
			"getPublicId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring LocatorImpl::getSystemId()
	{
		return callObjectMethod(
			"getSystemId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void LocatorImpl::setColumnNumber(jint arg0)
	{
		callMethod<void>(
			"setColumnNumber",
			"(I)V",
			arg0
		);
	}
	void LocatorImpl::setLineNumber(jint arg0)
	{
		callMethod<void>(
			"setLineNumber",
			"(I)V",
			arg0
		);
	}
	void LocatorImpl::setPublicId(jstring arg0)
	{
		callMethod<void>(
			"setPublicId",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void LocatorImpl::setSystemId(jstring arg0)
	{
		callMethod<void>(
			"setSystemId",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
} // namespace org::xml::sax::helpers

