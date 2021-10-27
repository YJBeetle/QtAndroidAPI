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
	QAndroidJniObject UserPrincipalLookupService::lookupPrincipalByGroupName(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"lookupPrincipalByGroupName",
			"(Ljava/lang/String;)Ljava/nio/file/attribute/GroupPrincipal;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
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
	QAndroidJniObject UserPrincipalLookupService::lookupPrincipalByName(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"lookupPrincipalByName",
			"(Ljava/lang/String;)Ljava/nio/file/attribute/UserPrincipal;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace java::nio::file::attribute

