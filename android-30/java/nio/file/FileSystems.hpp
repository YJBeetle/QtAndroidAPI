#pragma once

#include "../../../JObject.hpp"

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
	class FileSystems : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit FileSystems(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FileSystems(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static java::nio::file::FileSystem getDefault();
		static java::nio::file::FileSystem getFileSystem(java::net::URI arg0);
		static java::nio::file::FileSystem newFileSystem(JObject arg0);
		static java::nio::file::FileSystem newFileSystem(java::net::URI arg0, JObject arg1);
		static java::nio::file::FileSystem newFileSystem(JObject arg0, java::lang::ClassLoader arg1);
		static java::nio::file::FileSystem newFileSystem(JObject arg0, JObject arg1);
		static java::nio::file::FileSystem newFileSystem(java::net::URI arg0, JObject arg1, java::lang::ClassLoader arg2);
		static java::nio::file::FileSystem newFileSystem(JObject arg0, JObject arg1, java::lang::ClassLoader arg2);
	};
} // namespace java::nio::file

