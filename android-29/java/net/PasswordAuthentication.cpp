#include "../../JCharArray.hpp"
#include "../../JString.hpp"
#include "./PasswordAuthentication.hpp"

namespace java::net
{
	// Fields
	
	// QAndroidJniObject forward
	PasswordAuthentication::PasswordAuthentication(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	PasswordAuthentication::PasswordAuthentication(JString arg0, JCharArray arg1)
		: JObject(
			"java.net.PasswordAuthentication",
			"(Ljava/lang/String;[C)V",
			arg0.object<jstring>(),
			arg1.object<jcharArray>()
		) {}
	
	// Methods
	JCharArray PasswordAuthentication::getPassword() const
	{
		return callObjectMethod(
			"getPassword",
			"()[C"
		);
	}
	JString PasswordAuthentication::getUserName() const
	{
		return callObjectMethod(
			"getUserName",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::net

