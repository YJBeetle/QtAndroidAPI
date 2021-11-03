#pragma once

#include "../../JObject.hpp"
#include "./Reader.hpp"
#include "./InputStreamReader.hpp"

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
	class FileReader : public java::io::InputStreamReader
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit FileReader(const char *className, const char *sig, Ts...agv) : java::io::InputStreamReader(className, sig, std::forward<Ts>(agv)...) {}
		FileReader(QAndroidJniObject obj);
		
		// Constructors
		FileReader(java::io::File arg0);
		FileReader(java::io::FileDescriptor arg0);
		FileReader(jstring arg0);
		FileReader(java::io::File arg0, java::nio::charset::Charset arg1);
		FileReader(jstring arg0, java::nio::charset::Charset arg1);
		
		// Methods
	};
} // namespace java::io

