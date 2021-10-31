#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Writer.hpp"

namespace java::io
{
	class Writer;
}

namespace java::io
{
	class BufferedWriter : public java::io::Writer
	{
	public:
		// Fields
		
		BufferedWriter(QAndroidJniObject obj);
		// Constructors
		BufferedWriter(java::io::Writer arg0);
		BufferedWriter(java::io::Writer arg0, jint arg1);
		BufferedWriter() = default;
		
		// Methods
		void close();
		void flush();
		void newLine();
		void write(jint arg0);
		void write(jcharArray arg0, jint arg1, jint arg2);
		void write(jstring arg0, jint arg1, jint arg2);
	};
} // namespace java::io

