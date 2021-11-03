#include "../../../../JString.hpp"
#include "./LocatorImpl.hpp"

namespace org::xml::sax::helpers
{
	// Fields
	
	// QAndroidJniObject forward
	LocatorImpl::LocatorImpl(QAndroidJniObject obj) : JObject(obj) {}
	
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
	JString LocatorImpl::getPublicId()
	{
		return callObjectMethod(
			"getPublicId",
			"()Ljava/lang/String;"
		);
	}
	JString LocatorImpl::getSystemId()
	{
		return callObjectMethod(
			"getSystemId",
			"()Ljava/lang/String;"
		);
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
	void LocatorImpl::setPublicId(JString arg0)
	{
		callMethod<void>(
			"setPublicId",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void LocatorImpl::setSystemId(JString arg0)
	{
		callMethod<void>(
			"setSystemId",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
} // namespace org::xml::sax::helpers

