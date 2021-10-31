#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Writer.hpp"

namespace java::io
{
	class Writer;
}

namespace java::io
{
	class FilterWriter : public java::io::Writer
	{
	public:
		// Fields
		
		FilterWriter(QAndroidJniObject obj);
		// Constructors
		FilterWriter() = default;
		
		// Methods
		void close();
		void flush();
		void write(jint arg0);
		void write(jcharArray arg0, jint arg1, jint arg2);
		void write(jstring arg0, jint arg1, jint arg2);
	};
} // namespace java::io

