#pragma once

#ifndef JAVA_NIO_FILE_ATTRIBUTE_ACLENTRYPERMISSION
#define JAVA_NIO_FILE_ATTRIBUTE_ACLENTRYPERMISSION

#include "../../../lang/Enum.hpp"


namespace __jni_impl::java::nio::file::attribute
{
	class AclEntryPermission : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject READ_DATA();
		static QAndroidJniObject WRITE_DATA();
		static QAndroidJniObject APPEND_DATA();
		static QAndroidJniObject READ_NAMED_ATTRS();
		static QAndroidJniObject WRITE_NAMED_ATTRS();
		static QAndroidJniObject EXECUTE();
		static QAndroidJniObject DELETE_CHILD();
		static QAndroidJniObject READ_ATTRIBUTES();
		static QAndroidJniObject WRITE_ATTRIBUTES();
		static QAndroidJniObject DELETE();
		static QAndroidJniObject READ_ACL();
		static QAndroidJniObject WRITE_ACL();
		static QAndroidJniObject WRITE_OWNER();
		static QAndroidJniObject SYNCHRONIZE();
		static QAndroidJniObject LIST_DIRECTORY();
		static QAndroidJniObject ADD_FILE();
		static QAndroidJniObject ADD_SUBDIRECTORY();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject values();
		static QAndroidJniObject valueOf(jstring arg0);
	};
} // namespace __jni_impl::java::nio::file::attribute


namespace __jni_impl::java::nio::file::attribute
{
	// Fields
	QAndroidJniObject AclEntryPermission::READ_DATA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.attribute.AclEntryPermission",
			"READ_DATA",
			"Ljava/nio/file/attribute/AclEntryPermission;");
	}
	QAndroidJniObject AclEntryPermission::WRITE_DATA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.attribute.AclEntryPermission",
			"WRITE_DATA",
			"Ljava/nio/file/attribute/AclEntryPermission;");
	}
	QAndroidJniObject AclEntryPermission::APPEND_DATA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.attribute.AclEntryPermission",
			"APPEND_DATA",
			"Ljava/nio/file/attribute/AclEntryPermission;");
	}
	QAndroidJniObject AclEntryPermission::READ_NAMED_ATTRS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.attribute.AclEntryPermission",
			"READ_NAMED_ATTRS",
			"Ljava/nio/file/attribute/AclEntryPermission;");
	}
	QAndroidJniObject AclEntryPermission::WRITE_NAMED_ATTRS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.attribute.AclEntryPermission",
			"WRITE_NAMED_ATTRS",
			"Ljava/nio/file/attribute/AclEntryPermission;");
	}
	QAndroidJniObject AclEntryPermission::EXECUTE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.attribute.AclEntryPermission",
			"EXECUTE",
			"Ljava/nio/file/attribute/AclEntryPermission;");
	}
	QAndroidJniObject AclEntryPermission::DELETE_CHILD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.attribute.AclEntryPermission",
			"DELETE_CHILD",
			"Ljava/nio/file/attribute/AclEntryPermission;");
	}
	QAndroidJniObject AclEntryPermission::READ_ATTRIBUTES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.attribute.AclEntryPermission",
			"READ_ATTRIBUTES",
			"Ljava/nio/file/attribute/AclEntryPermission;");
	}
	QAndroidJniObject AclEntryPermission::WRITE_ATTRIBUTES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.attribute.AclEntryPermission",
			"WRITE_ATTRIBUTES",
			"Ljava/nio/file/attribute/AclEntryPermission;");
	}
	QAndroidJniObject AclEntryPermission::DELETE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.attribute.AclEntryPermission",
			"DELETE",
			"Ljava/nio/file/attribute/AclEntryPermission;");
	}
	QAndroidJniObject AclEntryPermission::READ_ACL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.attribute.AclEntryPermission",
			"READ_ACL",
			"Ljava/nio/file/attribute/AclEntryPermission;");
	}
	QAndroidJniObject AclEntryPermission::WRITE_ACL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.attribute.AclEntryPermission",
			"WRITE_ACL",
			"Ljava/nio/file/attribute/AclEntryPermission;");
	}
	QAndroidJniObject AclEntryPermission::WRITE_OWNER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.attribute.AclEntryPermission",
			"WRITE_OWNER",
			"Ljava/nio/file/attribute/AclEntryPermission;");
	}
	QAndroidJniObject AclEntryPermission::SYNCHRONIZE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.attribute.AclEntryPermission",
			"SYNCHRONIZE",
			"Ljava/nio/file/attribute/AclEntryPermission;");
	}
	QAndroidJniObject AclEntryPermission::LIST_DIRECTORY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.attribute.AclEntryPermission",
			"LIST_DIRECTORY",
			"Ljava/nio/file/attribute/AclEntryPermission;");
	}
	QAndroidJniObject AclEntryPermission::ADD_FILE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.attribute.AclEntryPermission",
			"ADD_FILE",
			"Ljava/nio/file/attribute/AclEntryPermission;");
	}
	QAndroidJniObject AclEntryPermission::ADD_SUBDIRECTORY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.attribute.AclEntryPermission",
			"ADD_SUBDIRECTORY",
			"Ljava/nio/file/attribute/AclEntryPermission;");
	}
	
	// Constructors
	void AclEntryPermission::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.attribute.AclEntryPermission",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject AclEntryPermission::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.attribute.AclEntryPermission",
			"values",
			"()[Ljava/nio/file/attribute/AclEntryPermission;");
	}
	QAndroidJniObject AclEntryPermission::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.attribute.AclEntryPermission",
			"valueOf",
			"(Ljava/lang/String;)Ljava/nio/file/attribute/AclEntryPermission;",
			arg0);
	}
} // namespace __jni_impl::java::nio::file::attribute

namespace java::nio::file::attribute
{
	class AclEntryPermission : public __jni_impl::java::nio::file::attribute::AclEntryPermission
	{
	public:
		AclEntryPermission(QAndroidJniObject obj) { __thiz = obj; }
		AclEntryPermission()
		{
			__constructor();
		}
	};
} // namespace java::nio::file::attribute

#endif // JAVA_NIO_FILE_ATTRIBUTE_ACLENTRYPERMISSION

