#pragma once

#ifndef JAVA_IO_FILTERWRITER
#define JAVA_IO_FILTERWRITER

#include "Writer.hpp"

namespace __jni_impl::java::io
{
	class Writer;
}

namespace __jni_impl::java::io
{
	class FilterWriter : public __jni_impl::java::io::Writer
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void write(jstring arg0, jint arg1, jint arg2);
		void write(jcharArray arg0, jint arg1, jint arg2);
		void write(jint arg0);
		void flush();
		void close();
	};
} // namespace __jni_impl::java::io

#include "Writer.hpp"

namespace __jni_impl::java::io
{
	// Fields
	
	// Constructors
	void FilterWriter::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.io.FilterWriter",
			"(V)V");
	}
	
	// Methods
	void FilterWriter::write(jstring arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"write",
			"(Ljava/lang/String;II)V",
			arg0,
			arg1,
			arg2);
	}
	void FilterWriter::write(jcharArray arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"write",
			"([CII)V",
			arg0,
			arg1,
			arg2);
	}
	void FilterWriter::write(jint arg0)
	{
		__thiz.callMethod<void>(
			"write",
			"(I)V",
			arg0);
	}
	void FilterWriter::flush()
	{
		__thiz.callMethod<void>(
			"flush",
			"()V");
	}
	void FilterWriter::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V");
	}
} // namespace __jni_impl::java::io

namespace java::io
{
	class FilterWriter : public __jni_impl::java::io::FilterWriter
	{
	public:
		FilterWriter(QAndroidJniObject obj) { __thiz = obj; }
		FilterWriter()
		{
			__constructor();
		}
	};
} // namespace java::io

#endif // JAVA_IO_FILTERWRITER

