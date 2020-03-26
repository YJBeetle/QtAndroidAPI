#pragma once

#ifndef JAVA_NIO_FILE_FILESYSTEM
#define JAVA_NIO_FILE_FILESYSTEM

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::nio::file::spi
{
	class FileSystemProvider;
}
namespace __jni_impl::java::nio::file::attribute
{
	class UserPrincipalLookupService;
}

namespace __jni_impl::java::nio::file
{
	class FileSystem : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean isOpen();
		QAndroidJniObject provider();
		void close();
		QAndroidJniObject getPath(jstring arg0, jarray arg1);
		jboolean isReadOnly();
		QAndroidJniObject supportedFileAttributeViews();
		QAndroidJniObject newWatchService();
		QAndroidJniObject getRootDirectories();
		QAndroidJniObject getFileStores();
		QAndroidJniObject getPathMatcher(jstring arg0);
		QAndroidJniObject getUserPrincipalLookupService();
		jstring getSeparator();
	};
} // namespace __jni_impl::java::nio::file

#include "spi/FileSystemProvider.hpp"
#include "attribute/UserPrincipalLookupService.hpp"

namespace __jni_impl::java::nio::file
{
	// Fields
	
	// Constructors
	void FileSystem::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.FileSystem",
			"(V)V");
	}
	
	// Methods
	jboolean FileSystem::isOpen()
	{
		return __thiz.callMethod<jboolean>(
			"isOpen",
			"()Z"
		);
	}
	QAndroidJniObject FileSystem::provider()
	{
		return __thiz.callObjectMethod(
			"provider",
			"()Ljava/nio/file/spi/FileSystemProvider;"
		);
	}
	void FileSystem::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	QAndroidJniObject FileSystem::getPath(jstring arg0, jarray arg1)
	{
		return __thiz.callObjectMethod(
			"getPath",
			"(Ljava/lang/String;[Ljava/lang/String;)Ljava/nio/file/Path;",
			arg0,
			arg1
		);
	}
	jboolean FileSystem::isReadOnly()
	{
		return __thiz.callMethod<jboolean>(
			"isReadOnly",
			"()Z"
		);
	}
	QAndroidJniObject FileSystem::supportedFileAttributeViews()
	{
		return __thiz.callObjectMethod(
			"supportedFileAttributeViews",
			"()Ljava/util/Set;"
		);
	}
	QAndroidJniObject FileSystem::newWatchService()
	{
		return __thiz.callObjectMethod(
			"newWatchService",
			"()Ljava/nio/file/WatchService;"
		);
	}
	QAndroidJniObject FileSystem::getRootDirectories()
	{
		return __thiz.callObjectMethod(
			"getRootDirectories",
			"()Ljava/lang/Iterable;"
		);
	}
	QAndroidJniObject FileSystem::getFileStores()
	{
		return __thiz.callObjectMethod(
			"getFileStores",
			"()Ljava/lang/Iterable;"
		);
	}
	QAndroidJniObject FileSystem::getPathMatcher(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getPathMatcher",
			"(Ljava/lang/String;)Ljava/nio/file/PathMatcher;",
			arg0
		);
	}
	QAndroidJniObject FileSystem::getUserPrincipalLookupService()
	{
		return __thiz.callObjectMethod(
			"getUserPrincipalLookupService",
			"()Ljava/nio/file/attribute/UserPrincipalLookupService;"
		);
	}
	jstring FileSystem::getSeparator()
	{
		return __thiz.callObjectMethod(
			"getSeparator",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::java::nio::file

namespace java::nio::file
{
	class FileSystem : public __jni_impl::java::nio::file::FileSystem
	{
	public:
		FileSystem(QAndroidJniObject obj) { __thiz = obj; }
		FileSystem()
		{
			__constructor();
		}
	};
} // namespace java::nio::file

#endif // JAVA_NIO_FILE_FILESYSTEM

