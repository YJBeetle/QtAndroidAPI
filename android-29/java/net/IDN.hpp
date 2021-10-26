#pragma once

#ifndef JAVA_NET_IDN
#define JAVA_NET_IDN

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::lang
{
	class StringBuffer;
}

namespace __jni_impl::java::net
{
	class IDN : public __JniBaseClass
	{
	public:
		// Fields
		static jint ALLOW_UNASSIGNED();
		static jint USE_STD3_ASCII_RULES();
		
		// Constructors
		void __constructor();
		
		// Methods
		static jstring toUnicode(jstring arg0);
		static jstring toUnicode(const QString &arg0);
		static jstring toUnicode(jstring arg0, jint arg1);
		static jstring toUnicode(const QString &arg0, jint arg1);
		static jstring toASCII(jstring arg0);
		static jstring toASCII(const QString &arg0);
		static jstring toASCII(jstring arg0, jint arg1);
		static jstring toASCII(const QString &arg0, jint arg1);
	};
} // namespace __jni_impl::java::net

#include "../lang/StringBuffer.hpp"

namespace __jni_impl::java::net
{
	// Fields
	jint IDN::ALLOW_UNASSIGNED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.net.IDN",
			"ALLOW_UNASSIGNED"
		);
	}
	jint IDN::USE_STD3_ASCII_RULES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.net.IDN",
			"USE_STD3_ASCII_RULES"
		);
	}
	
	// Constructors
	void IDN::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.net.IDN",
			"(V)V");
	}
	
	// Methods
	jstring IDN::toUnicode(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.net.IDN",
			"toUnicode",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring IDN::toUnicode(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.net.IDN",
			"toUnicode",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
	jstring IDN::toUnicode(jstring arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.net.IDN",
			"toUnicode",
			"(Ljava/lang/String;I)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring IDN::toUnicode(const QString &arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.net.IDN",
			"toUnicode",
			"(Ljava/lang/String;I)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		).object<jstring>();
	}
	jstring IDN::toASCII(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.net.IDN",
			"toASCII",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring IDN::toASCII(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.net.IDN",
			"toASCII",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
	jstring IDN::toASCII(jstring arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.net.IDN",
			"toASCII",
			"(Ljava/lang/String;I)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring IDN::toASCII(const QString &arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.net.IDN",
			"toASCII",
			"(Ljava/lang/String;I)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		).object<jstring>();
	}
} // namespace __jni_impl::java::net

namespace java::net
{
	class IDN : public __jni_impl::java::net::IDN
	{
	public:
		IDN(QAndroidJniObject obj) { __thiz = obj; }
		IDN()
		{
			__constructor();
		}
	};
} // namespace java::net

#endif // JAVA_NET_IDN

