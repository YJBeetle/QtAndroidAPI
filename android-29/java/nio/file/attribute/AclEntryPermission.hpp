#pragma once

#include "../../../../__JniBaseClass.hpp"
#include "../../../lang/Enum.hpp"


namespace java::nio::file::attribute
{
	class AclEntryPermission : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject ADD_FILE();
		static QAndroidJniObject ADD_SUBDIRECTORY();
		static QAndroidJniObject APPEND_DATA();
		static QAndroidJniObject DELETE();
		static QAndroidJniObject DELETE_CHILD();
		static QAndroidJniObject EXECUTE();
		static QAndroidJniObject LIST_DIRECTORY();
		static QAndroidJniObject READ_ACL();
		static QAndroidJniObject READ_ATTRIBUTES();
		static QAndroidJniObject READ_DATA();
		static QAndroidJniObject READ_NAMED_ATTRS();
		static QAndroidJniObject SYNCHRONIZE();
		static QAndroidJniObject WRITE_ACL();
		static QAndroidJniObject WRITE_ATTRIBUTES();
		static QAndroidJniObject WRITE_DATA();
		static QAndroidJniObject WRITE_NAMED_ATTRS();
		static QAndroidJniObject WRITE_OWNER();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AclEntryPermission(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		AclEntryPermission(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace java::nio::file::attribute

