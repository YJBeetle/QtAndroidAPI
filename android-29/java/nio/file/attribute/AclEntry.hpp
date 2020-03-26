#pragma once

#ifndef JAVA_NIO_FILE_ATTRIBUTE_ACLENTRY
#define JAVA_NIO_FILE_ATTRIBUTE_ACLENTRY

#include "../../../../__JniBaseClass.hpp"

namespace __jni_impl::java::nio::file::attribute
{
	class AclEntryType;
}
namespace __jni_impl::java::nio::file::attribute
{
	class AclEntry_Builder;
}

namespace __jni_impl::java::nio::file::attribute
{
	class AclEntry : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject type();
		jboolean equals(jobject arg0);
		jstring toString();
		QAndroidJniObject flags();
		jint hashCode();
		QAndroidJniObject permissions();
		static QAndroidJniObject newBuilder();
		static QAndroidJniObject newBuilder(__jni_impl::java::nio::file::attribute::AclEntry arg0);
		QAndroidJniObject principal();
	};
} // namespace __jni_impl::java::nio::file::attribute

#include "AclEntryType.hpp"
#include "AclEntry_Builder.hpp"

namespace __jni_impl::java::nio::file::attribute
{
	// Fields
	
	// Constructors
	void AclEntry::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.attribute.AclEntry",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject AclEntry::type()
	{
		return __thiz.callObjectMethod(
			"type",
			"()Ljava/nio/file/attribute/AclEntryType;"
		);
	}
	jboolean AclEntry::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring AclEntry::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject AclEntry::flags()
	{
		return __thiz.callObjectMethod(
			"flags",
			"()Ljava/util/Set;"
		);
	}
	jint AclEntry::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	QAndroidJniObject AclEntry::permissions()
	{
		return __thiz.callObjectMethod(
			"permissions",
			"()Ljava/util/Set;"
		);
	}
	QAndroidJniObject AclEntry::newBuilder()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.attribute.AclEntry",
			"newBuilder",
			"()Ljava/nio/file/attribute/AclEntry$Builder;"
		);
	}
	QAndroidJniObject AclEntry::newBuilder(__jni_impl::java::nio::file::attribute::AclEntry arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.attribute.AclEntry",
			"newBuilder",
			"(Ljava/nio/file/attribute/AclEntry;)Ljava/nio/file/attribute/AclEntry$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject AclEntry::principal()
	{
		return __thiz.callObjectMethod(
			"principal",
			"()Ljava/nio/file/attribute/UserPrincipal;"
		);
	}
} // namespace __jni_impl::java::nio::file::attribute

namespace java::nio::file::attribute
{
	class AclEntry : public __jni_impl::java::nio::file::attribute::AclEntry
	{
	public:
		AclEntry(QAndroidJniObject obj) { __thiz = obj; }
		AclEntry()
		{
			__constructor();
		}
	};
} // namespace java::nio::file::attribute

#endif // JAVA_NIO_FILE_ATTRIBUTE_ACLENTRY

