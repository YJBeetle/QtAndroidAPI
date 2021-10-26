#pragma once

#ifndef ORG_XML_SAX_HELPERS_NAMESPACESUPPORT
#define ORG_XML_SAX_HELPERS_NAMESPACESUPPORT

#include "../../../../__JniBaseClass.hpp"


namespace __jni_impl::org::xml::sax::helpers
{
	class NamespaceSupport : public __JniBaseClass
	{
	public:
		// Fields
		static jstring XMLNS();
		static jstring NSDECL();
		
		// Constructors
		void __constructor();
		
		// Methods
		void reset();
		jstring getURI(jstring arg0);
		jstring getURI(const QString &arg0);
		QAndroidJniObject getPrefixes(jstring arg0);
		QAndroidJniObject getPrefixes(const QString &arg0);
		QAndroidJniObject getPrefixes();
		jarray processName(jstring arg0, jarray arg1, jboolean arg2);
		jarray processName(const QString &arg0, jarray arg1, jboolean arg2);
		jboolean declarePrefix(jstring arg0, jstring arg1);
		jboolean declarePrefix(const QString &arg0, const QString &arg1);
		QAndroidJniObject getDeclaredPrefixes();
		void pushContext();
		void popContext();
		void setNamespaceDeclUris(jboolean arg0);
		jboolean isNamespaceDeclUris();
		jstring getPrefix(jstring arg0);
		jstring getPrefix(const QString &arg0);
	};
} // namespace __jni_impl::org::xml::sax::helpers


namespace __jni_impl::org::xml::sax::helpers
{
	// Fields
	jstring NamespaceSupport::XMLNS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"org.xml.sax.helpers.NamespaceSupport",
			"XMLNS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring NamespaceSupport::NSDECL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"org.xml.sax.helpers.NamespaceSupport",
			"NSDECL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void NamespaceSupport::__constructor()
	{
		__thiz = QAndroidJniObject(
			"org.xml.sax.helpers.NamespaceSupport",
			"()V"
		);
	}
	
	// Methods
	void NamespaceSupport::reset()
	{
		__thiz.callMethod<void>(
			"reset",
			"()V"
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
	QAndroidJniObject NamespaceSupport::getPrefixes()
	{
		return __thiz.callObjectMethod(
			"getPrefixes",
			"()Ljava/util/Enumeration;"
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
	void NamespaceSupport::pushContext()
	{
		__thiz.callMethod<void>(
			"pushContext",
			"()V"
		);
	}
	void NamespaceSupport::popContext()
	{
		__thiz.callMethod<void>(
			"popContext",
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
	jboolean NamespaceSupport::isNamespaceDeclUris()
	{
		return __thiz.callMethod<jboolean>(
			"isNamespaceDeclUris",
			"()Z"
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
} // namespace __jni_impl::org::xml::sax::helpers

namespace org::xml::sax::helpers
{
	class NamespaceSupport : public __jni_impl::org::xml::sax::helpers::NamespaceSupport
	{
	public:
		NamespaceSupport(QAndroidJniObject obj) { __thiz = obj; }
		NamespaceSupport()
		{
			__constructor();
		}
	};
} // namespace org::xml::sax::helpers

#endif // ORG_XML_SAX_HELPERS_NAMESPACESUPPORT

