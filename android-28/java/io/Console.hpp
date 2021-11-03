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
		
		// QJniObject forward
		template<typename ...Ts> explicit Console(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Console(QJniObject obj);
		
		// Constructors
		
		// Methods
		void flush() const;
		java::io::Console format(JString arg0, JObjectArray arg1) const;
		java::io::Console printf(JString arg0, JObjectArray arg1) const;
		JString readLine() const;
		JString readLine(JString arg0, JObjectArray arg1) const;
		JCharArray readPassword() const;
		JCharArray readPassword(JString arg0, JObjectArray arg1) const;
		java::io::Reader reader() const;
		java::io::PrintWriter writer() const;
	};
} // namespace java::io

