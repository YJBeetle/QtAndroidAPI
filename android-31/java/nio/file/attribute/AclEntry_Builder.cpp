#include "../../../../JArray.hpp"
#include "../../../../JArray.hpp"
#include "../../../../JClass.hpp"
#include "./AclEntry.hpp"
#include "./AclEntryType.hpp"
#include "./AclEntry_Builder.hpp"

namespace java::nio::file::attribute
{
	// Fields
	
	// QJniObject forward
	AclEntry_Builder::AclEntry_Builder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	java::nio::file::attribute::AclEntry AclEntry_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Ljava/nio/file/attribute/AclEntry;"
		);
	}
	java::nio::file::attribute::AclEntry_Builder AclEntry_Builder::setFlags(JArray arg0) const
	{
		return callObjectMethod(
			"setFlags",
			"([Ljava/nio/file/attribute/AclEntryFlag;)Ljava/nio/file/attribute/AclEntry$Builder;",
			arg0.object<jarray>()
		);
	}
	java::nio::file::attribute::AclEntry_Builder AclEntry_Builder::setFlags(JObject arg0) const
	{
		return callObjectMethod(
			"setFlags",
			"(Ljava/util/Set;)Ljava/nio/file/attribute/AclEntry$Builder;",
			arg0.object()
		);
	}
	java::nio::file::attribute::AclEntry_Builder AclEntry_Builder::setPermissions(JArray arg0) const
	{
		return callObjectMethod(
			"setPermissions",
			"([Ljava/nio/file/attribute/AclEntryPermission;)Ljava/nio/file/attribute/AclEntry$Builder;",
			arg0.object<jarray>()
		);
	}
	java::nio::file::attribute::AclEntry_Builder AclEntry_Builder::setPermissions(JObject arg0) const
	{
		return callObjectMethod(
			"setPermissions",
			"(Ljava/util/Set;)Ljava/nio/file/attribute/AclEntry$Builder;",
			arg0.object()
		);
	}
	java::nio::file::attribute::AclEntry_Builder AclEntry_Builder::setPrincipal(JObject arg0) const
	{
		return callObjectMethod(
			"setPrincipal",
			"(Ljava/nio/file/attribute/UserPrincipal;)Ljava/nio/file/attribute/AclEntry$Builder;",
			arg0.object()
		);
	}
	java::nio::file::attribute::AclEntry_Builder AclEntry_Builder::setType(java::nio::file::attribute::AclEntryType arg0) const
	{
		return callObjectMethod(
			"setType",
			"(Ljava/nio/file/attribute/AclEntryType;)Ljava/nio/file/attribute/AclEntry$Builder;",
			arg0.object()
		);
	}
} // namespace java::nio::file::attribute

