#pragma once

#include "./OutputStream.def.hpp"

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
	class FileOutputStream : public java::io::OutputStream
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit FileOutputStream(const char *className, const char *sig, Ts...agv) : java::io::OutputStream(className, sig, std::forward<Ts>(agv)...) {}
		FileOutputStream(QAndroidJniObject obj) : java::io::OutputStream(obj) {}
		
		// Constructors
		FileOutputStream(java::io::File arg0);
		FileOutputStream(java::io::FileDescriptor arg0);
		FileOutputStream(JString arg0);
		FileOutputStream(java::io::File arg0, jboolean arg1);
		FileOutputStream(JString arg0, jboolean arg1);
		
		// Methods
		void close() const;
		java::nio::channels::FileChannel getChannel() const;
		java::io::FileDescriptor getFD() const;
		void write(JByteArray arg0) const;
		void write(jint arg0) const;
		void write(JByteArray arg0, jint arg1, jint arg2) const;
	};
} // namespace java::io

