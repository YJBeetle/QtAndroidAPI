#pragma once

#include "./InputStream.def.hpp"

class JByteArray;
namespace java::io
{
	class File;
}
namespace java::io
{
	class FileDescriptor;
}
namespace java::io
{
	class OutputStream;
}
class JObject;
class JString;
namespace java::nio::channels
{
	class FileChannel;
}

namespace java::io
{
	class FileInputStream : public java::io::InputStream
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit FileInputStream(const char *className, const char *sig, Ts...agv) : java::io::InputStream(className, sig, std::forward<Ts>(agv)...) {}
		FileInputStream(QJniObject obj) : java::io::InputStream(obj) {}
		
		// Constructors
		FileInputStream(java::io::File arg0);
		FileInputStream(java::io::FileDescriptor arg0);
		FileInputStream(JString arg0);
		
		// Methods
		jint available() const;
		void close() const;
		java::nio::channels::FileChannel getChannel() const;
		java::io::FileDescriptor getFD() const;
		jint read() const;
		jint read(JByteArray arg0) const;
		jint read(JByteArray arg0, jint arg1, jint arg2) const;
		JByteArray readAllBytes() const;
		JByteArray readNBytes(jint arg0) const;
		jlong skip(jlong arg0) const;
		jlong transferTo(java::io::OutputStream arg0) const;
	};
} // namespace java::io

