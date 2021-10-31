#include "./AclEntry_Builder.hpp"
#include "./AclEntryType.hpp"
#include "./AclEntry.hpp"

namespace java::nio::file::attribute
{
	// Fields
	
	// QJniObject forward
	AclEntry::AclEntry(QJniObject obj) : __JniBaseClass(obj) {}
	
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
	jboolean AclEntry::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	__JniBaseClass AclEntry::flags()
	{
		return callObjectMethod(
			"flags",
			"()Ljava/util/Set;"
		);
	}
	jint AclEntry::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	__JniBaseClass AclEntry::permissions()
	{
		return callObjectMethod(
			"permissions",
			"()Ljava/util/Set;"
		);
	}
	__JniBaseClass AclEntry::principal()
	{
		return callObjectMethod(
			"principal",
			"()Ljava/nio/file/attribute/UserPrincipal;"
		);
	}
	jstring AclEntry::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	java::nio::file::attribute::AclEntryType AclEntry::type()
	{
		return callObjectMethod(
			"type",
			"()Ljava/nio/file/attribute/AclEntryType;"
		);
	}
} // namespace java::nio::file::attribute

