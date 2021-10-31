#include "./KeyRep_Type.hpp"
#include "./KeyRep.hpp"

namespace java::security
{
	// Fields
	
	// QJniObject forward
	KeyRep::KeyRep(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	KeyRep::KeyRep(java::security::KeyRep_Type arg0, jstring arg1, jstring arg2, jbyteArray arg3)
		: __JniBaseClass(
			"java.security.KeyRep",
			"(Ljava/security/KeyRep$Type;Ljava/lang/String;Ljava/lang/String;[B)V",
			arg0.object(),
			arg1,
			arg2,
			arg3
		) {}
	
	// Methods
} // namespace java::security

