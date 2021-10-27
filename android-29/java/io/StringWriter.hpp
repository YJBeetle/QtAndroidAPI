#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Writer.hpp"

namespace __jni_impl::java::io
{
	class Writer;
}
namespace __jni_impl::java::lang
{
	class StringBuffer;
}

namespace __jni_impl::java::io
{
	class StringWriter : public __jni_impl::java::io::Writer
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(jint arg0);
		
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
} // namespace __jni_impl::java::io

#include "./Writer.hpp"
#include "../lang/StringBuffer.hpp"

namespace __jni_impl::java::io
{
	// Fields
	
	// Constructors
	void StringWriter::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.io.StringWriter",
			"()V"
		);
	}
	void StringWriter::__constructor(jint arg0)
	{
		__thiz = QAndroidJniObject(
			"java.io.StringWriter",
			"(I)V",
			arg0
		);
	}
	
	// Methods
	QAndroidJniObject StringWriter::append(jchar arg0)
	{
		return __thiz.callObjectMethod(
			"append",
			"(C)Ljava/io/StringWriter;",
			arg0
		);
	}
	QAndroidJniObject StringWriter::append(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"append",
			"(Ljava/lang/CharSequence;)Ljava/io/StringWriter;",
			arg0
		);
	}
	QAndroidJniObject StringWriter::append(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"append",
			"(Ljava/lang/CharSequence;)Ljava/io/StringWriter;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject StringWriter::append(jstring arg0, jint arg1, jint arg2)
	{
		return __thiz.callObjectMethod(
			"append",
			"(Ljava/lang/CharSequence;II)Ljava/io/StringWriter;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject StringWriter::append(const QString &arg0, jint arg1, jint arg2)
	{
		return __thiz.callObjectMethod(
			"append",
			"(Ljava/lang/CharSequence;II)Ljava/io/StringWriter;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2
		);
	}
	void StringWriter::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	void StringWriter::flush()
	{
		__thiz.callMethod<void>(
			"flush",
			"()V"
		);
	}
	QAndroidJniObject StringWriter::getBuffer()
	{
		return __thiz.callObjectMethod(
			"getBuffer",
			"()Ljava/lang/StringBuffer;"
		);
	}
	jstring StringWriter::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void StringWriter::write(jint arg0)
	{
		__thiz.callMethod<void>(
			"write",
			"(I)V",
			arg0
		);
	}
	void StringWriter::write(jstring arg0)
	{
		__thiz.callMethod<void>(
			"write",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void StringWriter::write(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"write",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void StringWriter::write(jcharArray arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"write",
			"([CII)V",
			arg0,
			arg1,
			arg2
		);
	}
	void StringWriter::write(jstring arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"write",
			"(Ljava/lang/String;II)V",
			arg0,
			arg1,
			arg2
		);
	}
	void StringWriter::write(const QString &arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"write",
			"(Ljava/lang/String;II)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2
		);
	}
} // namespace __jni_impl::java::io

namespace java::io
{
	class StringWriter : public __jni_impl::java::io::StringWriter
	{
	public:
		StringWriter(QAndroidJniObject obj) { __thiz = obj; }
		StringWriter()
		{
			__constructor();
		}
		StringWriter(jint arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::io

