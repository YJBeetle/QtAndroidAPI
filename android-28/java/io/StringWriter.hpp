#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Writer.hpp"

namespace java::io
{
	class Writer;
}
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit StringWriter(const char *className, const char *sig, Ts...agv) : java::io::Writer(className, sig, std::forward<Ts>(agv)...) {}
		StringWriter(QAndroidJniObject obj);
		
		// Constructors
		StringWriter();
		StringWriter(jint arg0);
		
		// Methods
		java::io::StringWriter append(jchar arg0);
		java::io::StringWriter append(jstring arg0);
		java::io::StringWriter append(jstring arg0, jint arg1, jint arg2);
		void close();
		void flush();
		java::lang::StringBuffer getBuffer();
		jstring toString();
		void write(jint arg0);
		void write(jstring arg0);
		void write(jcharArray arg0, jint arg1, jint arg2);
		void write(jstring arg0, jint arg1, jint arg2);
	};
} // namespace java::io

