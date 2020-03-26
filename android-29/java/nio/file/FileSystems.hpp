#pragma once

#ifndef JAVA_NIO_FILE_FILESYSTEMS
#define JAVA_NIO_FILE_FILESYSTEMS

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::nio::file
{
	class FileSystem;
}
namespace __jni_impl::java::lang
{
	class ClassLoader;
}
namespace __jni_impl::java::net
{
	class URI;
}

namespace __jni_impl::java::nio::file
{
	class FileSystems : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject getDefault();
		static QAndroidJniObject newFileSystem(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1);
		static QAndroidJniObject newFileSystem(__jni_impl::__JniBaseClass arg0, __jni_impl::java::lang::ClassLoader arg1);
		static QAndroidJniObject newFileSystem(__jni_impl::__JniBaseClass arg0);
		static QAndroidJniObject newFileSystem(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::java::lang::ClassLoader arg2);
		static QAndroidJniObject newFileSystem(__jni_impl::java::net::URI arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::java::lang::ClassLoader arg2);
		static QAndroidJniObject newFileSystem(__jni_impl::java::net::URI arg0, __jni_impl::__JniBaseClass arg1);
		static QAndroidJniObject getFileSystem(__jni_impl::java::net::URI arg0);
	};
} // namespace __jni_impl::java::nio::file

#include "FileSystem.hpp"
#include "../../lang/ClassLoader.hpp"
#include "../../net/URI.hpp"

namespace __jni_impl::java::nio::file
{
	// Fields
	
	// Constructors
	void FileSystems::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.nio.file.FileSystems",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject FileSystems::getDefault()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.FileSystems",
			"getDefault",
			"()Ljava/nio/file/FileSystem;"
		);
	}
	QAndroidJniObject FileSystems::newFileSystem(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.FileSystems",
			"newFileSystem",
			"(Ljava/nio/file/Path;Ljava/util/Map;)Ljava/nio/file/FileSystem;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject FileSystems::newFileSystem(__jni_impl::__JniBaseClass arg0, __jni_impl::java::lang::ClassLoader arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.FileSystems",
			"newFileSystem",
			"(Ljava/nio/file/Path;Ljava/lang/ClassLoader;)Ljava/nio/file/FileSystem;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject FileSystems::newFileSystem(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.FileSystems",
			"newFileSystem",
			"(Ljava/nio/file/Path;)Ljava/nio/file/FileSystem;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject FileSystems::newFileSystem(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::java::lang::ClassLoader arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.FileSystems",
			"newFileSystem",
			"(Ljava/nio/file/Path;Ljava/util/Map;Ljava/lang/ClassLoader;)Ljava/nio/file/FileSystem;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject FileSystems::newFileSystem(__jni_impl::java::net::URI arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::java::lang::ClassLoader arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.FileSystems",
			"newFileSystem",
			"(Ljava/net/URI;Ljava/util/Map;Ljava/lang/ClassLoader;)Ljava/nio/file/FileSystem;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject FileSystems::newFileSystem(__jni_impl::java::net::URI arg0, __jni_impl::__JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.FileSystems",
			"newFileSystem",
			"(Ljava/net/URI;Ljava/util/Map;)Ljava/nio/file/FileSystem;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject FileSystems::getFileSystem(__jni_impl::java::net::URI arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.FileSystems",
			"getFileSystem",
			"(Ljava/net/URI;)Ljava/nio/file/FileSystem;",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::java::nio::file

namespace java::nio::file
{
	class FileSystems : public __jni_impl::java::nio::file::FileSystems
	{
	public:
		FileSystems(QAndroidJniObject obj) { __thiz = obj; }
		FileSystems()
		{
			__constructor();
		}
	};
} // namespace java::nio::file

#endif // JAVA_NIO_FILE_FILESYSTEMS

