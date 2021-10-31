#include "./UserPrincipalLookupService.hpp"

namespace java::nio::file::attribute
{
	// Fields
	
	// QAndroidJniObject forward
	UserPrincipalLookupService::UserPrincipalLookupService(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	__JniBaseClass UserPrincipalLookupService::lookupPrincipalByGroupName(jstring arg0)
	{
		return callObjectMethod(
			"lookupPrincipalByGroupName",
			"(Ljava/lang/String;)Ljava/nio/file/attribute/GroupPrincipal;",
			arg0
		);
	}
	__JniBaseClass UserPrincipalLookupService::lookupPrincipalByName(jstring arg0)
	{
		return callObjectMethod(
			"lookupPrincipalByName",
			"(Ljava/lang/String;)Ljava/nio/file/attribute/UserPrincipal;",
			arg0
		);
	}
} // namespace java::nio::file::attribute

