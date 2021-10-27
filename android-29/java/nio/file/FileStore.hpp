#pragma once

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::java::nio::file
{
	class FileStore : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jobject getAttribute(jstring arg0);
		jobject getAttribute(const QString &arg0);
		jlong getBlockSize();
		QAndroidJniObject getFileStoreAttributeView(jclass arg0);
		jlong getTotalSpace();
		jlong getUnallocatedSpace();
		jlong getUsableSpace();
		jboolean isReadOnly();
		jstring name();
		jboolean supportsFileAttributeView(jclass arg0);
		jboolean supportsFileAttributeView(jstring arg0);
		jboolean supportsFileAttributeView(const QString &arg0);
		jstring type();
	};
} // namespace __jni_impl::java::nio::file


namespace __jni_impl::java::nio::file
{
	// Fields
	
	// Constructors
	void FileStore::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.FileStore",
			"(V)V");
	}
	
	// Methods
	jobject FileStore::getAttribute(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getAttribute",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jobject FileStore::getAttribute(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getAttribute",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jobject>();
	}
	jlong FileStore::getBlockSize()
	{
		return __thiz.callMethod<jlong>(
			"getBlockSize",
			"()J"
		);
	}
	QAndroidJniObject FileStore::getFileStoreAttributeView(jclass arg0)
	{
		return __thiz.callObjectMethod(
			"getFileStoreAttributeView",
			"(Ljava/lang/Class;)Ljava/nio/file/attribute/FileStoreAttributeView;",
			arg0
		);
	}
	jlong FileStore::getTotalSpace()
	{
		return __thiz.callMethod<jlong>(
			"getTotalSpace",
			"()J"
		);
	}
	jlong FileStore::getUnallocatedSpace()
	{
		return __thiz.callMethod<jlong>(
			"getUnallocatedSpace",
			"()J"
		);
	}
	jlong FileStore::getUsableSpace()
	{
		return __thiz.callMethod<jlong>(
			"getUsableSpace",
			"()J"
		);
	}
	jboolean FileStore::isReadOnly()
	{
		return __thiz.callMethod<jboolean>(
			"isReadOnly",
			"()Z"
		);
	}
	jstring FileStore::name()
	{
		return __thiz.callObjectMethod(
			"name",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean FileStore::supportsFileAttributeView(jclass arg0)
	{
		return __thiz.callMethod<jboolean>(
			"supportsFileAttributeView",
			"(Ljava/lang/Class;)Z",
			arg0
		);
	}
	jboolean FileStore::supportsFileAttributeView(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"supportsFileAttributeView",
			"(Ljava/lang/String;)Z",
			arg0
		);
	}
	jboolean FileStore::supportsFileAttributeView(const QString &arg0)
	{
		return __thiz.callMethod<jboolean>(
			"supportsFileAttributeView",
			"(Ljava/lang/String;)Z",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jstring FileStore::type()
	{
		return __thiz.callObjectMethod(
			"type",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::java::nio::file

namespace java::nio::file
{
	class FileStore : public __jni_impl::java::nio::file::FileStore
	{
	public:
		FileStore(QAndroidJniObject obj) { __thiz = obj; }
		FileStore()
		{
			__constructor();
		}
	};
} // namespace java::nio::file

