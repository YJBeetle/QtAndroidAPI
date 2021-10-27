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
		void __constructor(const QString &arg0);
		void __constructor(jstring arg0, jstring arg1);
		void __constructor(const QString &arg0, const QString &arg1);
		void __constructor(jstring arg0, jstring arg1, jstring arg2);
		void __constructor(const QString &arg0, const QString &arg1, const QString &arg2);
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		jboolean equals(jobject arg0);
		jstring getLocalPart();
		jstring getNamespaceURI();
		jstring getPrefix();
		jint hashCode();
		jstring toString();
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
			arg0
		);
	}
	void QName::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.namespace.QName",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void QName::__constructor(jstring arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.namespace.QName",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void QName::__constructor(const QString &arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.namespace.QName",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void QName::__constructor(jstring arg0, jstring arg1, jstring arg2)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.namespace.QName",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2
		);
	}
	void QName::__constructor(const QString &arg0, const QString &arg1, const QString &arg2)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.namespace.QName",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>()
		);
	}
	
	// Methods
	QAndroidJniObject QName::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.xml.namespace.QName",
			"valueOf",
			"(Ljava/lang/String;)Ljavax/xml/namespace/QName;",
			arg0
		);
	}
	QAndroidJniObject QName::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"javax.xml.namespace.QName",
			"valueOf",
			"(Ljava/lang/String;)Ljavax/xml/namespace/QName;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jboolean QName::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring QName::getLocalPart()
	{
		return __thiz.callObjectMethod(
			"getLocalPart",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring QName::getNamespaceURI()
	{
		return __thiz.callObjectMethod(
			"getNamespaceURI",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring QName::getPrefix()
	{
		return __thiz.callObjectMethod(
			"getPrefix",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint QName::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring QName::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
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
		QName(jstring arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		QName(jstring arg0, jstring arg1, jstring arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace javax::xml::namespace

#endif // JAVAX_XML_NAMESPACE_QNAME

