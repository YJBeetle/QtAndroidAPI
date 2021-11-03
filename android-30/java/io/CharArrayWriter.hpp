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
		java::io::CharArrayWriter append(jchar arg0) const;
		java::io::CharArrayWriter append(JString arg0) const;
		java::io::CharArrayWriter append(JString arg0, jint arg1, jint arg2) const;
		void close() const;
		void flush() const;
		void reset() const;
		jint size() const;
		JCharArray toCharArray() const;
		JString toString() const;
		void write(jint arg0) const;
		void write(JCharArray arg0, jint arg1, jint arg2) const;
		void write(JString arg0, jint arg1, jint arg2) const;
		void writeTo(java::io::Writer arg0) const;
	};
} // namespace java::io

