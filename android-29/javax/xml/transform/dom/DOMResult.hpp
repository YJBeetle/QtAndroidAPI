#pragma once

#ifndef JAVAX_XML_TRANSFORM_DOM_DOMRESULT
#define JAVAX_XML_TRANSFORM_DOM_DOMRESULT

#include "../../../../__JniBaseClass.hpp"


namespace __jni_impl::javax::xml::transform::dom
{
	class DOMResult : public __JniBaseClass
	{
	public:
		// Fields
		static jstring FEATURE();
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::__JniBaseClass arg0);
		void __constructor(__jni_impl::__JniBaseClass arg0, jstring arg1);
		void __constructor(__jni_impl::__JniBaseClass arg0, const QString &arg1);
		void __constructor(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1);
		void __constructor(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1, jstring arg2);
		void __constructor(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1, const QString &arg2);
		
		// Methods
		QAndroidJniObject getNextSibling();
		QAndroidJniObject getNode();
		jstring getSystemId();
		void setNextSibling(__jni_impl::__JniBaseClass arg0);
		void setNode(__jni_impl::__JniBaseClass arg0);
		void setSystemId(jstring arg0);
		void setSystemId(const QString &arg0);
	};
} // namespace __jni_impl::javax::xml::transform::dom


namespace __jni_impl::javax::xml::transform::dom
{
	// Fields
	jstring DOMResult::FEATURE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.transform.dom.DOMResult",
			"FEATURE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void DOMResult::__constructor()
	{
		__thiz = QAndroidJniObject(
			"javax.xml.transform.dom.DOMResult",
			"()V"
		);
	}
	void DOMResult::__constructor(__jni_impl::__JniBaseClass arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.transform.dom.DOMResult",
			"(Lorg/w3c/dom/Node;)V",
			arg0.__jniObject().object()
		);
	}
	void DOMResult::__constructor(__jni_impl::__JniBaseClass arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.transform.dom.DOMResult",
			"(Lorg/w3c/dom/Node;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void DOMResult::__constructor(__jni_impl::__JniBaseClass arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.transform.dom.DOMResult",
			"(Lorg/w3c/dom/Node;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void DOMResult::__constructor(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.transform.dom.DOMResult",
			"(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void DOMResult::__constructor(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1, jstring arg2)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.transform.dom.DOMResult",
			"(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void DOMResult::__constructor(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1, const QString &arg2)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.transform.dom.DOMResult",
			"(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			QAndroidJniObject::fromString(arg2).object<jstring>()
		);
	}
	
	// Methods
	QAndroidJniObject DOMResult::getNextSibling()
	{
		return __thiz.callObjectMethod(
			"getNextSibling",
			"()Lorg/w3c/dom/Node;"
		);
	}
	QAndroidJniObject DOMResult::getNode()
	{
		return __thiz.callObjectMethod(
			"getNode",
			"()Lorg/w3c/dom/Node;"
		);
	}
	jstring DOMResult::getSystemId()
	{
		return __thiz.callObjectMethod(
			"getSystemId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void DOMResult::setNextSibling(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setNextSibling",
			"(Lorg/w3c/dom/Node;)V",
			arg0.__jniObject().object()
		);
	}
	void DOMResult::setNode(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setNode",
			"(Lorg/w3c/dom/Node;)V",
			arg0.__jniObject().object()
		);
	}
	void DOMResult::setSystemId(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setSystemId",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void DOMResult::setSystemId(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setSystemId",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace __jni_impl::javax::xml::transform::dom

namespace javax::xml::transform::dom
{
	class DOMResult : public __jni_impl::javax::xml::transform::dom::DOMResult
	{
	public:
		DOMResult(QAndroidJniObject obj) { __thiz = obj; }
		DOMResult()
		{
			__constructor();
		}
		DOMResult(__jni_impl::__JniBaseClass arg0)
		{
			__constructor(
				arg0);
		}
		DOMResult(__jni_impl::__JniBaseClass arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		DOMResult(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		DOMResult(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1, jstring arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace javax::xml::transform::dom

#endif // JAVAX_XML_TRANSFORM_DOM_DOMRESULT

