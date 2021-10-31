#include "./AttributesImpl.hpp"

namespace org::xml::sax::helpers
{
	// Fields
	
	AttributesImpl::AttributesImpl(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	AttributesImpl::AttributesImpl()
	{
		__thiz = QAndroidJniObject(
			"org.xml.sax.helpers.AttributesImpl",
			"()V"
		);
	}
	AttributesImpl::AttributesImpl(__JniBaseClass arg0)
	{
		__thiz = QAndroidJniObject(
			"org.xml.sax.helpers.AttributesImpl",
			"(Lorg/xml/sax/Attributes;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	void AttributesImpl::addAttribute(jstring arg0, jstring arg1, jstring arg2, jstring arg3, jstring arg4)
	{
		__thiz.callMethod<void>(
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
		__thiz.callMethod<void>(
			"clear",
			"()V"
		);
	}
	jint AttributesImpl::getIndex(jstring arg0)
	{
		return __thiz.callMethod<jint>(
			"getIndex",
			"(Ljava/lang/String;)I",
			arg0
		);
	}
	jint AttributesImpl::getIndex(jstring arg0, jstring arg1)
	{
		return __thiz.callMethod<jint>(
			"getIndex",
			"(Ljava/lang/String;Ljava/lang/String;)I",
			arg0,
			arg1
		);
	}
	jint AttributesImpl::getLength()
	{
		return __thiz.callMethod<jint>(
			"getLength",
			"()I"
		);
	}
	jstring AttributesImpl::getLocalName(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getLocalName",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring AttributesImpl::getQName(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getQName",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring AttributesImpl::getType(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getType",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring AttributesImpl::getType(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getType",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring AttributesImpl::getType(jstring arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"getType",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring AttributesImpl::getURI(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getURI",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring AttributesImpl::getValue(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getValue",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring AttributesImpl::getValue(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getValue",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring AttributesImpl::getValue(jstring arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"getValue",
			"(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	void AttributesImpl::removeAttribute(jint arg0)
	{
		__thiz.callMethod<void>(
			"removeAttribute",
			"(I)V",
			arg0
		);
	}
	void AttributesImpl::setAttribute(jint arg0, jstring arg1, jstring arg2, jstring arg3, jstring arg4, jstring arg5)
	{
		__thiz.callMethod<void>(
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
	void AttributesImpl::setAttributes(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setAttributes",
			"(Lorg/xml/sax/Attributes;)V",
			arg0.__jniObject().object()
		);
	}
	void AttributesImpl::setLocalName(jint arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"setLocalName",
			"(ILjava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void AttributesImpl::setQName(jint arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"setQName",
			"(ILjava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void AttributesImpl::setType(jint arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"setType",
			"(ILjava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void AttributesImpl::setURI(jint arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"setURI",
			"(ILjava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void AttributesImpl::setValue(jint arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"setValue",
			"(ILjava/lang/String;)V",
			arg0,
			arg1
		);
	}
} // namespace org::xml::sax::helpers

