#include "./QName.hpp"

namespace javax::xml::_namespace
{
	// Fields
	
	// QJniObject forward
	QName::QName(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	QName::QName(jstring arg0)
		: JObject(
			"javax.xml.namespace.QName",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	QName::QName(jstring arg0, jstring arg1)
		: JObject(
			"javax.xml.namespace.QName",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		) {}
	QName::QName(jstring arg0, jstring arg1, jstring arg2)
		: JObject(
			"javax.xml.namespace.QName",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
	javax::xml::_namespace::QName QName::valueOf(jstring arg0)
	{
		return callStaticObjectMethod(
			"javax.xml.namespace.QName",
			"valueOf",
			"(Ljava/lang/String;)Ljavax/xml/namespace/QName;",
			arg0
		);
	}
	jboolean QName::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring QName::getLocalPart()
	{
		return callObjectMethod(
			"getLocalPart",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring QName::getNamespaceURI()
	{
		return callObjectMethod(
			"getNamespaceURI",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring QName::getPrefix()
	{
		return callObjectMethod(
			"getPrefix",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint QName::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring QName::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace javax::xml::_namespace

