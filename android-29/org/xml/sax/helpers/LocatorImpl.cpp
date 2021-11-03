#include "../../../../JString.hpp"
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
	jint LocatorImpl::getColumnNumber() const
	{
		return callMethod<jint>(
			"getColumnNumber",
			"()I"
		);
	}
	jint LocatorImpl::getLineNumber() const
	{
		return callMethod<jint>(
			"getLineNumber",
			"()I"
		);
	}
	JString LocatorImpl::getPublicId() const
	{
		return callObjectMethod(
			"getPublicId",
			"()Ljava/lang/String;"
		);
	}
	JString LocatorImpl::getSystemId() const
	{
		return callObjectMethod(
			"getSystemId",
			"()Ljava/lang/String;"
		);
	}
	void LocatorImpl::setColumnNumber(jint arg0) const
	{
		callMethod<void>(
			"setColumnNumber",
			"(I)V",
			arg0
		);
	}
	void LocatorImpl::setLineNumber(jint arg0) const
	{
		callMethod<void>(
			"setLineNumber",
			"(I)V",
			arg0
		);
	}
	void LocatorImpl::setPublicId(JString arg0) const
	{
		callMethod<void>(
			"setPublicId",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void LocatorImpl::setSystemId(JString arg0) const
	{
		callMethod<void>(
			"setSystemId",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
} // namespace org::xml::sax::helpers

