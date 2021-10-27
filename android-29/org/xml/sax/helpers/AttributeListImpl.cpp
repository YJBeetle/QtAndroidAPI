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
	AttributeListImpl::AttributeListImpl(__JniBaseClass &arg0)
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
	void AttributeListImpl::addAttribute(const QString &arg0, const QString &arg1, const QString &arg2)
	{
		__thiz.callMethod<void>(
			"addAttribute",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>()
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
	jstring AttributeListImpl::getType(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getType",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
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
	jstring AttributeListImpl::getValue(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getValue",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
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
	void AttributeListImpl::removeAttribute(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"removeAttribute",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
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

