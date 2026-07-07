#pragma once

#include "./FilterOutputStream.def.hpp"

class JByteArray;
namespace java::io
{
	class OutputStream;
}

namespace java::io
{
	class BufferedOutputStream : public java::io::FilterOutputStream
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit BufferedOutputStream(const char *className, const char *sig, Ts...agv) : java::io::FilterOutputStream(className, sig, std::forward<Ts>(agv)...) {}
		BufferedOutputStream(QJniObject obj) : java::io::FilterOutputStream(obj) {}
		
		// Constructors
		BufferedOutputStream(java::io::OutputStream arg0);
		BufferedOutputStream(java::io::OutputStream arg0, jint arg1);
		
		// Methods
		void flush() const;
		void write(jint arg0) const;
		void write(JByteArray arg0, jint arg1, jint arg2) const;
	};
} // namespace java::io

