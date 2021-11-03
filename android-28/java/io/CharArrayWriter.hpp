#pragma once

#include "./Writer.hpp"

class JCharArray;
namespace java::io
{
	class Writer;
}
class JString;
class JString;

namespace java::io
{
	class CharArrayWriter : public java::io::Writer
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CharArrayWriter(const char *className, const char *sig, Ts...agv) : java::io::Writer(className, sig, std::forward<Ts>(agv)...) {}
		CharArrayWriter(QAndroidJniObject obj);
		
		// Constructors
		CharArrayWriter();
		CharArrayWriter(jint arg0);
		
		// Methods
		java::io::CharArrayWriter append(jchar arg0);
		java::io::CharArrayWriter append(JString arg0);
		java::io::CharArrayWriter append(JString arg0, jint arg1, jint arg2);
		void close();
		void flush();
		void reset();
		jint size();
		JCharArray toCharArray();
		JString toString();
		void write(jint arg0);
		void write(JCharArray arg0, jint arg1, jint arg2);
		void write(JString arg0, jint arg1, jint arg2);
		void writeTo(java::io::Writer arg0);
	};
} // namespace java::io

