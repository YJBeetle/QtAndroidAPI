#pragma once

#ifndef ORG_XML_SAX_HELPERS_ATTRIBUTESIMPL
#define ORG_XML_SAX_HELPERS_ATTRIBUTESIMPL

#include "../../../../__JniBaseClass.hpp"


namespace __jni_impl::org::xml::sax::helpers
{
	class AttributesImpl : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::__JniBaseClass arg0);
		
		// Methods
		jint getLength();
		void clear();
		jstring getValue(jstring arg0);
		jstring getValue(jstring arg0, jstring arg1);
		jstring getValue(jint arg0);
		void setValue(jint arg0, jstring arg1);
		jstring getType(jstring arg0);
		jstring getType(jstring arg0, jstring arg1);
		jstring getType(jint arg0);
		jint getIndex(jstring arg0);
		jint getIndex(jstring arg0, jstring arg1);
		void setAttribute(jint arg0, jstring arg1, jstring arg2, jstring arg3, jstring arg4, jstring arg5);
		void addAttribute(jstring arg0, jstring arg1, jstring arg2, jstring arg3, jstring arg4);
		void setURI(jint arg0, jstring arg1);
		void setLocalName(jint arg0, jstring arg1);
		void setQName(jint arg0, jstring arg1);
		void setType(jint arg0, jstring arg1);
		jstring getURI(jint arg0);
		jstring getQName(jint arg0);
		jstring getLocalName(jint arg0);
		void setAttributes(__jni_impl::__JniBaseClass arg0);
		void removeAttribute(jint arg0);
	};
} // namespace __jni_impl::org::xml::sax::helpers


namespace __jni_impl::org::xml::sax::helpers
{
	// Fields
	
	// Constructors
	void AttributesImpl::__constructor()
	{
		__thiz = QAndroidJniObject(
			"org.xml.sax.helpers.AttributesImpl",
			"()V");
	}
	void AttributesImpl::__constructor(__jni_impl::__JniBaseClass arg0)
	{
		__thiz = QAndroidJniObject(
			"org.xml.sax.helpers.AttributesImpl",
			"(Lorg/xml/sax/Attributes;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	jint AttributesImpl::getLength()
	{
		return __thiz.callMethod<jint>(
			"getLength",
			"()I"
		);
	}
	void AttributesImpl::clear()
	{
		__thiz.callMethod<void>(
			"clear",
			"()V"
		);
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
	jstring AttributesImpl::getValue(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getValue",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
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
	jstring AttributesImpl::getType(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getType",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
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
	void AttributesImpl::setURI(jint arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"setURI",
			"(ILjava/lang/String;)V",
			arg0,
			arg1
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
	jstring AttributesImpl::getURI(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getURI",
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
	jstring AttributesImpl::getLocalName(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getLocalName",
			"(I)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	void AttributesImpl::setAttributes(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setAttributes",
			"(Lorg/xml/sax/Attributes;)V",
			arg0.__jniObject().object()
		);
	}
	void AttributesImpl::removeAttribute(jint arg0)
	{
		__thiz.callMethod<void>(
			"removeAttribute",
			"(I)V",
			arg0
		);
	}
} // namespace __jni_impl::org::xml::sax::helpers

namespace org::xml::sax::helpers
{
	class AttributesImpl : public __jni_impl::org::xml::sax::helpers::AttributesImpl
	{
	public:
		AttributesImpl(QAndroidJniObject obj) { __thiz = obj; }
		AttributesImpl()
		{
			__constructor();
		}
		AttributesImpl(__jni_impl::__JniBaseClass arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace org::xml::sax::helpers

#endif // ORG_XML_SAX_HELPERS_ATTRIBUTESIMPL

