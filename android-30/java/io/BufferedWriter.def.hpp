#pragma once

#include "./Writer.def.hpp"

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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit BufferedWriter(const char *className, const char *sig, Ts...agv) : java::io::Writer(className, sig, std::forward<Ts>(agv)...) {}
		BufferedWriter(QAndroidJniObject obj) : java::io::Writer(obj) {}
		
		// Constructors
		BufferedWriter(java::io::Writer arg0);
		BufferedWriter(java::io::Writer arg0, jint arg1);
		
		// Methods
		void close() const;
		void flush() const;
		void newLine() const;
		void write(jint arg0) const;
		void write(JCharArray arg0, jint arg1, jint arg2) const;
		void write(JString arg0, jint arg1, jint arg2) const;
	};
} // namespace java::io

