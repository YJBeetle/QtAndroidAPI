#include "./AttributeListImpl.hpp"

namespace org::xml::sax::helpers
{
	// Fields
	
	AttributeListImpl::AttributeListImpl(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AttributeListImpl::AttributeListImpl()
	{
		__thiz = QAndroidJniObject(
			"org.xml.sax.helpers.AttributeListImpl",
			"()V"
		);
	}
	AttributeListImpl::AttributeListImpl(__JniBaseClass arg0)
	{
		__thiz = QAndroidJniObject(
			"org.xml.sax.helpers.AttributeListImpl",
			"(Lorg/xml/sax/AttributeList;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	void AttributeListImpl::addAttribute(jstring arg0, jstring arg1, jstring arg2)
	{
		__thiz.callMethod<void>(
			"addAttribute",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2
		);
	}
	void AttributeListImpl::clear()
	{
		__thiz.callMethod<void>(
			"clear",
			"()V"
		);
	}
	jint AttributeListImpl::getLength()
	{
		return __thiz.callMethod<jint>(
			"getLength",
			"()I"
		);
	}
	jstring AttributeListImpl::getName(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getName",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring AttributeListImpl::getType(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getType",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring AttributeListImpl::getType(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getType",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring AttributeListImpl::getValue(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getValue",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring AttributeListImpl::getValue(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getValue",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	void AttributeListImpl::removeAttribute(jstring arg0)
	{
		__thiz.callMethod<void>(
			"removeAttribute",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void AttributeListImpl::setAttributeList(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setAttributeList",
			"(Lorg/xml/sax/AttributeList;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace org::xml::sax::helpers

