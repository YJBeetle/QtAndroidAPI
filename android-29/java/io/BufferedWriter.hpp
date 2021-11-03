#pragma once

#include "./Writer.hpp"

class JCharArray;
namespace java::io
{
	class Writer;
}
class JString;

namespace java::io
{
	class BufferedWriter : public java::io::Writer
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit BufferedWriter(const char *className, const char *sig, Ts...agv) : java::io::Writer(className, sig, std::forward<Ts>(agv)...) {}
		BufferedWriter(QJniObject obj);
		
		// Constructors
		BufferedWriter(java::io::Writer arg0);
		BufferedWriter(java::io::Writer arg0, jint arg1);
		
		// Methods
		void close();
		void flush();
		void newLine();
		void write(jint arg0);
		void write(JCharArray arg0, jint arg1, jint arg2);
		void write(JString arg0, jint arg1, jint arg2);
	};
} // namespace java::io

