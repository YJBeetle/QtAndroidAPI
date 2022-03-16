#pragma once

#include "./OutputStreamWriter.hpp"

namespace java::io
{
	class File;
}
namespace java::io
{
	class FileDescriptor;
}
class JString;
namespace java::nio::charset
{
	class Charset;
}

namespace java::io
{
	class FileWriter : public java::io::OutputStreamWriter
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit FileWriter(const char *className, const char *sig, Ts...agv) : java::io::OutputStreamWriter(className, sig, std::forward<Ts>(agv)...) {}
		FileWriter(QAndroidJniObject obj) : java::io::OutputStreamWriter(obj) {}
		
		// Constructors
		FileWriter(java::io::File arg0);
		FileWriter(java::io::FileDescriptor arg0);
		FileWriter(JString arg0);
		FileWriter(java::io::File arg0, jboolean arg1);
		FileWriter(java::io::File arg0, java::nio::charset::Charset arg1);
		FileWriter(JString arg0, jboolean arg1);
		FileWriter(JString arg0, java::nio::charset::Charset arg1);
		FileWriter(java::io::File arg0, java::nio::charset::Charset arg1, jboolean arg2);
		FileWriter(JString arg0, java::nio::charset::Charset arg1, jboolean arg2);
		
		// Methods
	};
} // namespace java::io

