#pragma once

#ifndef JAVA_IO_WRITER
#define JAVA_IO_WRITER

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::java::io
{
	class Writer : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject nullWriter();
		QAndroidJniObject append(jchar arg0);
		QAndroidJniObject append(jstring arg0);
		QAndroidJniObject append(const QString &arg0);
		QAndroidJniObject append(jstring arg0, jint arg1, jint arg2);
		QAndroidJniObject append(const QString &arg0, jint arg1, jint arg2);
		void close();
		void flush();
		void write(jcharArray arg0);
		void write(jint arg0);
		void write(jstring arg0);
		void write(const QString &arg0);
		void write(jcharArray arg0, jint arg1, jint arg2);
		void write(jstring arg0, jint arg1, jint arg2);
		void write(const QString &arg0, jint arg1, jint arg2);
	};
} // namespace __jni_impl::java::io


namespace __jni_impl::java::io
{
	// Fields
	
	// Constructors
	void Writer::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.io.Writer",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject Writer::nullWriter()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.io.Writer",
			"nullWriter",
			"()Ljava/io/Writer;"
		);
	}
	QAndroidJniObject Writer::append(jchar arg0)
	{
		return __thiz.callObjectMethod(
			"append",
			"(C)Ljava/io/Writer;",
			arg0
		);
	}
	QAndroidJniObject Writer::append(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"append",
			"(Ljava/lang/CharSequence;)Ljava/io/Writer;",
			arg0
		);
	}
	QAndroidJniObject Writer::append(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"append",
			"(Ljava/lang/CharSequence;)Ljava/io/Writer;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject Writer::append(jstring arg0, jint arg1, jint arg2)
	{
		return __thiz.callObjectMethod(
			"append",
			"(Ljava/lang/CharSequence;II)Ljava/io/Writer;",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject Writer::append(const QString &arg0, jint arg1, jint arg2)
	{
		return __thiz.callObjectMethod(
			"append",
			"(Ljava/lang/CharSequence;II)Ljava/io/Writer;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2
		);
	}
	void Writer::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	void Writer::flush()
	{
		__thiz.callMethod<void>(
			"flush",
			"()V"
		);
	}
	void Writer::write(jcharArray arg0)
	{
		__thiz.callMethod<void>(
			"write",
			"([C)V",
			arg0
		);
	}
	void Writer::write(jint arg0)
	{
		__thiz.callMethod<void>(
			"write",
			"(I)V",
			arg0
		);
	}
	void Writer::write(jstring arg0)
	{
		__thiz.callMethod<void>(
			"write",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Writer::write(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"write",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void Writer::write(jcharArray arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"write",
			"([CII)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Writer::write(jstring arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"write",
			"(Ljava/lang/String;II)V",
			arg0,
			arg1,
			arg2
		);
	}
	void Writer::write(const QString &arg0, jint arg1, jint arg2)
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
	class Writer : public __jni_impl::java::io::Writer
	{
	public:
		Writer(QAndroidJniObject obj) { __thiz = obj; }
		Writer()
		{
			__constructor();
		}
	};
} // namespace java::io

#endif // JAVA_IO_WRITER

