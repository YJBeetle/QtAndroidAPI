#pragma once

#ifndef JAVA_NIO_FILE_FILESTORE
#define JAVA_NIO_FILE_FILESTORE

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
		jstring name();
		jstring type();
		jboolean isReadOnly();
		jobject getAttribute(jstring arg0);
		jlong getTotalSpace();
		jlong getUsableSpace();
		jlong getBlockSize();
		jlong getUnallocatedSpace();
		jboolean supportsFileAttributeView(jclass arg0);
		jboolean supportsFileAttributeView(jstring arg0);
		QAndroidJniObject getFileStoreAttributeView(jclass arg0);
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
	jstring FileStore::name()
	{
		return __thiz.callObjectMethod(
			"name",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring FileStore::type()
	{
		return __thiz.callObjectMethod(
			"type",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean FileStore::isReadOnly()
	{
		return __thiz.callMethod<jboolean>(
			"isReadOnly",
			"()Z"
		);
	}
	jobject FileStore::getAttribute(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getAttribute",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jlong FileStore::getTotalSpace()
	{
		return __thiz.callMethod<jlong>(
			"getTotalSpace",
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
	jlong FileStore::getBlockSize()
	{
		return __thiz.callMethod<jlong>(
			"getBlockSize",
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
	QAndroidJniObject FileStore::getFileStoreAttributeView(jclass arg0)
	{
		return __thiz.callObjectMethod(
			"getFileStoreAttributeView",
			"(Ljava/lang/Class;)Ljava/nio/file/attribute/FileStoreAttributeView;",
			arg0
		);
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

#endif // JAVA_NIO_FILE_FILESTORE

