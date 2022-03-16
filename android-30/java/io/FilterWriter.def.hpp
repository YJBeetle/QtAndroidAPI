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
	class FilterWriter : public java::io::Writer
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit FilterWriter(const char *className, const char *sig, Ts...agv) : java::io::Writer(className, sig, std::forward<Ts>(agv)...) {}
		FilterWriter(QJniObject obj) : java::io::Writer(obj) {}
		
		// Constructors
		
		// Methods
		void close() const;
		void flush() const;
		void write(jint arg0) const;
		void write(JCharArray arg0, jint arg1, jint arg2) const;
		void write(JString arg0, jint arg1, jint arg2) const;
	};
} // namespace java::io

