#include "../../../../JString.hpp"
#include "./AttributeListImpl.hpp"

namespace org::xml::sax::helpers
{
	// Fields
	
	// QAndroidJniObject forward
	AttributeListImpl::AttributeListImpl(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	AttributeListImpl::AttributeListImpl()
		: JObject(
			"org.xml.sax.helpers.AttributeListImpl",
			"()V"
		) {}
	AttributeListImpl::AttributeListImpl(JObject arg0)
		: JObject(
			"org.xml.sax.helpers.AttributeListImpl",
			"(Lorg/xml/sax/AttributeList;)V",
			arg0.object()
		) {}
	
	// Methods
	void AttributeListImpl::addAttribute(JString arg0, JString arg1, JString arg2)
	{
		callMethod<void>(
			"addAttribute",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		);
	}
	void AttributeListImpl::clear()
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	jint AttributeListImpl::getLength()
	{
		return callMethod<jint>(
			"getLength",
			"()I"
		);
	}
	JString AttributeListImpl::getName(jint arg0)
	{
		return callObjectMethod(
			"getName",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	JString AttributeListImpl::getType(jint arg0)
	{
		return callObjectMethod(
			"getType",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	JString AttributeListImpl::getType(JString arg0)
	{
		return callObjectMethod(
			"getType",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	JString AttributeListImpl::getValue(jint arg0)
	{
		return callObjectMethod(
			"getValue",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	JString AttributeListImpl::getValue(JString arg0)
	{
		return callObjectMethod(
			"getValue",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	void AttributeListImpl::removeAttribute(JString arg0)
	{
		callMethod<void>(
			"removeAttribute",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void AttributeListImpl::setAttributeList(JObject arg0)
	{
		callMethod<void>(
			"setAttributeList",
			"(Lorg/xml/sax/AttributeList;)V",
			arg0.object()
		);
	}
} // namespace org::xml::sax::helpers

