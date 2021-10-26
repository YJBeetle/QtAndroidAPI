#pragma once

#ifndef JAVA_NIO_FILE_ATTRIBUTE_ACLENTRYTYPE
#define JAVA_NIO_FILE_ATTRIBUTE_ACLENTRYTYPE

#include "../../../../__JniBaseClass.hpp"
#include "../../../lang/Enum.hpp"


namespace __jni_impl::java::nio::file::attribute
{
	class AclEntryType : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject ALLOW();
		static QAndroidJniObject DENY();
		static QAndroidJniObject AUDIT();
		static QAndroidJniObject ALARM();
		
		// Constructors
		void __constructor();
		
		// Methods
		static jarray values();
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
	};
} // namespace __jni_impl::java::nio::file::attribute


namespace __jni_impl::java::nio::file::attribute
{
	// Fields
	QAndroidJniObject AclEntryType::ALLOW()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.attribute.AclEntryType",
			"ALLOW",
			"Ljava/nio/file/attribute/AclEntryType;"
		);
	}
	QAndroidJniObject AclEntryType::DENY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.attribute.AclEntryType",
			"DENY",
			"Ljava/nio/file/attribute/AclEntryType;"
		);
	}
	QAndroidJniObject AclEntryType::AUDIT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.attribute.AclEntryType",
			"AUDIT",
			"Ljava/nio/file/attribute/AclEntryType;"
		);
	}
	QAndroidJniObject AclEntryType::ALARM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.attribute.AclEntryType",
			"ALARM",
			"Ljava/nio/file/attribute/AclEntryType;"
		);
	}
	
	// Constructors
	void AclEntryType::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.attribute.AclEntryType",
			"(V)V");
	}
	
	// Methods
	jarray AclEntryType::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.attribute.AclEntryType",
			"values",
			"()[Ljava/nio/file/attribute/AclEntryType;"
		).object<jarray>();
	}
	QAndroidJniObject AclEntryType::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.attribute.AclEntryType",
			"valueOf",
			"(Ljava/lang/String;)Ljava/nio/file/attribute/AclEntryType;",
			arg0
		);
	}
	QAndroidJniObject AclEntryType::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.attribute.AclEntryType",
			"valueOf",
			"(Ljava/lang/String;)Ljava/nio/file/attribute/AclEntryType;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace __jni_impl::java::nio::file::attribute

namespace java::nio::file::attribute
{
	class AclEntryType : public __jni_impl::java::nio::file::attribute::AclEntryType
	{
	public:
		AclEntryType(QAndroidJniObject obj) { __thiz = obj; }
		AclEntryType()
		{
			__constructor();
		}
	};
} // namespace java::nio::file::attribute

#endif // JAVA_NIO_FILE_ATTRIBUTE_ACLENTRYTYPE

