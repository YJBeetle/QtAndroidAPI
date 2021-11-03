#include "./UserPrincipalLookupService.hpp"

namespace java::nio::file::attribute
{
	// Fields
	
	// QJniObject forward
	UserPrincipalLookupService::UserPrincipalLookupService(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JObject UserPrincipalLookupService::lookupPrincipalByGroupName(jstring arg0)
	{
		return callObjectMethod(
			"lookupPrincipalByGroupName",
			"(Ljava/lang/String;)Ljava/nio/file/attribute/GroupPrincipal;",
			arg0
		);
	}
	JObject UserPrincipalLookupService::lookupPrincipalByName(jstring arg0)
	{
		return callObjectMethod(
			"lookupPrincipalByName",
			"(Ljava/lang/String;)Ljava/nio/file/attribute/UserPrincipal;",
			arg0
		);
	}
} // namespace java::nio::file::attribute

