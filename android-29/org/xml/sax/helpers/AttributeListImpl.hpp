#pragma once

#include "../../../../__JniBaseClass.hpp"


namespace __jni_impl::org::xml::sax::helpers
{
	class AttributeListImpl : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::__JniBaseClass arg0);
		
		// Methods
		void addAttribute(jstring arg0, jstring arg1, jstring arg2);
		void addAttribute(const QString &arg0, const QString &arg1, const QString &arg2);
		void clear();
		jint getLength();
		jstring getName(jint arg0);
		jstring getType(jint arg0);
		jstring getType(jstring arg0);
		jstring getType(const QString &arg0);
		jstring getValue(jint arg0);
		jstring getValue(jstring arg0);
		jstring getValue(const QString &arg0);
		void removeAttribute(jstring arg0);
		void removeAttribute(const QString &arg0);
		void setAttributeList(__jni_impl::__JniBaseClass arg0);
	};
} // namespace __jni_impl::org::xml::sax::helpers


namespace __jni_impl::org::xml::sax::helpers
{
	// Fields
	
	// Constructors
	void AttributeListImpl::__constructor()
	{
		__thiz = QAndroidJniObject(
			"org.xml.sax.helpers.AttributeListImpl",
			"()V"
		);
	}
	void AttributeListImpl::__constructor(__jni_impl::__JniBaseClass arg0)
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
	void AttributeListImpl::setAttributeList(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setAttributeList",
			"(Lorg/xml/sax/AttributeList;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::org::xml::sax::helpers

namespace org::xml::sax::helpers
{
	class AttributeListImpl : public __jni_impl::org::xml::sax::helpers::AttributeListImpl
	{
	public:
		AttributeListImpl(QAndroidJniObject obj) { __thiz = obj; }
		AttributeListImpl()
		{
			__constructor();
		}
		AttributeListImpl(__jni_impl::__JniBaseClass arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace org::xml::sax::helpers

