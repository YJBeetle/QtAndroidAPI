#include "../../../../JArray.hpp"
#include "../../../../JString.hpp"
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
	void AttributesImpl::addAttribute(JString arg0, JString arg1, JString arg2, JString arg3, JString arg4)
	{
		callMethod<void>(
			"addAttribute",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object<jstring>(),
			arg4.object<jstring>()
		);
	}
	void AttributesImpl::clear()
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	jint AttributesImpl::getIndex(JString arg0)
	{
		return callMethod<jint>(
			"getIndex",
			"(Ljava/lang/String;)I",
			arg0.object<jstring>()
		);
	}
	jint AttributesImpl::getIndex(JString arg0, JString arg1)
	{
		return callMethod<jint>(
			"getIndex",
			"(Ljava/lang/String;Ljava/lang/String;)I",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	jint AttributesImpl::getLength()
	{
		return callMethod<jint>(
			"getLength",
			"()I"
		);
	}
	JString AttributesImpl::getLocalName(jint arg0)
	{
		return callObjectMethod(
			"getLocalName",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	JString AttributesImpl::getQName(jint arg0)
	{
		return callObjectMethod(
			"getQName",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	JString AttributesImpl::getType(jint arg0)
	{
		return callObjectMethod(
			"getType",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	JString AttributesImpl::getType(JString arg0)
	{
		return callObjectMethod(
			"getType",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	JString AttributesImpl::getType(JString arg0, JString arg1)
	{
		return callObjectMethod(
			"getType",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	JString AttributesImpl::getURI(jint arg0)
	{
		return callObjectMethod(
			"getURI",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	JString AttributesImpl::getValue(jint arg0)
	{
		return callObjectMethod(
			"getValue",
			"(I)Ljava/lang/String;",
			arg0
		);
	}
	JString AttributesImpl::getValue(JString arg0)
	{
		return callObjectMethod(
			"getValue",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	JString AttributesImpl::getValue(JString arg0, JString arg1)
	{
		return callObjectMethod(
			"getValue",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		);
	}
	void AttributesImpl::removeAttribute(jint arg0)
	{
		callMethod<void>(
			"removeAttribute",
			"(I)V",
			arg0
		);
	}
	void AttributesImpl::setAttribute(jint arg0, JString arg1, JString arg2, JString arg3, JString arg4, JString arg5)
	{
		callMethod<void>(
			"setAttribute",
			"(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object<jstring>(),
			arg4.object<jstring>(),
			arg5.object<jstring>()
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
	void AttributesImpl::setLocalName(jint arg0, JString arg1)
	{
		callMethod<void>(
			"setLocalName",
			"(ILjava/lang/String;)V",
			arg0,
			arg1.object<jstring>()
		);
	}
	void AttributesImpl::setQName(jint arg0, JString arg1)
	{
		callMethod<void>(
			"setQName",
			"(ILjava/lang/String;)V",
			arg0,
			arg1.object<jstring>()
		);
	}
	void AttributesImpl::setType(jint arg0, JString arg1)
	{
		callMethod<void>(
			"setType",
			"(ILjava/lang/String;)V",
			arg0,
			arg1.object<jstring>()
		);
	}
	void AttributesImpl::setURI(jint arg0, JString arg1)
	{
		callMethod<void>(
			"setURI",
			"(ILjava/lang/String;)V",
			arg0,
			arg1.object<jstring>()
		);
	}
	void AttributesImpl::setValue(jint arg0, JString arg1)
	{
		callMethod<void>(
			"setValue",
			"(ILjava/lang/String;)V",
			arg0,
			arg1.object<jstring>()
		);
	}
} // namespace org::xml::sax::helpers

