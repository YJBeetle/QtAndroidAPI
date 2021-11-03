#pragma once

#include "../../JObject.hpp"
#include "./OutputStream.hpp"

namespace java::io
{
	class File;
}
namespace java::io
{
	class FileDescriptor;
}
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
		
		// QJniObject forward
		template<typename ...Ts> explicit FileOutputStream(const char *className, const char *sig, Ts...agv) : java::io::OutputStream(className, sig, std::forward<Ts>(agv)...) {}
		FileOutputStream(QJniObject obj);
		
		// Constructors
		FileOutputStream(java::io::File arg0);
		FileOutputStream(java::io::FileDescriptor arg0);
		FileOutputStream(jstring arg0);
		FileOutputStream(java::io::File arg0, jboolean arg1);
		FileOutputStream(jstring arg0, jboolean arg1);
		
		// Methods
		void close();
		java::nio::channels::FileChannel getChannel();
		java::io::FileDescriptor getFD();
		void write(jbyteArray arg0);
		void write(jint arg0);
		void write(jbyteArray arg0, jint arg1, jint arg2);
	};
} // namespace java::io

