#pragma once

#include "./Writer.hpp"

class JCharArray;
namespace java::io
{
	class Writer;
}
class JString;
class JString;
namespace java::lang
{
	class StringBuffer;
}

namespace java::io
{
	class StringWriter : public java::io::Writer
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit StringWriter(const char *className, const char *sig, Ts...agv) : java::io::Writer(className, sig, std::forward<Ts>(agv)...) {}
		StringWriter(QAndroidJniObject obj);
		
		// Constructors
		StringWriter();
		StringWriter(jint arg0);
		
		// Methods
		java::io::StringWriter append(jchar arg0);
		java::io::StringWriter append(JString arg0);
		java::io::StringWriter append(JString arg0, jint arg1, jint arg2);
		void close();
		void flush();
		java::lang::StringBuffer getBuffer();
		JString toString();
		void write(jint arg0);
		void write(JString arg0);
		void write(JCharArray arg0, jint arg1, jint arg2);
		void write(JString arg0, jint arg1, jint arg2);
	};
} // namespace java::io

