#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::io
{
	class File;
}
namespace java::io
{
	class InputStream;
}
namespace java::nio::charset
{
	class Charset;
}
namespace java::util::jar
{
	class JarEntry;
}
namespace java::util::zip
{
	class ZipEntry;
}

namespace java::util::zip
{
	class ZipFile : public __JniBaseClass
	{
	public:
		// Fields
		static jint OPEN_DELETE();
		static jint OPEN_READ();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ZipFile(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ZipFile(QAndroidJniObject obj);
		
		// Constructors
		ZipFile(java::io::File arg0);
		ZipFile(jstring arg0);
		ZipFile(java::io::File arg0, jint arg1);
		ZipFile(java::io::File arg0, java::nio::charset::Charset arg1);
		ZipFile(jstring arg0, java::nio::charset::Charset arg1);
		ZipFile(java::io::File arg0, jint arg1, java::nio::charset::Charset arg2);
		
		// Methods
		void close();
		__JniBaseClass entries();
		jstring getComment();
		java::util::zip::ZipEntry getEntry(jstring arg0);
		java::io::InputStream getInputStream(java::util::zip::ZipEntry arg0);
		jstring getName();
		jint size();
		__JniBaseClass stream();
	};
} // namespace java::util::zip

