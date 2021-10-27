#pragma once

#include "../../../../__JniBaseClass.hpp"
#include "../helpers/DefaultHandler.hpp"

namespace __jni_impl::org::xml::sax
{
	class InputSource;
}

namespace __jni_impl::org::xml::sax::ext
{
	class DefaultHandler2 : public __jni_impl::org::xml::sax::helpers::DefaultHandler
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void attributeDecl(jstring arg0, jstring arg1, jstring arg2, jstring arg3, jstring arg4);
		void attributeDecl(const QString &arg0, const QString &arg1, const QString &arg2, const QString &arg3, const QString &arg4);
		void comment(jcharArray arg0, jint arg1, jint arg2);
		void elementDecl(jstring arg0, jstring arg1);
		void elementDecl(const QString &arg0, const QString &arg1);
		void endCDATA();
		void endDTD();
		void endEntity(jstring arg0);
		void endEntity(const QString &arg0);
		void externalEntityDecl(jstring arg0, jstring arg1, jstring arg2);
		void externalEntityDecl(const QString &arg0, const QString &arg1, const QString &arg2);
		QAndroidJniObject getExternalSubset(jstring arg0, jstring arg1);
		QAndroidJniObject getExternalSubset(const QString &arg0, const QString &arg1);
		void internalEntityDecl(jstring arg0, jstring arg1);
		void internalEntityDecl(const QString &arg0, const QString &arg1);
		QAndroidJniObject resolveEntity(jstring arg0, jstring arg1);
		QAndroidJniObject resolveEntity(const QString &arg0, const QString &arg1);
		QAndroidJniObject resolveEntity(jstring arg0, jstring arg1, jstring arg2, jstring arg3);
		QAndroidJniObject resolveEntity(const QString &arg0, const QString &arg1, const QString &arg2, const QString &arg3);
		void startCDATA();
		void startDTD(jstring arg0, jstring arg1, jstring arg2);
		void startDTD(const QString &arg0, const QString &arg1, const QString &arg2);
		void startEntity(jstring arg0);
		void startEntity(const QString &arg0);
	};
} // namespace __jni_impl::org::xml::sax::ext

#include "../InputSource.hpp"

namespace __jni_impl::org::xml::sax::ext
{
	// Fields
	
	// Constructors
	void DefaultHandler2::__constructor()
	{
		__thiz = QAndroidJniObject(
			"org.xml.sax.ext.DefaultHandler2",
			"()V"
		);
	}
	
	// Methods
	void DefaultHandler2::attributeDecl(jstring arg0, jstring arg1, jstring arg2, jstring arg3, jstring arg4)
	{
		__thiz.callMethod<void>(
			"attributeDecl",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	void DefaultHandler2::attributeDecl(const QString &arg0, const QString &arg1, const QString &arg2, const QString &arg3, const QString &arg4)
	{
		__thiz.callMethod<void>(
			"attributeDecl",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			QAndroidJniObject::fromString(arg3).object<jstring>(),
			QAndroidJniObject::fromString(arg4).object<jstring>()
		);
	}
	void DefaultHandler2::comment(jcharArray arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"comment",
			"([CII)V",
			arg0,
			arg1,
			arg2
		);
	}
	void DefaultHandler2::elementDecl(jstring arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"elementDecl",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void DefaultHandler2::elementDecl(const QString &arg0, const QString &arg1)
	{
		__thiz.callMethod<void>(
			"elementDecl",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void DefaultHandler2::endCDATA()
	{
		__thiz.callMethod<void>(
			"endCDATA",
			"()V"
		);
	}
	void DefaultHandler2::endDTD()
	{
		__thiz.callMethod<void>(
			"endDTD",
			"()V"
		);
	}
	void DefaultHandler2::endEntity(jstring arg0)
	{
		__thiz.callMethod<void>(
			"endEntity",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void DefaultHandler2::endEntity(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"endEntity",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void DefaultHandler2::externalEntityDecl(jstring arg0, jstring arg1, jstring arg2)
	{
		__thiz.callMethod<void>(
			"externalEntityDecl",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2
		);
	}
	void DefaultHandler2::externalEntityDecl(const QString &arg0, const QString &arg1, const QString &arg2)
	{
		__thiz.callMethod<void>(
			"externalEntityDecl",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>()
		);
	}
	QAndroidJniObject DefaultHandler2::getExternalSubset(jstring arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"getExternalSubset",
			"(Ljava/lang/String;Ljava/lang/String;)Lorg/xml/sax/InputSource;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject DefaultHandler2::getExternalSubset(const QString &arg0, const QString &arg1)
	{
		return __thiz.callObjectMethod(
			"getExternalSubset",
			"(Ljava/lang/String;Ljava/lang/String;)Lorg/xml/sax/InputSource;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void DefaultHandler2::internalEntityDecl(jstring arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"internalEntityDecl",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void DefaultHandler2::internalEntityDecl(const QString &arg0, const QString &arg1)
	{
		__thiz.callMethod<void>(
			"internalEntityDecl",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	QAndroidJniObject DefaultHandler2::resolveEntity(jstring arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"resolveEntity",
			"(Ljava/lang/String;Ljava/lang/String;)Lorg/xml/sax/InputSource;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject DefaultHandler2::resolveEntity(const QString &arg0, const QString &arg1)
	{
		return __thiz.callObjectMethod(
			"resolveEntity",
			"(Ljava/lang/String;Ljava/lang/String;)Lorg/xml/sax/InputSource;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	QAndroidJniObject DefaultHandler2::resolveEntity(jstring arg0, jstring arg1, jstring arg2, jstring arg3)
	{
		return __thiz.callObjectMethod(
			"resolveEntity",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lorg/xml/sax/InputSource;",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	QAndroidJniObject DefaultHandler2::resolveEntity(const QString &arg0, const QString &arg1, const QString &arg2, const QString &arg3)
	{
		return __thiz.callObjectMethod(
			"resolveEntity",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lorg/xml/sax/InputSource;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			QAndroidJniObject::fromString(arg3).object<jstring>()
		);
	}
	void DefaultHandler2::startCDATA()
	{
		__thiz.callMethod<void>(
			"startCDATA",
			"()V"
		);
	}
	void DefaultHandler2::startDTD(jstring arg0, jstring arg1, jstring arg2)
	{
		__thiz.callMethod<void>(
			"startDTD",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2
		);
	}
	void DefaultHandler2::startDTD(const QString &arg0, const QString &arg1, const QString &arg2)
	{
		__thiz.callMethod<void>(
			"startDTD",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>()
		);
	}
	void DefaultHandler2::startEntity(jstring arg0)
	{
		__thiz.callMethod<void>(
			"startEntity",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void DefaultHandler2::startEntity(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"startEntity",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace __jni_impl::org::xml::sax::ext

namespace org::xml::sax::ext
{
	class DefaultHandler2 : public __jni_impl::org::xml::sax::ext::DefaultHandler2
	{
	public:
		DefaultHandler2(QAndroidJniObject obj) { __thiz = obj; }
		DefaultHandler2()
		{
			__constructor();
		}
	};
} // namespace org::xml::sax::ext

