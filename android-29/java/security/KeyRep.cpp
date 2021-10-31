#include "./KeyRep_Type.hpp"
#include "./KeyRep.hpp"

namespace java::security
{
	// Fields
	
	KeyRep::KeyRep(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	KeyRep::KeyRep(java::security::KeyRep_Type arg0, jstring arg1, jstring arg2, jbyteArray arg3)
	{
		__thiz = QAndroidJniObject(
			"java.security.KeyRep",
			"(Ljava/security/KeyRep$Type;Ljava/lang/String;Ljava/lang/String;[B)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3
		);
	}
	
	// Methods
} // namespace java::security

