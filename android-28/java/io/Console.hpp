#pragma once

#include "../../JObject.hpp"

class JCharArray;
class JObjectArray;
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
class JObject;
class JString;
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
	class Console : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Console(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Console(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void flush();
		java::io::Console format(JString arg0, JObjectArray arg1);
		java::io::Console printf(JString arg0, JObjectArray arg1);
		JString readLine();
		JString readLine(JString arg0, JObjectArray arg1);
		JCharArray readPassword();
		JCharArray readPassword(JString arg0, JObjectArray arg1);
		java::io::Reader reader();
		java::io::PrintWriter writer();
	};
} // namespace java::io

