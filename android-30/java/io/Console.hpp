#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::io
{
	class PrintWriter;
}
namespace java::io
{
	class Reader;
}
namespace java::io
{
	class Writer;
}
namespace java::nio::charset
{
	class Charset;
}
namespace java::util
{
	class Formatter;
}

namespace java::io
{
	class Console : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Console(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Console(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void flush();
		java::io::Console format(jstring arg0, jobjectArray arg1);
		java::io::Console printf(jstring arg0, jobjectArray arg1);
		jstring readLine();
		jstring readLine(jstring arg0, jobjectArray arg1);
		jcharArray readPassword();
		jcharArray readPassword(jstring arg0, jobjectArray arg1);
		java::io::Reader reader();
		java::io::PrintWriter writer();
	};
} // namespace java::io

