#pragma once

#include "../../__JniBaseClass.hpp"
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
		
		FileWriter(QAndroidJniObject obj);
		// Constructors
		FileWriter(java::io::File &arg0);
		FileWriter(java::io::FileDescriptor &arg0);
		FileWriter(jstring &arg0);
		FileWriter(const QString &arg0);
		FileWriter(java::io::File &arg0, jboolean &arg1);
		FileWriter(java::io::File &arg0, java::nio::charset::Charset &arg1);
		FileWriter(jstring &arg0, jboolean &arg1);
		FileWriter(const QString &arg0, jboolean &arg1);
		FileWriter(jstring &arg0, java::nio::charset::Charset &arg1);
		FileWriter(const QString &arg0, java::nio::charset::Charset &arg1);
		FileWriter(java::io::File &arg0, java::nio::charset::Charset &arg1, jboolean &arg2);
		FileWriter(jstring &arg0, java::nio::charset::Charset &arg1, jboolean &arg2);
		FileWriter(const QString &arg0, java::nio::charset::Charset &arg1, jboolean &arg2);
		FileWriter() = default;
		
		// Methods
	};
} // namespace java::io

