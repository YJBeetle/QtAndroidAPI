#pragma once

#ifndef JAVA_IO_CHARARRAYWRITER
#define JAVA_IO_CHARARRAYWRITER

#include "Writer.hpp"

namespace __jni_impl::java::io
{
	class Writer;
}

namespace __jni_impl::java::io
{
	class CharArrayWriter : public __jni_impl::java::io::Writer
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jint arg0);
		
		// Methods
		QAndroidJniObject toString();
		QAndroidJniObject append(jstring arg0);
		QAndroidJniObject append(jchar arg0);
		QAndroidJniObject append(jstring arg0, jint arg1, jint arg2);
		jint size();
		QAndroidJniObject toCharArray();
		void write(jcharArray arg0, jint arg1, jint arg2);
		void write(jint arg0);
		void write(jstring arg0, jint arg1, jint arg2);
		void flush();
		void close();
		void reset();
		void writeTo(__jni_impl::java::io::Writer arg0);
	};
} // namespace __jni_impl::java::io

#include "Writer.hpp"

namespace __jni_impl::java::io
{
	// Fields
	
	// Constructors
	void CharArrayWriter::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.io.CharArrayWriter",
			"()V");
	}
	void CharArrayWriter::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.CharArrayWriter",
			"(I)V",
			arg0);
	}
	
	// Methods
	QAndroidJniObject CharArrayWriter::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject CharArrayWriter::append(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"append",
			"(Ljava/lang/CharSequence;)Ljava/io/CharArrayWriter;",
			arg0);
	}
	QAndroidJniObject CharArrayWriter::append(jchar arg0)
	{
		return __thiz.callObjectMethod(
			"append",
			"(C)Ljava/io/CharArrayWriter;",
			arg0);
	}
	QAndroidJniObject CharArrayWriter::append(jstring arg0, jint arg1, jint arg2)
	{
		return __thiz.callObjectMethod(
			"append",
			"(Ljava/lang/CharSequence;II)Ljava/io/CharArrayWriter;",
			arg0,
			arg1,
			arg2);
	}
	jint CharArrayWriter::size()
	{
		return __thiz.callMethod<jint>(
			"size",
			"()I");
	}
	QAndroidJniObject CharArrayWriter::toCharArray()
	{
		return __thiz.callObjectMethod(
			"toCharArray",
			"()[C");
	}
	void CharArrayWriter::write(jcharArray arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"write",
			"([CII)V",
			arg0,
			arg1,
			arg2);
	}
	void CharArrayWriter::write(jint arg0)
	{
		__thiz.callMethod<void>(
			"write",
			"(I)V",
			arg0);
	}
	void CharArrayWriter::write(jstring arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"write",
			"(Ljava/lang/String;II)V",
			arg0,
			arg1,
			arg2);
	}
	void CharArrayWriter::flush()
	{
		__thiz.callMethod<void>(
			"flush",
			"()V");
	}
	void CharArrayWriter::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V");
	}
	void CharArrayWriter::reset()
	{
		__thiz.callMethod<void>(
			"reset",
			"()V");
	}
	void CharArrayWriter::writeTo(__jni_impl::java::io::Writer arg0)
	{
		__thiz.callMethod<void>(
			"writeTo",
			"(Ljava/io/Writer;)V",
			arg0.__jniObject().object());
	}
} // namespace __jni_impl::java::io

namespace java::io
{
	class CharArrayWriter : public __jni_impl::java::io::CharArrayWriter
	{
	public:
		CharArrayWriter(QAndroidJniObject obj) { __thiz = obj; }
		CharArrayWriter()
		{
			__constructor();
		}
		CharArrayWriter(jint arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::io

#endif // JAVA_IO_CHARARRAYWRITER

