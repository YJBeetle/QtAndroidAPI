#pragma once

#include "../../../../JArray.hpp"
#include "../../../../JArray.hpp"
#include "../../../../JClass.hpp"
#include "./AclEntry.def.hpp"
#include "./AclEntryType.def.hpp"
#include "./AclEntry_Builder.def.hpp"

namespace java::nio::file::attribute
{
	// Fields
	
	// Constructors
	
	// Methods
	inline java::nio::file::attribute::AclEntry AclEntry_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Ljava/nio/file/attribute/AclEntry;"
		);
	}
	inline java::nio::file::attribute::AclEntry_Builder AclEntry_Builder::setFlags(JArray arg0) const
	{
		return callObjectMethod(
			"setFlags",
			"([Ljava/nio/file/attribute/AclEntryFlag;)Ljava/nio/file/attribute/AclEntry$Builder;",
			arg0.object<jarray>()
		);
	}
	inline java::nio::file::attribute::AclEntry_Builder AclEntry_Builder::setFlags(JObject arg0) const
	{
		return callObjectMethod(
			"setFlags",
			"(Ljava/util/Set;)Ljava/nio/file/attribute/AclEntry$Builder;",
			arg0.object()
		);
	}
	inline java::nio::file::attribute::AclEntry_Builder AclEntry_Builder::setPermissions(JArray arg0) const
	{
		return callObjectMethod(
			"setPermissions",
			"([Ljava/nio/file/attribute/AclEntryPermission;)Ljava/nio/file/attribute/AclEntry$Builder;",
			arg0.object<jarray>()
		);
	}
	inline java::nio::file::attribute::AclEntry_Builder AclEntry_Builder::setPermissions(JObject arg0) const
	{
		return callObjectMethod(
			"setPermissions",
			"(Ljava/util/Set;)Ljava/nio/file/attribute/AclEntry$Builder;",
			arg0.object()
		);
	}
	inline java::nio::file::attribute::AclEntry_Builder AclEntry_Builder::setPrincipal(JObject arg0) const
	{
		return callObjectMethod(
			"setPrincipal",
			"(Ljava/nio/file/attribute/UserPrincipal;)Ljava/nio/file/attribute/AclEntry$Builder;",
			arg0.object()
		);
	}
	inline java::nio::file::attribute::AclEntry_Builder AclEntry_Builder::setType(java::nio::file::attribute::AclEntryType arg0) const
	{
		return callObjectMethod(
			"setType",
			"(Ljava/nio/file/attribute/AclEntryType;)Ljava/nio/file/attribute/AclEntry$Builder;",
			arg0.object()
		);
	}
} // namespace java::nio::file::attribute

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::nio::file::attribute;
#endif
