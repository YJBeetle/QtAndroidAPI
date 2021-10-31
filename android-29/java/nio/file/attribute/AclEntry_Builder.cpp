#include "./AclEntry.hpp"
#include "./AclEntryType.hpp"
#include "./AclEntry_Builder.hpp"

namespace java::nio::file::attribute
{
	// Fields
	
	// QAndroidJniObject forward
	AclEntry_Builder::AclEntry_Builder(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject AclEntry_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Ljava/nio/file/attribute/AclEntry;"
		);
	}
	QAndroidJniObject AclEntry_Builder::setFlags(jarray arg0)
	{
		return callObjectMethod(
			"setFlags",
			"([Ljava/nio/file/attribute/AclEntryFlag;)Ljava/nio/file/attribute/AclEntry$Builder;",
			arg0
		);
	}
	QAndroidJniObject AclEntry_Builder::setFlags(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"setFlags",
			"(Ljava/util/Set;)Ljava/nio/file/attribute/AclEntry$Builder;",
			arg0.object()
		);
	}
	QAndroidJniObject AclEntry_Builder::setPermissions(jarray arg0)
	{
		return callObjectMethod(
			"setPermissions",
			"([Ljava/nio/file/attribute/AclEntryPermission;)Ljava/nio/file/attribute/AclEntry$Builder;",
			arg0
		);
	}
	QAndroidJniObject AclEntry_Builder::setPermissions(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"setPermissions",
			"(Ljava/util/Set;)Ljava/nio/file/attribute/AclEntry$Builder;",
			arg0.object()
		);
	}
	QAndroidJniObject AclEntry_Builder::setPrincipal(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"setPrincipal",
			"(Ljava/nio/file/attribute/UserPrincipal;)Ljava/nio/file/attribute/AclEntry$Builder;",
			arg0.object()
		);
	}
	QAndroidJniObject AclEntry_Builder::setType(java::nio::file::attribute::AclEntryType arg0)
	{
		return callObjectMethod(
			"setType",
			"(Ljava/nio/file/attribute/AclEntryType;)Ljava/nio/file/attribute/AclEntry$Builder;",
			arg0.object()
		);
	}
} // namespace java::nio::file::attribute

