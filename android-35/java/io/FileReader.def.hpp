#pragma once

#include "./InputStreamReader.def.hpp"

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
	class FileReader : public java::io::InputStreamReader
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit FileReader(const char *className, const char *sig, Ts...agv) : java::io::InputStreamReader(className, sig, std::forward<Ts>(agv)...) {}
		FileReader(QJniObject obj) : java::io::InputStreamReader(obj) {}
		
		// Constructors
		FileReader(java::io::File arg0);
		FileReader(java::io::FileDescriptor arg0);
		FileReader(JString arg0);
		FileReader(java::io::File arg0, java::nio::charset::Charset arg1);
		FileReader(JString arg0, java::nio::charset::Charset arg1);
		
		// Methods
	};
} // namespace java::io

