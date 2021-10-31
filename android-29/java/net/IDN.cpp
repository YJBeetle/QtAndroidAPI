#include "../lang/StringBuffer.hpp"
#include "./IDN.hpp"

namespace java::net
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
	
	IDN::IDN(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jstring IDN::toASCII(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.net.IDN",
			"toASCII",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
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
	jstring IDN::toUnicode(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.net.IDN",
			"toUnicode",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
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
} // namespace java::net

