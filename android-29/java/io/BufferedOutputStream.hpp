#pragma once

#include "../../__JniBaseClass.hpp"
#include "./OutputStream.hpp"
#include "./FilterOutputStream.hpp"

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
		BufferedOutputStream(QJniObject obj);
		
		// Constructors
		BufferedOutputStream(java::io::OutputStream arg0);
		BufferedOutputStream(java::io::OutputStream arg0, jint arg1);
		
		// Methods
		void flush();
		void write(jint arg0);
		void write(jbyteArray arg0, jint arg1, jint arg2);
	};
} // namespace java::io

