#include "./PasswordAuthentication.hpp"

namespace java::net
{
	// Fields
	
	PasswordAuthentication::PasswordAuthentication(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	PasswordAuthentication::PasswordAuthentication(jstring arg0, jcharArray arg1)
	{
		__thiz = QAndroidJniObject(
			"java.net.PasswordAuthentication",
			"(Ljava/lang/String;[C)V",
			arg0,
			arg1
		);
	}
	
	// Methods
	jcharArray PasswordAuthentication::getPassword()
	{
		return __thiz.callObjectMethod(
			"getPassword",
			"()[C"
		).object<jcharArray>();
	}
	jstring PasswordAuthentication::getUserName()
	{
		return __thiz.callObjectMethod(
			"getUserName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::net

