#pragma once

#ifndef JAVA_NIO_FILE_ATTRIBUTE_ACLENTRYFLAG
#define JAVA_NIO_FILE_ATTRIBUTE_ACLENTRYFLAG

#include "../../../../__JniBaseClass.hpp"
#include "../../../lang/Enum.hpp"


namespace __jni_impl::java::nio::file::attribute
{
	class AclEntryFlag : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject FILE_INHERIT();
		static QAndroidJniObject DIRECTORY_INHERIT();
		static QAndroidJniObject NO_PROPAGATE_INHERIT();
		static QAndroidJniObject INHERIT_ONLY();
		
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
	QAndroidJniObject AclEntryFlag::FILE_INHERIT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.attribute.AclEntryFlag",
			"FILE_INHERIT",
			"Ljava/nio/file/attribute/AclEntryFlag;"
		);
	}
	QAndroidJniObject AclEntryFlag::DIRECTORY_INHERIT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.attribute.AclEntryFlag",
			"DIRECTORY_INHERIT",
			"Ljava/nio/file/attribute/AclEntryFlag;"
		);
	}
	QAndroidJniObject AclEntryFlag::NO_PROPAGATE_INHERIT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.attribute.AclEntryFlag",
			"NO_PROPAGATE_INHERIT",
			"Ljava/nio/file/attribute/AclEntryFlag;"
		);
	}
	QAndroidJniObject AclEntryFlag::INHERIT_ONLY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.file.attribute.AclEntryFlag",
			"INHERIT_ONLY",
			"Ljava/nio/file/attribute/AclEntryFlag;"
		);
	}
	
	// Constructors
	void AclEntryFlag::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.attribute.AclEntryFlag",
			"(V)V");
	}
	
	// Methods
	jarray AclEntryFlag::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.attribute.AclEntryFlag",
			"values",
			"()[Ljava/nio/file/attribute/AclEntryFlag;"
		).object<jarray>();
	}
	QAndroidJniObject AclEntryFlag::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.attribute.AclEntryFlag",
			"valueOf",
			"(Ljava/lang/String;)Ljava/nio/file/attribute/AclEntryFlag;",
			arg0
		);
	}
	QAndroidJniObject AclEntryFlag::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.attribute.AclEntryFlag",
			"valueOf",
			"(Ljava/lang/String;)Ljava/nio/file/attribute/AclEntryFlag;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace __jni_impl::java::nio::file::attribute

namespace java::nio::file::attribute
{
	class AclEntryFlag : public __jni_impl::java::nio::file::attribute::AclEntryFlag
	{
	public:
		AclEntryFlag(QAndroidJniObject obj) { __thiz = obj; }
		AclEntryFlag()
		{
			__constructor();
		}
	};
} // namespace java::nio::file::attribute

#endif // JAVA_NIO_FILE_ATTRIBUTE_ACLENTRYFLAG

