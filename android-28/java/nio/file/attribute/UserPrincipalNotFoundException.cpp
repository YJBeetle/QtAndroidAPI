#include "../../../../JString.hpp"
#include "./UserPrincipalNotFoundException.hpp"

namespace java::nio::file::attribute
{
	// Fields
	
	// Constructors
	UserPrincipalNotFoundException::UserPrincipalNotFoundException(JString arg0)
		: java::io::IOException(
			"java.nio.file.attribute.UserPrincipalNotFoundException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	JString UserPrincipalNotFoundException::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::nio::file::attribute

