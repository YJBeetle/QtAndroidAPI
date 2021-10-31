#include "./AttributeListImpl.hpp"

namespace org::xml::sax::helpers
{
	// Fields
	
	// QAndroidJniObject forward
	AttributeListImpl::AttributeListImpl(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	AttributeListImpl::AttributeListImpl()
		: __JniBaseClass(
			"org.xml.sax.helpers.AttributeListImpl",
			"()V"
		) {}
	AttributeListImpl::AttributeListImpl(__JniBaseClass arg0)
		: __JniBaseClass(
			"org.xml.sax.helpers.AttributeListImpl",
			"(Lorg/xml/sax/AttributeList;)V",
			arg0.object()
		) {}
	
	// Methods
	void AttributeListImpl::addAttribute(jstring arg0, jstring arg1, jstring arg2)
	{
		callMethod<void>(
			"addAttribute",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2
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
	jstring AttributeListImpl::getName(jint arg0)
	{
		return callObjectMethod(
			"getName",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring AttributeListImpl::getType(jint arg0)
	{
		return callObjectMethod(
			"getType",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring AttributeListImpl::getType(jstring arg0)
	{
		return callObjectMethod(
			"getType",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring AttributeListImpl::getValue(jint arg0)
	{
		return callObjectMethod(
			"getValue",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring AttributeListImpl::getValue(jstring arg0)
	{
		return callObjectMethod(
			"getValue",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	void AttributeListImpl::removeAttribute(jstring arg0)
	{
		callMethod<void>(
			"removeAttribute",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void AttributeListImpl::setAttributeList(__JniBaseClass arg0)
	{
		callMethod<void>(
			"setAttributeList",
			"(Lorg/xml/sax/AttributeList;)V",
			arg0.object()
		);
	}
} // namespace org::xml::sax::helpers

