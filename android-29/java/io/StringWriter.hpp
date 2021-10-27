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
		
		StringWriter(QAndroidJniObject obj);
		// Constructors
		StringWriter();
		StringWriter(jint &arg0);
		
		// Methods
		QAndroidJniObject append(jchar arg0);
		QAndroidJniObject append(jstring arg0);
		QAndroidJniObject append(const QString &arg0);
		QAndroidJniObject append(jstring arg0, jint arg1, jint arg2);
		QAndroidJniObject append(const QString &arg0, jint arg1, jint arg2);
		void close();
		void flush();
		QAndroidJniObject getBuffer();
		jstring toString();
		void write(jint arg0);
		void write(jstring arg0);
		void write(const QString &arg0);
		void write(jcharArray arg0, jint arg1, jint arg2);
		void write(jstring arg0, jint arg1, jint arg2);
		void write(const QString &arg0, jint arg1, jint arg2);
	};
} // namespace java::io

