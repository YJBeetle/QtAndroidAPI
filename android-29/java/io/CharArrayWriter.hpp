#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Writer.hpp"

namespace java::io
{
	class Writer;
}

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
		java::io::CharArrayWriter append(jchar arg0);
		java::io::CharArrayWriter append(jstring arg0);
		java::io::CharArrayWriter append(jstring arg0, jint arg1, jint arg2);
		void close();
		void flush();
		void reset();
		jint size();
		jcharArray toCharArray();
		jstring toString();
		void write(jint arg0);
		void write(jcharArray arg0, jint arg1, jint arg2);
		void write(jstring arg0, jint arg1, jint arg2);
		void writeTo(java::io::Writer arg0);
	};
} // namespace java::io

