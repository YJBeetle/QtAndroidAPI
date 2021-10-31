#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::lang
{
	class ClassLoader;
}
namespace java::net
{
	class URI;
}
namespace java::nio::file
{
	class FileSystem;
}

namespace java::nio::file
{
	class FileSystems : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit FileSystems(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		FileSystems(QJniObject obj);
		
		// Constructors
		
		// Methods
		static java::nio::file::FileSystem getDefault();
		static java::nio::file::FileSystem getFileSystem(java::net::URI arg0);
		static java::nio::file::FileSystem newFileSystem(__JniBaseClass arg0);
		static java::nio::file::FileSystem newFileSystem(java::net::URI arg0, __JniBaseClass arg1);
		static java::nio::file::FileSystem newFileSystem(__JniBaseClass arg0, java::lang::ClassLoader arg1);
		static java::nio::file::FileSystem newFileSystem(__JniBaseClass arg0, __JniBaseClass arg1);
		static java::nio::file::FileSystem newFileSystem(java::net::URI arg0, __JniBaseClass arg1, java::lang::ClassLoader arg2);
		static java::nio::file::FileSystem newFileSystem(__JniBaseClass arg0, __JniBaseClass arg1, java::lang::ClassLoader arg2);
	};
} // namespace java::nio::file

