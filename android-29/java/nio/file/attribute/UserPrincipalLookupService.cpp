#include "./UserPrincipalLookupService.hpp"

namespace java::nio::file::attribute
{
	// Fields
	
	UserPrincipalLookupService::UserPrincipalLookupService(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject UserPrincipalLookupService::lookupPrincipalByGroupName(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"lookupPrincipalByGroupName",
			"(Ljava/lang/String;)Ljava/nio/file/attribute/GroupPrincipal;",
			arg0
		);
	}
	QAndroidJniObject UserPrincipalLookupService::lookupPrincipalByName(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"lookupPrincipalByName",
			"(Ljava/lang/String;)Ljava/nio/file/attribute/UserPrincipal;",
			arg0
		);
	}
} // namespace java::nio::file::attribute

