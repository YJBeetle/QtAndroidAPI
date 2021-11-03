#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./QName.hpp"

namespace javax::xml::_namespace
{
	// Fields
	
	// QJniObject forward
	QName::QName(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	QName::QName(JString arg0)
		: JObject(
			"javax.xml.namespace.QName",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	QName::QName(JString arg0, JString arg1)
		: JObject(
			"javax.xml.namespace.QName",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	QName::QName(JString arg0, JString arg1, JString arg2)
		: JObject(
			"javax.xml.namespace.QName",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>()
		) {}
	
	// Methods
	javax::xml::_namespace::QName QName::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"javax.xml.namespace.QName",
			"valueOf",
			"(Ljava/lang/String;)Ljavax/xml/namespace/QName;",
			arg0.object<jstring>()
		);
	}
	jboolean QName::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JString QName::getLocalPart() const
	{
		return callObjectMethod(
			"getLocalPart",
			"()Ljava/lang/String;"
		);
	}
	JString QName::getNamespaceURI() const
	{
		return callObjectMethod(
			"getNamespaceURI",
			"()Ljava/lang/String;"
		);
	}
	JString QName::getPrefix() const
	{
		return callObjectMethod(
			"getPrefix",
			"()Ljava/lang/String;"
		);
	}
	jint QName::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString QName::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace javax::xml::_namespace

