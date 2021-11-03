#include "./AttributesImpl.hpp"

namespace org::xml::sax::helpers
{
	// Fields
	
	// QAndroidJniObject forward
	AttributesImpl::AttributesImpl(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	AttributesImpl::AttributesImpl()
		: JObject(
			"org.xml.sax.helpers.AttributesImpl",
			"()V"
		) {}
	AttributesImpl::AttributesImpl(JObject arg0)
		: JObject(
			"org.xml.sax.helpers.AttributesImpl",
			"(Lorg/xml/sax/Attributes;)V",
			arg0.object()
		) {}
	
	// Methods
	void AttributesImpl::addAttribute(jstring arg0, jstring arg1, jstring arg2, jstring arg3, jstring arg4)
	{
		callMethod<void>(
			"addAttribute",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	void AttributesImpl::clear()
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	jint AttributesImpl::getIndex(jstring arg0)
	{
		return callMethod<jint>(
			"getIndex",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
	jint AttributesImpl::getIndex(jstring arg0, jstring arg1)
	{
		return callMethod<jint>(
			"getIndex",
			"(Ljava/lang/String;Ljava/lang/String;)I",
			arg0,
			arg1
		);
	}
	jint AttributesImpl::getLength()
	{
		return callMethod<jint>(
			"getLength",
			"()I"
		);
	}
	jstring AttributesImpl::getLocalName(jint arg0)
	{
		return callObjectMethod(
			"getLocalName",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring AttributesImpl::getQName(jint arg0)
	{
		return callObjectMethod(
			"getQName",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring AttributesImpl::getType(jint arg0)
	{
		return callObjectMethod(
			"getType",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring AttributesImpl::getType(jstring arg0)
	{
		return callObjectMethod(
			"getType",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring AttributesImpl::getType(jstring arg0, jstring arg1)
	{
		return callObjectMethod(
			"getType",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring AttributesImpl::getURI(jint arg0)
	{
		return callObjectMethod(
			"getURI",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring AttributesImpl::getValue(jint arg0)
	{
		return callObjectMethod(
			"getValue",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring AttributesImpl::getValue(jstring arg0)
	{
		return callObjectMethod(
			"getValue",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring AttributesImpl::getValue(jstring arg0, jstring arg1)
	{
		return callObjectMethod(
			"getValue",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	void AttributesImpl::removeAttribute(jint arg0)
	{
		callMethod<void>(
			"removeAttribute",
			"(I)V",
			arg0
		);
	}
	void AttributesImpl::setAttribute(jint arg0, jstring arg1, jstring arg2, jstring arg3, jstring arg4, jstring arg5)
	{
		callMethod<void>(
			"setAttribute",
			"(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	void AttributesImpl::setAttributes(JObject arg0)
	{
		callMethod<void>(
			"setAttributes",
			"(Lorg/xml/sax/Attributes;)V",
			arg0.object()
		);
	}
	void AttributesImpl::setLocalName(jint arg0, jstring arg1)
	{
		callMethod<void>(
			"setLocalName",
			"(ILjava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void AttributesImpl::setQName(jint arg0, jstring arg1)
	{
		callMethod<void>(
			"setQName",
			"(ILjava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void AttributesImpl::setType(jint arg0, jstring arg1)
	{
		callMethod<void>(
			"setType",
			"(ILjava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void AttributesImpl::setURI(jint arg0, jstring arg1)
	{
		callMethod<void>(
			"setURI",
			"(ILjava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void AttributesImpl::setValue(jint arg0, jstring arg1)
	{
		callMethod<void>(
			"setValue",
			"(ILjava/lang/String;)V",
			arg0,
			arg1
		);
	}
} // namespace org::xml::sax::helpers

