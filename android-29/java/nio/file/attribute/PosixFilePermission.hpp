#pragma once

#ifndef JAVA_NIO_FILE_ATTRIBUTE_POSIXFILEPERMISSION
#define JAVA_NIO_FILE_ATTRIBUTE_POSIXFILEPERMISSION

#include "../../../../__JniBaseClass.hpp"
#include "../../../lang/Enum.hpp"


namespace __jni_impl::java::nio::file::attribute
{
	class PosixFilePermission : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject OWNER_READ();
		static QAndroidJniObject OWNER_WRITE();
		static QAndroidJniObject OWNER_EXECUTE();
		static QAndroidJniObject GROUP_READ();
		static QAndroidJniObject GROUP_WRITE();
		static QAndroidJniObject GROUP_EXECUTE();
		static QAndroidJniObject OTHERS_READ();
		static QAndroidJniObject OTHERS_WRITE();
		static QAndroidJniObject OTHERS_EXECUTE();
		
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
	QAndroidJniObject PosixFilePermission::OWNER_READ()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.attribute.PosixFilePermission",
			"OWNER_READ",
			"Ljava/nio/file/attribute/PosixFilePermission;");
	}
	QAndroidJniObject PosixFilePermission::OWNER_WRITE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.attribute.PosixFilePermission",
			"OWNER_WRITE",
			"Ljava/nio/file/attribute/PosixFilePermission;");
	}
	QAndroidJniObject PosixFilePermission::OWNER_EXECUTE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.attribute.PosixFilePermission",
			"OWNER_EXECUTE",
			"Ljava/nio/file/attribute/PosixFilePermission;");
	}
	QAndroidJniObject PosixFilePermission::GROUP_READ()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.attribute.PosixFilePermission",
			"GROUP_READ",
			"Ljava/nio/file/attribute/PosixFilePermission;");
	}
	QAndroidJniObject PosixFilePermission::GROUP_WRITE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.attribute.PosixFilePermission",
			"GROUP_WRITE",
			"Ljava/nio/file/attribute/PosixFilePermission;");
	}
	QAndroidJniObject PosixFilePermission::GROUP_EXECUTE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.attribute.PosixFilePermission",
			"GROUP_EXECUTE",
			"Ljava/nio/file/attribute/PosixFilePermission;");
	}
	QAndroidJniObject PosixFilePermission::OTHERS_READ()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.attribute.PosixFilePermission",
			"OTHERS_READ",
			"Ljava/nio/file/attribute/PosixFilePermission;");
	}
	QAndroidJniObject PosixFilePermission::OTHERS_WRITE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.attribute.PosixFilePermission",
			"OTHERS_WRITE",
			"Ljava/nio/file/attribute/PosixFilePermission;");
	}
	QAndroidJniObject PosixFilePermission::OTHERS_EXECUTE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.attribute.PosixFilePermission",
			"OTHERS_EXECUTE",
			"Ljava/nio/file/attribute/PosixFilePermission;");
	}
	
	// Constructors
	void PosixFilePermission::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.attribute.PosixFilePermission",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject PosixFilePermission::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.attribute.PosixFilePermission",
			"values",
			"()[Ljava/nio/file/attribute/PosixFilePermission;");
	}
	QAndroidJniObject PosixFilePermission::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.attribute.PosixFilePermission",
			"valueOf",
			"(Ljava/lang/String;)Ljava/nio/file/attribute/PosixFilePermission;",
			arg0);
	}
} // namespace __jni_impl::java::nio::file::attribute

namespace java::nio::file::attribute
{
	class PosixFilePermission : public __jni_impl::java::nio::file::attribute::PosixFilePermission
	{
	public:
		PosixFilePermission(QAndroidJniObject obj) { __thiz = obj; }
		PosixFilePermission()
		{
			__constructor();
		}
	};
} // namespace java::nio::file::attribute

#endif // JAVA_NIO_FILE_ATTRIBUTE_POSIXFILEPERMISSION

