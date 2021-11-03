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
		
		// QJniObject forward
		template<typename ...Ts> explicit StringWriter(const char *className, const char *sig, Ts...agv) : java::io::Writer(className, sig, std::forward<Ts>(agv)...) {}
		StringWriter(QJniObject obj);
		
		// Constructors
		StringWriter();
		StringWriter(jint arg0);
		
		// Methods
		java::io::StringWriter append(jchar arg0) const;
		java::io::StringWriter append(JString arg0) const;
		java::io::StringWriter append(JString arg0, jint arg1, jint arg2) const;
		void close() const;
		void flush() const;
		java::lang::StringBuffer getBuffer() const;
		JString toString() const;
		void write(jint arg0) const;
		void write(JString arg0) const;
		void write(JCharArray arg0, jint arg1, jint arg2) const;
		void write(JString arg0, jint arg1, jint arg2) const;
	};
} // namespace java::io

