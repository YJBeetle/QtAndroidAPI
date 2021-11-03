#pragma once

#include "../../../lang/Enum.hpp"

class JArray;
class JString;

namespace java::nio::file::attribute
{
	class AclEntryPermission : public java::lang::Enum
	{
	public:
		// Fields
		static java::nio::file::attribute::AclEntryPermission ADD_FILE();
		static java::nio::file::attribute::AclEntryPermission ADD_SUBDIRECTORY();
		static java::nio::file::attribute::AclEntryPermission APPEND_DATA();
		static java::nio::file::attribute::AclEntryPermission DELETE();
		static java::nio::file::attribute::AclEntryPermission DELETE_CHILD();
		static java::nio::file::attribute::AclEntryPermission EXECUTE();
		static java::nio::file::attribute::AclEntryPermission LIST_DIRECTORY();
		static java::nio::file::attribute::AclEntryPermission READ_ACL();
		static java::nio::file::attribute::AclEntryPermission READ_ATTRIBUTES();
		static java::nio::file::attribute::AclEntryPermission READ_DATA();
		static java::nio::file::attribute::AclEntryPermission READ_NAMED_ATTRS();
		static java::nio::file::attribute::AclEntryPermission SYNCHRONIZE();
		static java::nio::file::attribute::AclEntryPermission WRITE_ACL();
		static java::nio::file::attribute::AclEntryPermission WRITE_ATTRIBUTES();
		static java::nio::file::attribute::AclEntryPermission WRITE_DATA();
		static java::nio::file::attribute::AclEntryPermission WRITE_NAMED_ATTRS();
		static java::nio::file::attribute::AclEntryPermission WRITE_OWNER();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AclEntryPermission(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		AclEntryPermission(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static java::nio::file::attribute::AclEntryPermission valueOf(JString arg0);
		static JArray values();
	};
} // namespace java::nio::file::attribute

