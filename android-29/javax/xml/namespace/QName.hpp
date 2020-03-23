#pragma once

#ifndef JAVAX_XML_NAMESPACE_QNAME
#define JAVAX_XML_NAMESPACE_QNAME

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::javax::xml::namespace
{
	class QName : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		void __constructor(jstring arg0, jstring arg1, jstring arg2);
		void __constructor(jstring arg0, jstring arg1);
		
		// Methods
		jboolean equals(jobject arg0);
		QAndroidJniObject toString();
		jint hashCode();
		static QAndroidJniObject valueOf(jstring arg0);
		QAndroidJniObject getNamespaceURI();
		QAndroidJniObject getLocalPart();
		QAndroidJniObject getPrefix();
	};
} // namespace __jni_impl::javax::xml::namespace


namespace __jni_impl::javax::xml::namespace
{
	// Fields
	
	// Constructors
	void QName::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.namespace.QName",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void QName::__constructor(jstring arg0, jstring arg1, jstring arg2)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.namespace.QName",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2);
	}
	void QName::__constructor(jstring arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.namespace.QName",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1);
	}
	
	// Methods
	jboolean QName::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject QName::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint QName::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	QAndroidJniObject QName::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.xml.namespace.QName",
			"valueOf",
			"(Ljava/lang/String;)Ljavax/xml/namespace/QName;",
			arg0);
	}
	QAndroidJniObject QName::getNamespaceURI()
	{
		return __thiz.callObjectMethod(
			"getNamespaceURI",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject QName::getLocalPart()
	{
		return __thiz.callObjectMethod(
			"getLocalPart",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject QName::getPrefix()
	{
		return __thiz.callObjectMethod(
			"getPrefix",
			"()Ljava/lang/String;");
	}
} // namespace __jni_impl::javax::xml::namespace

namespace javax::xml::namespace
{
	class QName : public __jni_impl::javax::xml::namespace::QName
	{
	public:
		QName(QAndroidJniObject obj) { __thiz = obj; }
		QName(jstring arg0)
		{
			__constructor(
				arg0);
		}
		QName(jstring arg0, jstring arg1, jstring arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		QName(jstring arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace javax::xml::namespace

#endif // JAVAX_XML_NAMESPACE_QNAME

