#include "./NamespaceSupport.hpp"

namespace org::xml::sax::helpers
{
	// Fields
	jstring NamespaceSupport::NSDECL()
	{
		return getStaticObjectField(
			"org.xml.sax.helpers.NamespaceSupport",
			"NSDECL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring NamespaceSupport::XMLNS()
	{
		return getStaticObjectField(
			"org.xml.sax.helpers.NamespaceSupport",
			"XMLNS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QJniObject forward
	NamespaceSupport::NamespaceSupport(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	NamespaceSupport::NamespaceSupport()
		: JObject(
			"org.xml.sax.helpers.NamespaceSupport",
			"()V"
		) {}
	
	// Methods
	jboolean NamespaceSupport::declarePrefix(jstring arg0, jstring arg1)
	{
		return callMethod<jboolean>(
			"declarePrefix",
			"(Ljava/lang/String;Ljava/lang/String;)Z",
			arg0,
			arg1
		);
	}
	JObject NamespaceSupport::getDeclaredPrefixes()
	{
		return callObjectMethod(
			"getDeclaredPrefixes",
			"()Ljava/util/Enumeration;"
		);
	}
	jstring NamespaceSupport::getPrefix(jstring arg0)
	{
		return callObjectMethod(
			"getPrefix",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	JObject NamespaceSupport::getPrefixes()
	{
		return callObjectMethod(
			"getPrefixes",
			"()Ljava/util/Enumeration;"
		);
	}
	JObject NamespaceSupport::getPrefixes(jstring arg0)
	{
		return callObjectMethod(
			"getPrefixes",
			"(Ljava/lang/String;)Ljava/util/Enumeration;",
			arg0
		);
	}
	jstring NamespaceSupport::getURI(jstring arg0)
	{
		return callObjectMethod(
			"getURI",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jboolean NamespaceSupport::isNamespaceDeclUris()
	{
		return callMethod<jboolean>(
			"isNamespaceDeclUris",
			"()Z"
		);
	}
	void NamespaceSupport::popContext()
	{
		callMethod<void>(
			"popContext",
			"()V"
		);
	}
	jarray NamespaceSupport::processName(jstring arg0, jarray arg1, jboolean arg2)
	{
		return callObjectMethod(
			"processName",
			"(Ljava/lang/String;[Ljava/lang/String;Z)[Ljava/lang/String;",
			arg0,
			arg1,
			arg2
		).object<jarray>();
	}
	void NamespaceSupport::pushContext()
	{
		callMethod<void>(
			"pushContext",
			"()V"
		);
	}
	void NamespaceSupport::reset()
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	void NamespaceSupport::setNamespaceDeclUris(jboolean arg0)
	{
		callMethod<void>(
			"setNamespaceDeclUris",
			"(Z)V",
			arg0
		);
	}
} // namespace org::xml::sax::helpers

