#pragma once

#include "../../__JniBaseClass.hpp"
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
		
		FileReader(QAndroidJniObject obj);
		// Constructors
		FileReader(java::io::File &arg0);
		FileReader(java::io::FileDescriptor &arg0);
		FileReader(jstring &arg0);
		FileReader(const QString &arg0);
		FileReader(java::io::File &arg0, java::nio::charset::Charset &arg1);
		FileReader(jstring &arg0, java::nio::charset::Charset &arg1);
		FileReader(const QString &arg0, java::nio::charset::Charset &arg1);
		FileReader() = default;
		
		// Methods
	};
} // namespace java::io

