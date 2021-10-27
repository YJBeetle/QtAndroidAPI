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
		
		Console(QAndroidJniObject obj);
		// Constructors
		Console() = default;
		
		// Methods
		void flush();
		QAndroidJniObject format(jstring arg0, jobjectArray arg1);
		QAndroidJniObject format(const QString &arg0, jobjectArray arg1);
		QAndroidJniObject printf(jstring arg0, jobjectArray arg1);
		QAndroidJniObject printf(const QString &arg0, jobjectArray arg1);
		jstring readLine();
		jstring readLine(jstring arg0, jobjectArray arg1);
		jstring readLine(const QString &arg0, jobjectArray arg1);
		jcharArray readPassword();
		jcharArray readPassword(jstring arg0, jobjectArray arg1);
		jcharArray readPassword(const QString &arg0, jobjectArray arg1);
		QAndroidJniObject reader();
		QAndroidJniObject writer();
	};
} // namespace java::io

