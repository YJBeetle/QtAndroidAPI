#include "../../../../JObject.hpp"
#include "../../../../JString.hpp"
#include "./AclEntry_Builder.hpp"
#include "./AclEntryType.hpp"
#include "./AclEntry.hpp"

namespace java::nio::file::attribute
{
	// Fields
	
	// Constructors
	
	// Methods
	java::nio::file::attribute::AclEntry_Builder AclEntry::newBuilder()
	{
		return callStaticObjectMethod(
			"java.nio.file.attribute.AclEntry",
			"newBuilder",
			"()Ljava/nio/file/attribute/AclEntry$Builder;"
		);
	}
	java::nio::file::attribute::AclEntry_Builder AclEntry::newBuilder(java::nio::file::attribute::AclEntry arg0)
	{
		return callStaticObjectMethod(
			"java.nio.file.attribute.AclEntry",
			"newBuilder",
			"(Ljava/nio/file/attribute/AclEntry;)Ljava/nio/file/attribute/AclEntry$Builder;",
			arg0.object()
		);
	}
	jboolean AclEntry::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JObject AclEntry::flags() const
	{
		return callObjectMethod(
			"flags",
			"()Ljava/util/Set;"
		);
	}
	jint AclEntry::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JObject AclEntry::permissions() const
	{
		return callObjectMethod(
			"permissions",
			"()Ljava/util/Set;"
		);
	}
	JObject AclEntry::principal() const
	{
		return callObjectMethod(
			"principal",
			"()Ljava/nio/file/attribute/UserPrincipal;"
		);
	}
	JString AclEntry::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	java::nio::file::attribute::AclEntryType AclEntry::type() const
	{
		return callObjectMethod(
			"type",
			"()Ljava/nio/file/attribute/AclEntryType;"
		);
	}
} // namespace java::nio::file::attribute

