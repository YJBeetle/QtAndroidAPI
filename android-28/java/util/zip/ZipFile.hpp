#pragma once

#include "../../../JObject.hpp"

class JIntArray;
namespace java::io
{
	class File;
}
namespace java::io
{
	class InputStream;
}
class JString;
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
	class ZipFile : public JObject
	{
	public:
		// Fields
		static jint OPEN_DELETE();
		static jint OPEN_READ();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ZipFile(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ZipFile(QAndroidJniObject obj);
		
		// Constructors
		ZipFile(java::io::File arg0);
		ZipFile(JString arg0);
		ZipFile(java::io::File arg0, jint arg1);
		ZipFile(java::io::File arg0, java::nio::charset::Charset arg1);
		ZipFile(JString arg0, java::nio::charset::Charset arg1);
		ZipFile(java::io::File arg0, jint arg1, java::nio::charset::Charset arg2);
		
		// Methods
		void close() const;
		JObject entries() const;
		JString getComment() const;
		java::util::zip::ZipEntry getEntry(JString arg0) const;
		java::io::InputStream getInputStream(java::util::zip::ZipEntry arg0) const;
		JString getName() const;
		jint size() const;
		JObject stream() const;
	};
} // namespace java::util::zip

