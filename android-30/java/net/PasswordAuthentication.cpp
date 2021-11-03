#include "../../JCharArray.hpp"
#include "../../JString.hpp"
#include "./PasswordAuthentication.hpp"

namespace java::net
{
	// Fields
	
	// QJniObject forward
	PasswordAuthentication::PasswordAuthentication(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	PasswordAuthentication::PasswordAuthentication(JString arg0, JCharArray arg1)
		: JObject(
			"java.net.PasswordAuthentication",
			"(Ljava/lang/String;[C)V",
			arg0.object<jstring>(),
			arg1.object<jcharArray>()
		) {}
	
	// Methods
	JCharArray PasswordAuthentication::getPassword()
	{
		return callObjectMethod(
			"getPassword",
			"()[C"
		);
	}
	JString PasswordAuthentication::getUserName()
	{
		return callObjectMethod(
			"getUserName",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::net

