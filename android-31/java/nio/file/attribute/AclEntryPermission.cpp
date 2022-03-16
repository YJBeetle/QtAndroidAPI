#include "../../../../JArray.hpp"
#include "../../../../JString.hpp"
#include "./AclEntryPermission.hpp"

namespace java::nio::file::attribute
{
	// Fields
	java::nio::file::attribute::AclEntryPermission AclEntryPermission::ADD_FILE()
	{
		return getStaticObjectField(
			"java.nio.file.attribute.AclEntryPermission",
			"ADD_FILE",
			"Ljava/nio/file/attribute/AclEntryPermission;"
		);
	}
	java::nio::file::attribute::AclEntryPermission AclEntryPermission::ADD_SUBDIRECTORY()
	{
		return getStaticObjectField(
			"java.nio.file.attribute.AclEntryPermission",
			"ADD_SUBDIRECTORY",
			"Ljava/nio/file/attribute/AclEntryPermission;"
		);
	}
	java::nio::file::attribute::AclEntryPermission AclEntryPermission::APPEND_DATA()
	{
		return getStaticObjectField(
			"java.nio.file.attribute.AclEntryPermission",
			"APPEND_DATA",
			"Ljava/nio/file/attribute/AclEntryPermission;"
		);
	}
	java::nio::file::attribute::AclEntryPermission AclEntryPermission::DELETE()
	{
		return getStaticObjectField(
			"java.nio.file.attribute.AclEntryPermission",
			"DELETE",
			"Ljava/nio/file/attribute/AclEntryPermission;"
		);
	}
	java::nio::file::attribute::AclEntryPermission AclEntryPermission::DELETE_CHILD()
	{
		return getStaticObjectField(
			"java.nio.file.attribute.AclEntryPermission",
			"DELETE_CHILD",
			"Ljava/nio/file/attribute/AclEntryPermission;"
		);
	}
	java::nio::file::attribute::AclEntryPermission AclEntryPermission::EXECUTE()
	{
		return getStaticObjectField(
			"java.nio.file.attribute.AclEntryPermission",
			"EXECUTE",
			"Ljava/nio/file/attribute/AclEntryPermission;"
		);
	}
	java::nio::file::attribute::AclEntryPermission AclEntryPermission::LIST_DIRECTORY()
	{
		return getStaticObjectField(
			"java.nio.file.attribute.AclEntryPermission",
			"LIST_DIRECTORY",
			"Ljava/nio/file/attribute/AclEntryPermission;"
		);
	}
	java::nio::file::attribute::AclEntryPermission AclEntryPermission::READ_ACL()
	{
		return getStaticObjectField(
			"java.nio.file.attribute.AclEntryPermission",
			"READ_ACL",
			"Ljava/nio/file/attribute/AclEntryPermission;"
		);
	}
	java::nio::file::attribute::AclEntryPermission AclEntryPermission::READ_ATTRIBUTES()
	{
		return getStaticObjectField(
			"java.nio.file.attribute.AclEntryPermission",
			"READ_ATTRIBUTES",
			"Ljava/nio/file/attribute/AclEntryPermission;"
		);
	}
	java::nio::file::attribute::AclEntryPermission AclEntryPermission::READ_DATA()
	{
		return getStaticObjectField(
			"java.nio.file.attribute.AclEntryPermission",
			"READ_DATA",
			"Ljava/nio/file/attribute/AclEntryPermission;"
		);
	}
	java::nio::file::attribute::AclEntryPermission AclEntryPermission::READ_NAMED_ATTRS()
	{
		return getStaticObjectField(
			"java.nio.file.attribute.AclEntryPermission",
			"READ_NAMED_ATTRS",
			"Ljava/nio/file/attribute/AclEntryPermission;"
		);
	}
	java::nio::file::attribute::AclEntryPermission AclEntryPermission::SYNCHRONIZE()
	{
		return getStaticObjectField(
			"java.nio.file.attribute.AclEntryPermission",
			"SYNCHRONIZE",
			"Ljava/nio/file/attribute/AclEntryPermission;"
		);
	}
	java::nio::file::attribute::AclEntryPermission AclEntryPermission::WRITE_ACL()
	{
		return getStaticObjectField(
			"java.nio.file.attribute.AclEntryPermission",
			"WRITE_ACL",
			"Ljava/nio/file/attribute/AclEntryPermission;"
		);
	}
	java::nio::file::attribute::AclEntryPermission AclEntryPermission::WRITE_ATTRIBUTES()
	{
		return getStaticObjectField(
			"java.nio.file.attribute.AclEntryPermission",
			"WRITE_ATTRIBUTES",
			"Ljava/nio/file/attribute/AclEntryPermission;"
		);
	}
	java::nio::file::attribute::AclEntryPermission AclEntryPermission::WRITE_DATA()
	{
		return getStaticObjectField(
			"java.nio.file.attribute.AclEntryPermission",
			"WRITE_DATA",
			"Ljava/nio/file/attribute/AclEntryPermission;"
		);
	}
	java::nio::file::attribute::AclEntryPermission AclEntryPermission::WRITE_NAMED_ATTRS()
	{
		return getStaticObjectField(
			"java.nio.file.attribute.AclEntryPermission",
			"WRITE_NAMED_ATTRS",
			"Ljava/nio/file/attribute/AclEntryPermission;"
		);
	}
	java::nio::file::attribute::AclEntryPermission AclEntryPermission::WRITE_OWNER()
	{
		return getStaticObjectField(
			"java.nio.file.attribute.AclEntryPermission",
			"WRITE_OWNER",
			"Ljava/nio/file/attribute/AclEntryPermission;"
		);
	}
	
	// Constructors
	
	// Methods
	java::nio::file::attribute::AclEntryPermission AclEntryPermission::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"java.nio.file.attribute.AclEntryPermission",
			"valueOf",
			"(Ljava/lang/String;)Ljava/nio/file/attribute/AclEntryPermission;",
			arg0.object<jstring>()
		);
	}
	JArray AclEntryPermission::values()
	{
		return callStaticObjectMethod(
			"java.nio.file.attribute.AclEntryPermission",
			"values",
			"()[Ljava/nio/file/attribute/AclEntryPermission;"
		);
	}
} // namespace java::nio::file::attribute

