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
	class FilterWriter : public java::io::Writer
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit FilterWriter(const char *className, const char *sig, Ts...agv) : java::io::Writer(className, sig, std::forward<Ts>(agv)...) {}
		FilterWriter(QAndroidJniObject obj) : java::io::Writer(obj) {}
		
		// Constructors
		
		// Methods
		void close() const;
		void flush() const;
		void write(jint arg0) const;
		void write(JCharArray arg0, jint arg1, jint arg2) const;
		void write(JString arg0, jint arg1, jint arg2) const;
	};
} // namespace java::io

