#pragma once

#include "./InputStream.hpp"

class JByteArray;
namespace java::io
{
	class File;
}
namespace java::io
{
	class FileDescriptor;
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
		FileInputStream(QJniObject obj);
		
		// Constructors
		FileInputStream(java::io::File arg0);
		FileInputStream(java::io::FileDescriptor arg0);
		FileInputStream(JString arg0);
		
		// Methods
		jint available();
		void close();
		java::nio::channels::FileChannel getChannel();
		java::io::FileDescriptor getFD();
		jint read();
		jint read(JByteArray arg0);
		jint read(JByteArray arg0, jint arg1, jint arg2);
		jlong skip(jlong arg0);
	};
} // namespace java::io

