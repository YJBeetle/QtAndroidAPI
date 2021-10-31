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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Formatter(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Formatter(QAndroidJniObject obj);
		
		// Constructors
		Formatter();
		Formatter(java::io::File arg0);
		Formatter(java::io::OutputStream arg0);
		Formatter(java::io::PrintStream arg0);
		Formatter(__JniBaseClass arg0);
		Formatter(jstring arg0);
		Formatter(java::util::Locale arg0);
		Formatter(java::io::File arg0, jstring arg1);
		Formatter(java::io::OutputStream arg0, jstring arg1);
		Formatter(__JniBaseClass arg0, java::util::Locale arg1);
		Formatter(jstring arg0, jstring arg1);
		Formatter(java::io::File arg0, jstring arg1, java::util::Locale arg2);
		Formatter(java::io::File arg0, java::nio::charset::Charset arg1, java::util::Locale arg2);
		Formatter(java::io::OutputStream arg0, jstring arg1, java::util::Locale arg2);
		Formatter(java::io::OutputStream arg0, java::nio::charset::Charset arg1, java::util::Locale arg2);
		Formatter(jstring arg0, jstring arg1, java::util::Locale arg2);
		Formatter(jstring arg0, java::nio::charset::Charset arg1, java::util::Locale arg2);
		
		// Methods
		void close();
		void flush();
		java::util::Formatter format(jstring arg0, jobjectArray arg1);
		java::util::Formatter format(java::util::Locale arg0, jstring arg1, jobjectArray arg2);
		java::io::IOException ioException();
		java::util::Locale locale();
		__JniBaseClass out();
		jstring toString();
	};
} // namespace java::util

