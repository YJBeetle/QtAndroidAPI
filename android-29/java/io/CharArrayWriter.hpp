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
		
		CharArrayWriter(QAndroidJniObject obj);
		// Constructors
		CharArrayWriter();
		CharArrayWriter(jint &arg0);
		
		// Methods
		QAndroidJniObject append(jchar arg0);
		QAndroidJniObject append(jstring arg0);
		QAndroidJniObject append(const QString &arg0);
		QAndroidJniObject append(jstring arg0, jint arg1, jint arg2);
		QAndroidJniObject append(const QString &arg0, jint arg1, jint arg2);
		void close();
		void flush();
		void reset();
		jint size();
		jcharArray toCharArray();
		jstring toString();
		void write(jint arg0);
		void write(jcharArray arg0, jint arg1, jint arg2);
		void write(jstring arg0, jint arg1, jint arg2);
		void write(const QString &arg0, jint arg1, jint arg2);
		void writeTo(java::io::Writer arg0);
	};
} // namespace java::io

