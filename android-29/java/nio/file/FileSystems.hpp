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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit FileSystems(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		FileSystems(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject getDefault();
		static QAndroidJniObject getFileSystem(java::net::URI arg0);
		static QAndroidJniObject newFileSystem(__JniBaseClass arg0);
		static QAndroidJniObject newFileSystem(java::net::URI arg0, __JniBaseClass arg1);
		static QAndroidJniObject newFileSystem(__JniBaseClass arg0, java::lang::ClassLoader arg1);
		static QAndroidJniObject newFileSystem(__JniBaseClass arg0, __JniBaseClass arg1);
		static QAndroidJniObject newFileSystem(java::net::URI arg0, __JniBaseClass arg1, java::lang::ClassLoader arg2);
		static QAndroidJniObject newFileSystem(__JniBaseClass arg0, __JniBaseClass arg1, java::lang::ClassLoader arg2);
	};
} // namespace java::nio::file

