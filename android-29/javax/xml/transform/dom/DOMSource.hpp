#pragma once

#ifndef JAVAX_XML_TRANSFORM_DOM_DOMSOURCE
#define JAVAX_XML_TRANSFORM_DOM_DOMSOURCE

#include "../../../../__JniBaseClass.hpp"


namespace __jni_impl::javax::xml::transform::dom
{
	class DOMSource : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject FEATURE();
		
		// Constructors
		void __constructor(__jni_impl::__JniBaseClass arg0, jstring arg1);
		void __constructor(__jni_impl::__JniBaseClass arg0);
		void __constructor();
		
		// Methods
		jboolean isEmpty();
		QAndroidJniObject getNode();
		void setNode(__jni_impl::__JniBaseClass arg0);
		void setSystemId(jstring arg0);
		QAndroidJniObject getSystemId();
	};
} // namespace __jni_impl::javax::xml::transform::dom


namespace __jni_impl::javax::xml::transform::dom
{
	// Fields
	QAndroidJniObject DOMSource::FEATURE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"javax.xml.transform.dom.DOMSource",
			"FEATURE",
			"Ljava/lang/String;");
	}
	
	// Constructors
	void DOMSource::__constructor(__jni_impl::__JniBaseClass arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.transform.dom.DOMSource",
			"(Lorg/w3c/dom/Node;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1);
	}
	void DOMSource::__constructor(__jni_impl::__JniBaseClass arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.transform.dom.DOMSource",
			"(Lorg/w3c/dom/Node;)V",
			arg0.__jniObject().object());
	}
	void DOMSource::__constructor()
	{
		__thiz = QAndroidJniObject(
			"javax.xml.transform.dom.DOMSource",
			"()V");
	}
	
	// Methods
	jboolean DOMSource::isEmpty()
	{
		return __thiz.callMethod<jboolean>(
			"isEmpty",
			"()Z");
	}
	QAndroidJniObject DOMSource::getNode()
	{
		return __thiz.callObjectMethod(
			"getNode",
			"()Lorg/w3c/dom/Node;");
	}
	void DOMSource::setNode(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setNode",
			"(Lorg/w3c/dom/Node;)V",
			arg0.__jniObject().object());
	}
	void DOMSource::setSystemId(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setSystemId",
			"(Ljava/lang/String;)V",
			arg0);
	}
	QAndroidJniObject DOMSource::getSystemId()
	{
		return __thiz.callObjectMethod(
			"getSystemId",
			"()Ljava/lang/String;");
	}
} // namespace __jni_impl::javax::xml::transform::dom

namespace javax::xml::transform::dom
{
	class DOMSource : public __jni_impl::javax::xml::transform::dom::DOMSource
	{
	public:
		DOMSource(QAndroidJniObject obj) { __thiz = obj; }
		DOMSource(__jni_impl::__JniBaseClass arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		DOMSource(__jni_impl::__JniBaseClass arg0)
		{
			__constructor(
				arg0);
		}
		DOMSource()
		{
			__constructor();
		}
	};
} // namespace javax::xml::transform::dom

#endif // JAVAX_XML_TRANSFORM_DOM_DOMSOURCE

