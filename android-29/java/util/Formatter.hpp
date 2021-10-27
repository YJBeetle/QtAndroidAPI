#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::io
{
	class File;
}
namespace java::io
{
	class IOException;
}
namespace java::io
{
	class OutputStream;
}
namespace java::io
{
	class PrintStream;
}
namespace java::nio::charset
{
	class Charset;
}
namespace java::util
{
	class Locale;
}
namespace java::util::regex
{
	class Pattern;
}

namespace java::util
{
	class Formatter : public __JniBaseClass
	{
	public:
		// Fields
		
		Formatter(QAndroidJniObject obj);
		// Constructors
		Formatter();
		Formatter(java::io::File &arg0);
		Formatter(java::io::OutputStream &arg0);
		Formatter(java::io::PrintStream &arg0);
		Formatter(__JniBaseClass &arg0);
		Formatter(jstring &arg0);
		Formatter(const QString &arg0);
		Formatter(java::util::Locale &arg0);
		Formatter(java::io::File &arg0, jstring &arg1);
		Formatter(java::io::File &arg0, const QString &arg1);
		Formatter(java::io::OutputStream &arg0, jstring &arg1);
		Formatter(java::io::OutputStream &arg0, const QString &arg1);
		Formatter(__JniBaseClass &arg0, java::util::Locale &arg1);
		Formatter(jstring &arg0, jstring &arg1);
		Formatter(const QString &arg0, const QString &arg1);
		Formatter(java::io::File &arg0, jstring &arg1, java::util::Locale &arg2);
		Formatter(java::io::File &arg0, const QString &arg1, java::util::Locale &arg2);
		Formatter(java::io::File &arg0, java::nio::charset::Charset &arg1, java::util::Locale &arg2);
		Formatter(java::io::OutputStream &arg0, jstring &arg1, java::util::Locale &arg2);
		Formatter(java::io::OutputStream &arg0, const QString &arg1, java::util::Locale &arg2);
		Formatter(java::io::OutputStream &arg0, java::nio::charset::Charset &arg1, java::util::Locale &arg2);
		Formatter(jstring &arg0, jstring &arg1, java::util::Locale &arg2);
		Formatter(const QString &arg0, const QString &arg1, java::util::Locale &arg2);
		Formatter(jstring &arg0, java::nio::charset::Charset &arg1, java::util::Locale &arg2);
		Formatter(const QString &arg0, java::nio::charset::Charset &arg1, java::util::Locale &arg2);
		
		// Methods
		void close();
		void flush();
		QAndroidJniObject format(jstring arg0, jobjectArray arg1);
		QAndroidJniObject format(const QString &arg0, jobjectArray arg1);
		QAndroidJniObject format(java::util::Locale arg0, jstring arg1, jobjectArray arg2);
		QAndroidJniObject format(java::util::Locale arg0, const QString &arg1, jobjectArray arg2);
		QAndroidJniObject ioException();
		QAndroidJniObject locale();
		QAndroidJniObject out();
		jstring toString();
	};
} // namespace java::util

