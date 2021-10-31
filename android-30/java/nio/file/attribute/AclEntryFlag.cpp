#include "./AclEntryFlag.hpp"

namespace java::nio::file::attribute
{
	// Fields
	java::nio::file::attribute::AclEntryFlag AclEntryFlag::DIRECTORY_INHERIT()
	{
		return getStaticObjectField(
			"java.nio.file.attribute.AclEntryFlag",
			"DIRECTORY_INHERIT",
			"Ljava/nio/file/attribute/AclEntryFlag;"
		);
	}
	java::nio::file::attribute::AclEntryFlag AclEntryFlag::FILE_INHERIT()
	{
		return getStaticObjectField(
			"java.nio.file.attribute.AclEntryFlag",
			"FILE_INHERIT",
			"Ljava/nio/file/attribute/AclEntryFlag;"
		);
	}
	java::nio::file::attribute::AclEntryFlag AclEntryFlag::INHERIT_ONLY()
	{
		return getStaticObjectField(
			"java.nio.file.attribute.AclEntryFlag",
			"INHERIT_ONLY",
			"Ljava/nio/file/attribute/AclEntryFlag;"
		);
	}
	java::nio::file::attribute::AclEntryFlag AclEntryFlag::NO_PROPAGATE_INHERIT()
	{
		return getStaticObjectField(
			"java.nio.file.attribute.AclEntryFlag",
			"NO_PROPAGATE_INHERIT",
			"Ljava/nio/file/attribute/AclEntryFlag;"
		);
	}
	
	// QJniObject forward
	AclEntryFlag::AclEntryFlag(QJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	java::nio::file::attribute::AclEntryFlag AclEntryFlag::valueOf(jstring arg0)
	{
		return callStaticObjectMethod(
			"java.nio.file.attribute.AclEntryFlag",
			"valueOf",
			"(Ljava/lang/String;)Ljava/nio/file/attribute/AclEntryFlag;",
			arg0
		);
	}
	jarray AclEntryFlag::values()
	{
		return callStaticObjectMethod(
			"java.nio.file.attribute.AclEntryFlag",
			"values",
			"()[Ljava/nio/file/attribute/AclEntryFlag;"
		).object<jarray>();
	}
} // namespace java::nio::file::attribute

