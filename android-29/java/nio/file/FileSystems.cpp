#include "../../lang/ClassLoader.hpp"
#include "../../net/URI.hpp"
#include "./FileSystem.hpp"
#include "./FileSystems.hpp"

namespace java::nio::file
{
	// Fields
	
	// QAndroidJniObject forward
	FileSystems::FileSystems(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	java::nio::file::FileSystem FileSystems::getDefault()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.FileSystems",
			"getDefault",
			"()Ljava/nio/file/FileSystem;"
		);
	}
	java::nio::file::FileSystem FileSystems::getFileSystem(java::net::URI arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.FileSystems",
			"getFileSystem",
			"(Ljava/net/URI;)Ljava/nio/file/FileSystem;",
			arg0.object()
		);
	}
	java::nio::file::FileSystem FileSystems::newFileSystem(__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.FileSystems",
			"newFileSystem",
			"(Ljava/nio/file/Path;)Ljava/nio/file/FileSystem;",
			arg0.object()
		);
	}
	java::nio::file::FileSystem FileSystems::newFileSystem(java::net::URI arg0, __JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.FileSystems",
			"newFileSystem",
			"(Ljava/net/URI;Ljava/util/Map;)Ljava/nio/file/FileSystem;",
			arg0.object(),
			arg1.object()
		);
	}
	java::nio::file::FileSystem FileSystems::newFileSystem(__JniBaseClass arg0, java::lang::ClassLoader arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.FileSystems",
			"newFileSystem",
			"(Ljava/nio/file/Path;Ljava/lang/ClassLoader;)Ljava/nio/file/FileSystem;",
			arg0.object(),
			arg1.object()
		);
	}
	java::nio::file::FileSystem FileSystems::newFileSystem(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.FileSystems",
			"newFileSystem",
			"(Ljava/nio/file/Path;Ljava/util/Map;)Ljava/nio/file/FileSystem;",
			arg0.object(),
			arg1.object()
		);
	}
	java::nio::file::FileSystem FileSystems::newFileSystem(java::net::URI arg0, __JniBaseClass arg1, java::lang::ClassLoader arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.FileSystems",
			"newFileSystem",
			"(Ljava/net/URI;Ljava/util/Map;Ljava/lang/ClassLoader;)Ljava/nio/file/FileSystem;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	java::nio::file::FileSystem FileSystems::newFileSystem(__JniBaseClass arg0, __JniBaseClass arg1, java::lang::ClassLoader arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.nio.file.FileSystems",
			"newFileSystem",
			"(Ljava/nio/file/Path;Ljava/util/Map;Ljava/lang/ClassLoader;)Ljava/nio/file/FileSystem;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
} // namespace java::nio::file

