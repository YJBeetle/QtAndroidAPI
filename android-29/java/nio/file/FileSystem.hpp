#pragma once

#ifndef JAVA_NIO_FILE_FILESYSTEM
#define JAVA_NIO_FILE_FILESYSTEM

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::nio::file::attribute
{
	class UserPrincipalLookupService;
}
namespace __jni_impl::java::nio::file::spi
{
	class FileSystemProvider;
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
		void close();
		QAndroidJniObject getFileStores();
		QAndroidJniObject getPath(jstring arg0, jarray arg1);
		QAndroidJniObject getPath(const QString &arg0, jarray arg1);
		QAndroidJniObject getPathMatcher(jstring arg0);
		QAndroidJniObject getPathMatcher(const QString &arg0);
		QAndroidJniObject getRootDirectories();
		jstring getSeparator();
		QAndroidJniObject getUserPrincipalLookupService();
		jboolean isOpen();
		jboolean isReadOnly();
		QAndroidJniObject newWatchService();
		QAndroidJniObject provider();
		QAndroidJniObject supportedFileAttributeViews();
	};
} // namespace __jni_impl::java::nio::file

#include "attribute/UserPrincipalLookupService.hpp"
#include "spi/FileSystemProvider.hpp"

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
	void FileSystem::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	QAndroidJniObject FileSystem::getFileStores()
	{
		return __thiz.callObjectMethod(
			"getFileStores",
			"()Ljava/lang/Iterable;"
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
	QAndroidJniObject FileSystem::getPath(const QString &arg0, jarray arg1)
	{
		return __thiz.callObjectMethod(
			"getPath",
			"(Ljava/lang/String;[Ljava/lang/String;)Ljava/nio/file/Path;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
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
	QAndroidJniObject FileSystem::getPathMatcher(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getPathMatcher",
			"(Ljava/lang/String;)Ljava/nio/file/PathMatcher;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject FileSystem::getRootDirectories()
	{
		return __thiz.callObjectMethod(
			"getRootDirectories",
			"()Ljava/lang/Iterable;"
		);
	}
	jstring FileSystem::getSeparator()
	{
		return __thiz.callObjectMethod(
			"getSeparator",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject FileSystem::getUserPrincipalLookupService()
	{
		return __thiz.callObjectMethod(
			"getUserPrincipalLookupService",
			"()Ljava/nio/file/attribute/UserPrincipalLookupService;"
		);
	}
	jboolean FileSystem::isOpen()
	{
		return __thiz.callMethod<jboolean>(
			"isOpen",
			"()Z"
		);
	}
	jboolean FileSystem::isReadOnly()
	{
		return __thiz.callMethod<jboolean>(
			"isReadOnly",
			"()Z"
		);
	}
	QAndroidJniObject FileSystem::newWatchService()
	{
		return __thiz.callObjectMethod(
			"newWatchService",
			"()Ljava/nio/file/WatchService;"
		);
	}
	QAndroidJniObject FileSystem::provider()
	{
		return __thiz.callObjectMethod(
			"provider",
			"()Ljava/nio/file/spi/FileSystemProvider;"
		);
	}
	QAndroidJniObject FileSystem::supportedFileAttributeViews()
	{
		return __thiz.callObjectMethod(
			"supportedFileAttributeViews",
			"()Ljava/util/Set;"
		);
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

