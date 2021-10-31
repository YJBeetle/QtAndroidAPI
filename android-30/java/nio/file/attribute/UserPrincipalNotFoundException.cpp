#include "./UserPrincipalNotFoundException.hpp"

namespace java::nio::file::attribute
{
	// Fields
	
	// QJniObject forward
	UserPrincipalNotFoundException::UserPrincipalNotFoundException(QJniObject obj) : java::io::IOException(obj) {}
	
	// Constructors
	UserPrincipalNotFoundException::UserPrincipalNotFoundException(jstring arg0)
		: java::io::IOException(
			"java.nio.file.attribute.UserPrincipalNotFoundException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
	jstring UserPrincipalNotFoundException::getName()
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::nio::file::attribute

