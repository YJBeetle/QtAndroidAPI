#pragma once

#include "../../__JniBaseClass.hpp"
#include "./OutputStream.hpp"

namespace java::io
{
	class OutputStream;
}

namespace java::io
{
	class FilterOutputStream : public java::io::OutputStream
	{
	public:
		// Fields
		
		FilterOutputStream(QAndroidJniObject obj);
		// Constructors
		FilterOutputStream(java::io::OutputStream arg0);
		FilterOutputStream() = default;
		
		// Methods
		void close();
		void flush();
		void write(jbyteArray arg0);
		void write(jint arg0);
		void write(jbyteArray arg0, jint arg1, jint arg2);
	};
} // namespace java::io

