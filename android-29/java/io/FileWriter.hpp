#pragma once

#include "../../JObject.hpp"
#include "./Writer.hpp"
#include "./OutputStreamWriter.hpp"

namespace java::io
{
	class File;
}
namespace java::io
{
	class FileDescriptor;
}
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
		
		// QJniObject forward
		template<typename ...Ts> explicit FileWriter(const char *className, const char *sig, Ts...agv) : java::io::OutputStreamWriter(className, sig, std::forward<Ts>(agv)...) {}
		FileWriter(QJniObject obj);
		
		// Constructors
		FileWriter(java::io::File arg0);
		FileWriter(java::io::FileDescriptor arg0);
		FileWriter(jstring arg0);
		FileWriter(java::io::File arg0, jboolean arg1);
		FileWriter(java::io::File arg0, java::nio::charset::Charset arg1);
		FileWriter(jstring arg0, jboolean arg1);
		FileWriter(jstring arg0, java::nio::charset::Charset arg1);
		FileWriter(java::io::File arg0, java::nio::charset::Charset arg1, jboolean arg2);
		FileWriter(jstring arg0, java::nio::charset::Charset arg1, jboolean arg2);
		
		// Methods
	};
} // namespace java::io

