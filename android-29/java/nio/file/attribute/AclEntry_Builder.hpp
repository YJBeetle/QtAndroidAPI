#pragma once

#ifndef JAVA_NIO_FILE_ATTRIBUTE_ACLENTRY_BUILDER
#define JAVA_NIO_FILE_ATTRIBUTE_ACLENTRY_BUILDER

#include "../../../../__JniBaseClass.hpp"

namespace __jni_impl::java::nio::file::attribute
{
	class AclEntryType;
}
namespace __jni_impl::java::nio::file::attribute
{
	class AclEntry;
}

namespace __jni_impl::java::nio::file::attribute
{
	class AclEntry_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setPermissions(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject setPermissions(jarray arg0);
		QAndroidJniObject setPrincipal(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject setType(__jni_impl::java::nio::file::attribute::AclEntryType arg0);
		QAndroidJniObject setFlags(jarray arg0);
		QAndroidJniObject setFlags(__jni_impl::__JniBaseClass arg0);
	};
} // namespace __jni_impl::java::nio::file::attribute

#include "AclEntryType.hpp"
#include "AclEntry.hpp"

namespace __jni_impl::java::nio::file::attribute
{
	// Fields
	
	// Constructors
	void AclEntry_Builder::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.attribute.AclEntry$Builder",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject AclEntry_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Ljava/nio/file/attribute/AclEntry;"
		);
	}
	QAndroidJniObject AclEntry_Builder::setPermissions(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"setPermissions",
			"(Ljava/util/Set;)Ljava/nio/file/attribute/AclEntry$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject AclEntry_Builder::setPermissions(jarray arg0)
	{
		return __thiz.callObjectMethod(
			"setPermissions",
			"([Ljava/nio/file/attribute/AclEntryPermission;)Ljava/nio/file/attribute/AclEntry$Builder;",
			arg0
		);
	}
	QAndroidJniObject AclEntry_Builder::setPrincipal(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"setPrincipal",
			"(Ljava/nio/file/attribute/UserPrincipal;)Ljava/nio/file/attribute/AclEntry$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject AclEntry_Builder::setType(__jni_impl::java::nio::file::attribute::AclEntryType arg0)
	{
		return __thiz.callObjectMethod(
			"setType",
			"(Ljava/nio/file/attribute/AclEntryType;)Ljava/nio/file/attribute/AclEntry$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject AclEntry_Builder::setFlags(jarray arg0)
	{
		return __thiz.callObjectMethod(
			"setFlags",
			"([Ljava/nio/file/attribute/AclEntryFlag;)Ljava/nio/file/attribute/AclEntry$Builder;",
			arg0
		);
	}
	QAndroidJniObject AclEntry_Builder::setFlags(__jni_impl::__JniBaseClass arg0)
	{
		return __thiz.callObjectMethod(
			"setFlags",
			"(Ljava/util/Set;)Ljava/nio/file/attribute/AclEntry$Builder;",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::java::nio::file::attribute

namespace java::nio::file::attribute
{
	class AclEntry_Builder : public __jni_impl::java::nio::file::attribute::AclEntry_Builder
	{
	public:
		AclEntry_Builder(QAndroidJniObject obj) { __thiz = obj; }
		AclEntry_Builder()
		{
			__constructor();
		}
	};
} // namespace java::nio::file::attribute

#endif // JAVA_NIO_FILE_ATTRIBUTE_ACLENTRY_BUILDER

