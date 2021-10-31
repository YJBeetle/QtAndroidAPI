#include "./AclEntry_Builder.hpp"
#include "./AclEntryType.hpp"
#include "./AclEntry.hpp"

namespace java::nio::file::attribute
{
	// Fields
	
	// QAndroidJniObject forward
	AclEntry::AclEntry(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject AclEntry::newBuilder()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.attribute.AclEntry",
			"newBuilder",
			"()Ljava/nio/file/attribute/AclEntry$Builder;"
		);
	}
	QAndroidJniObject AclEntry::newBuilder(java::nio::file::attribute::AclEntry arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
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
	QAndroidJniObject AclEntry::flags()
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
	QAndroidJniObject AclEntry::permissions()
	{
		return callObjectMethod(
			"permissions",
			"()Ljava/util/Set;"
		);
	}
	QAndroidJniObject AclEntry::principal()
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
	QAndroidJniObject AclEntry::type()
	{
		return callObjectMethod(
			"type",
			"()Ljava/nio/file/attribute/AclEntryType;"
		);
	}
} // namespace java::nio::file::attribute

