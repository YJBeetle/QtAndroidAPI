#include "./PasswordAuthentication.hpp"

namespace java::net
{
	// Fields
	
	// QJniObject forward
	PasswordAuthentication::PasswordAuthentication(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	PasswordAuthentication::PasswordAuthentication(jstring arg0, jcharArray arg1)
		: __JniBaseClass(
			"java.net.PasswordAuthentication",
			"(Ljava/lang/String;[C)V",
			arg0,
			arg1
		) {}
	
	// Methods
	jcharArray PasswordAuthentication::getPassword()
	{
		return callObjectMethod(
			"getPassword",
			"()[C"
		).object<jcharArray>();
	}
	jstring PasswordAuthentication::getUserName()
	{
		return callObjectMethod(
			"getUserName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::net

