#include "./QName.hpp"

namespace javax::xml::_namespace
{
	// Fields
	
	QName::QName(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	QName::QName(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.namespace.QName",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	QName::QName(jstring arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.namespace.QName",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	QName::QName(jstring arg0, jstring arg1, jstring arg2)
	{
		__thiz = QAndroidJniObject(
			"javax.xml.namespace.QName",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2
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
} // namespace javax::xml::_namespace

