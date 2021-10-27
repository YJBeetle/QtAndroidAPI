#include "./NamespaceSupport.hpp"

namespace org::xml::sax::helpers
{
	// Fields
	jstring NamespaceSupport::NSDECL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"org.xml.sax.helpers.NamespaceSupport",
			"NSDECL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring NamespaceSupport::XMLNS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"org.xml.sax.helpers.NamespaceSupport",
			"XMLNS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	NamespaceSupport::NamespaceSupport(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	NamespaceSupport::NamespaceSupport()
	{
		__thiz = QAndroidJniObject(
			"org.xml.sax.helpers.NamespaceSupport",
			"()V"
		);
	}
	
	// Methods
	jboolean NamespaceSupport::declarePrefix(jstring arg0, jstring arg1)
	{
		return __thiz.callMethod<jboolean>(
			"declarePrefix",
			"(Ljava/lang/String;Ljava/lang/String;)Z",
			arg0,
			arg1
		);
	}
	jboolean NamespaceSupport::declarePrefix(const QString &arg0, const QString &arg1)
	{
		return __thiz.callMethod<jboolean>(
			"declarePrefix",
			"(Ljava/lang/String;Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	QAndroidJniObject NamespaceSupport::getDeclaredPrefixes()
	{
		return __thiz.callObjectMethod(
			"getDeclaredPrefixes",
			"()Ljava/util/Enumeration;"
		);
	}
	jstring NamespaceSupport::getPrefix(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getPrefix",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring NamespaceSupport::getPrefix(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getPrefix",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
	QAndroidJniObject NamespaceSupport::getPrefixes()
	{
		return __thiz.callObjectMethod(
			"getPrefixes",
			"()Ljava/util/Enumeration;"
		);
	}
	QAndroidJniObject NamespaceSupport::getPrefixes(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getPrefixes",
			"(Ljava/lang/String;)Ljava/util/Enumeration;",
			arg0
		);
	}
	QAndroidJniObject NamespaceSupport::getPrefixes(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getPrefixes",
			"(Ljava/lang/String;)Ljava/util/Enumeration;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jstring NamespaceSupport::getURI(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getURI",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring NamespaceSupport::getURI(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getURI",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
	jboolean NamespaceSupport::isNamespaceDeclUris()
	{
		return __thiz.callMethod<jboolean>(
			"isNamespaceDeclUris",
			"()Z"
		);
	}
	void NamespaceSupport::popContext()
	{
		__thiz.callMethod<void>(
			"popContext",
			"()V"
		);
	}
	jarray NamespaceSupport::processName(jstring arg0, jarray arg1, jboolean arg2)
	{
		return __thiz.callObjectMethod(
			"processName",
			"(Ljava/lang/String;[Ljava/lang/String;Z)[Ljava/lang/String;",
			arg0,
			arg1,
			arg2
		).object<jarray>();
	}
	jarray NamespaceSupport::processName(const QString &arg0, jarray arg1, jboolean arg2)
	{
		return __thiz.callObjectMethod(
			"processName",
			"(Ljava/lang/String;[Ljava/lang/String;Z)[Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2
		).object<jarray>();
	}
	void NamespaceSupport::pushContext()
	{
		__thiz.callMethod<void>(
			"pushContext",
			"()V"
		);
	}
	void NamespaceSupport::reset()
	{
		__thiz.callMethod<void>(
			"reset",
			"()V"
		);
	}
	void NamespaceSupport::setNamespaceDeclUris(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setNamespaceDeclUris",
			"(Z)V",
			arg0
		);
	}
} // namespace org::xml::sax::helpers

