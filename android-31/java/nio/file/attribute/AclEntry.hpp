#pragma once

#include "../../../../JObject.hpp"
#include "../../../../JString.hpp"
#include "./AclEntry_Builder.def.hpp"
#include "./AclEntryType.def.hpp"
#include "./AclEntry.def.hpp"

namespace java::nio::file::attribute
{
	// Fields
	
	// Constructors
	
	// Methods
	inline java::nio::file::attribute::AclEntry_Builder AclEntry::newBuilder()
	{
		return callStaticObjectMethod(
			"java.nio.file.attribute.AclEntry",
			"newBuilder",
			"()Ljava/nio/file/attribute/AclEntry$Builder;"
		);
	}
	inline java::nio::file::attribute::AclEntry_Builder AclEntry::newBuilder(java::nio::file::attribute::AclEntry arg0)
	{
		return callStaticObjectMethod(
			"java.nio.file.attribute.AclEntry",
			"newBuilder",
			"(Ljava/nio/file/attribute/AclEntry;)Ljava/nio/file/attribute/AclEntry$Builder;",
			arg0.object()
		);
	}
	inline jboolean AclEntry::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JObject AclEntry::flags() const
	{
		return callObjectMethod(
			"flags",
			"()Ljava/util/Set;"
		);
	}
	inline jint AclEntry::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JObject AclEntry::permissions() const
	{
		return callObjectMethod(
			"permissions",
			"()Ljava/util/Set;"
		);
	}
	inline JObject AclEntry::principal() const
	{
		return callObjectMethod(
			"principal",
			"()Ljava/nio/file/attribute/UserPrincipal;"
		);
	}
	inline JString AclEntry::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline java::nio::file::attribute::AclEntryType AclEntry::type() const
	{
		return callObjectMethod(
			"type",
			"()Ljava/nio/file/attribute/AclEntryType;"
		);
	}
} // namespace java::nio::file::attribute

// Base class headers

