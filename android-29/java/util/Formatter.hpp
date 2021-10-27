#pragma once

#ifndef JAVA_UTIL_FORMATTER
#define JAVA_UTIL_FORMATTER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::java::io
{
	class File;
}
namespace __jni_impl::java::io
{
	class IOException;
}
namespace __jni_impl::java::io
{
	class OutputStream;
}
namespace __jni_impl::java::io
{
	class PrintStream;
}
namespace __jni_impl::java::nio::charset
{
	class Charset;
}
namespace __jni_impl::java::util
{
	class Locale;
}
namespace __jni_impl::java::util::regex
{
	class Pattern;
}

namespace __jni_impl::java::util
{
	class Formatter : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::java::io::File arg0);
		void __constructor(__jni_impl::java::io::OutputStream arg0);
		void __constructor(__jni_impl::java::io::PrintStream arg0);
		void __constructor(__jni_impl::__JniBaseClass arg0);
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		void __constructor(__jni_impl::java::util::Locale arg0);
		void __constructor(__jni_impl::java::io::File arg0, jstring arg1);
		void __constructor(__jni_impl::java::io::File arg0, const QString &arg1);
		void __constructor(__jni_impl::java::io::OutputStream arg0, jstring arg1);
		void __constructor(__jni_impl::java::io::OutputStream arg0, const QString &arg1);
		void __constructor(__jni_impl::__JniBaseClass arg0, __jni_impl::java::util::Locale arg1);
		void __constructor(jstring arg0, jstring arg1);
		void __constructor(const QString &arg0, const QString &arg1);
		void __constructor(__jni_impl::java::io::File arg0, jstring arg1, __jni_impl::java::util::Locale arg2);
		void __constructor(__jni_impl::java::io::File arg0, const QString &arg1, __jni_impl::java::util::Locale arg2);
		void __constructor(__jni_impl::java::io::File arg0, __jni_impl::java::nio::charset::Charset arg1, __jni_impl::java::util::Locale arg2);
		void __constructor(__jni_impl::java::io::OutputStream arg0, jstring arg1, __jni_impl::java::util::Locale arg2);
		void __constructor(__jni_impl::java::io::OutputStream arg0, const QString &arg1, __jni_impl::java::util::Locale arg2);
		void __constructor(__jni_impl::java::io::OutputStream arg0, __jni_impl::java::nio::charset::Charset arg1, __jni_impl::java::util::Locale arg2);
		void __constructor(jstring arg0, jstring arg1, __jni_impl::java::util::Locale arg2);
		void __constructor(const QString &arg0, const QString &arg1, __jni_impl::java::util::Locale arg2);
		void __constructor(jstring arg0, __jni_impl::java::nio::charset::Charset arg1, __jni_impl::java::util::Locale arg2);
		void __constructor(const QString &arg0, __jni_impl::java::nio::charset::Charset arg1, __jni_impl::java::util::Locale arg2);
		
		// Methods
		void close();
		void flush();
		QAndroidJniObject format(jstring arg0, jobjectArray arg1);
		QAndroidJniObject format(const QString &arg0, jobjectArray arg1);
		QAndroidJniObject format(__jni_impl::java::util::Locale arg0, jstring arg1, jobjectArray arg2);
		QAndroidJniObject format(__jni_impl::java::util::Locale arg0, const QString &arg1, jobjectArray arg2);
		QAndroidJniObject ioException();
		QAndroidJniObject locale();
		QAndroidJniObject out();
		jstring toString();
	};
} // namespace __jni_impl::java::util

#include "../io/File.hpp"
#include "../io/IOException.hpp"
#include "../io/OutputStream.hpp"
#include "../io/PrintStream.hpp"
#include "../nio/charset/Charset.hpp"
#include "Locale.hpp"
#include "regex/Pattern.hpp"

namespace __jni_impl::java::util
{
	// Fields
	
	// Constructors
	void Formatter::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.Formatter",
			"()V"
		);
	}
	void Formatter::__constructor(__jni_impl::java::io::File arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.Formatter",
			"(Ljava/io/File;)V",
			arg0.__jniObject().object()
		);
	}
	void Formatter::__constructor(__jni_impl::java::io::OutputStream arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.Formatter",
			"(Ljava/io/OutputStream;)V",
			arg0.__jniObject().object()
		);
	}
	void Formatter::__constructor(__jni_impl::java::io::PrintStream arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.Formatter",
			"(Ljava/io/PrintStream;)V",
			arg0.__jniObject().object()
		);
	}
	void Formatter::__constructor(__jni_impl::__JniBaseClass arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.Formatter",
			"(Ljava/lang/Appendable;)V",
			arg0.__jniObject().object()
		);
	}
	void Formatter::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.Formatter",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Formatter::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.Formatter",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void Formatter::__constructor(__jni_impl::java::util::Locale arg0)
	{
		__thiz = QAndroidJniObject(
			"java.util.Formatter",
			"(Ljava/util/Locale;)V",
			arg0.__jniObject().object()
		);
	}
	void Formatter::__constructor(__jni_impl::java::io::File arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.Formatter",
			"(Ljava/io/File;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void Formatter::__constructor(__jni_impl::java::io::File arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.Formatter",
			"(Ljava/io/File;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void Formatter::__constructor(__jni_impl::java::io::OutputStream arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.Formatter",
			"(Ljava/io/OutputStream;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void Formatter::__constructor(__jni_impl::java::io::OutputStream arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.Formatter",
			"(Ljava/io/OutputStream;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void Formatter::__constructor(__jni_impl::__JniBaseClass arg0, __jni_impl::java::util::Locale arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.Formatter",
			"(Ljava/lang/Appendable;Ljava/util/Locale;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void Formatter::__constructor(jstring arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.Formatter",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void Formatter::__constructor(const QString &arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"java.util.Formatter",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void Formatter::__constructor(__jni_impl::java::io::File arg0, jstring arg1, __jni_impl::java::util::Locale arg2)
	{
		__thiz = QAndroidJniObject(
			"java.util.Formatter",
			"(Ljava/io/File;Ljava/lang/String;Ljava/util/Locale;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	void Formatter::__constructor(__jni_impl::java::io::File arg0, const QString &arg1, __jni_impl::java::util::Locale arg2)
	{
		__thiz = QAndroidJniObject(
			"java.util.Formatter",
			"(Ljava/io/File;Ljava/lang/String;Ljava/util/Locale;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object()
		);
	}
	void Formatter::__constructor(__jni_impl::java::io::File arg0, __jni_impl::java::nio::charset::Charset arg1, __jni_impl::java::util::Locale arg2)
	{
		__thiz = QAndroidJniObject(
			"java.util.Formatter",
			"(Ljava/io/File;Ljava/nio/charset/Charset;Ljava/util/Locale;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void Formatter::__constructor(__jni_impl::java::io::OutputStream arg0, jstring arg1, __jni_impl::java::util::Locale arg2)
	{
		__thiz = QAndroidJniObject(
			"java.util.Formatter",
			"(Ljava/io/OutputStream;Ljava/lang/String;Ljava/util/Locale;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object()
		);
	}
	void Formatter::__constructor(__jni_impl::java::io::OutputStream arg0, const QString &arg1, __jni_impl::java::util::Locale arg2)
	{
		__thiz = QAndroidJniObject(
			"java.util.Formatter",
			"(Ljava/io/OutputStream;Ljava/lang/String;Ljava/util/Locale;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object()
		);
	}
	void Formatter::__constructor(__jni_impl::java::io::OutputStream arg0, __jni_impl::java::nio::charset::Charset arg1, __jni_impl::java::util::Locale arg2)
	{
		__thiz = QAndroidJniObject(
			"java.util.Formatter",
			"(Ljava/io/OutputStream;Ljava/nio/charset/Charset;Ljava/util/Locale;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void Formatter::__constructor(jstring arg0, jstring arg1, __jni_impl::java::util::Locale arg2)
	{
		__thiz = QAndroidJniObject(
			"java.util.Formatter",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/util/Locale;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	void Formatter::__constructor(const QString &arg0, const QString &arg1, __jni_impl::java::util::Locale arg2)
	{
		__thiz = QAndroidJniObject(
			"java.util.Formatter",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/util/Locale;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object()
		);
	}
	void Formatter::__constructor(jstring arg0, __jni_impl::java::nio::charset::Charset arg1, __jni_impl::java::util::Locale arg2)
	{
		__thiz = QAndroidJniObject(
			"java.util.Formatter",
			"(Ljava/lang/String;Ljava/nio/charset/Charset;Ljava/util/Locale;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void Formatter::__constructor(const QString &arg0, __jni_impl::java::nio::charset::Charset arg1, __jni_impl::java::util::Locale arg2)
	{
		__thiz = QAndroidJniObject(
			"java.util.Formatter",
			"(Ljava/lang/String;Ljava/nio/charset/Charset;Ljava/util/Locale;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	
	// Methods
	void Formatter::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	void Formatter::flush()
	{
		__thiz.callMethod<void>(
			"flush",
			"()V"
		);
	}
	QAndroidJniObject Formatter::format(jstring arg0, jobjectArray arg1)
	{
		return __thiz.callObjectMethod(
			"format",
			"(Ljava/lang/String;[Ljava/lang/Object;)Ljava/util/Formatter;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject Formatter::format(const QString &arg0, jobjectArray arg1)
	{
		return __thiz.callObjectMethod(
			"format",
			"(Ljava/lang/String;[Ljava/lang/Object;)Ljava/util/Formatter;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	QAndroidJniObject Formatter::format(__jni_impl::java::util::Locale arg0, jstring arg1, jobjectArray arg2)
	{
		return __thiz.callObjectMethod(
			"format",
			"(Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/util/Formatter;",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	QAndroidJniObject Formatter::format(__jni_impl::java::util::Locale arg0, const QString &arg1, jobjectArray arg2)
	{
		return __thiz.callObjectMethod(
			"format",
			"(Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/util/Formatter;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2
		);
	}
	QAndroidJniObject Formatter::ioException()
	{
		return __thiz.callObjectMethod(
			"ioException",
			"()Ljava/io/IOException;"
		);
	}
	QAndroidJniObject Formatter::locale()
	{
		return __thiz.callObjectMethod(
			"locale",
			"()Ljava/util/Locale;"
		);
	}
	QAndroidJniObject Formatter::out()
	{
		return __thiz.callObjectMethod(
			"out",
			"()Ljava/lang/Appendable;"
		);
	}
	jstring Formatter::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::java::util

namespace java::util
{
	class Formatter : public __jni_impl::java::util::Formatter
	{
	public:
		Formatter(QAndroidJniObject obj) { __thiz = obj; }
		Formatter()
		{
			__constructor();
		}
		Formatter(__jni_impl::java::io::File arg0)
		{
			__constructor(
				arg0);
		}
		Formatter(__jni_impl::java::io::OutputStream arg0)
		{
			__constructor(
				arg0);
		}
		Formatter(__jni_impl::java::io::PrintStream arg0)
		{
			__constructor(
				arg0);
		}
		Formatter(__jni_impl::__JniBaseClass arg0)
		{
			__constructor(
				arg0);
		}
		Formatter(jstring arg0)
		{
			__constructor(
				arg0);
		}
		Formatter(__jni_impl::java::util::Locale arg0)
		{
			__constructor(
				arg0);
		}
		Formatter(__jni_impl::java::io::File arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		Formatter(__jni_impl::java::io::OutputStream arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		Formatter(__jni_impl::__JniBaseClass arg0, __jni_impl::java::util::Locale arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		Formatter(jstring arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		Formatter(__jni_impl::java::io::File arg0, jstring arg1, __jni_impl::java::util::Locale arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		Formatter(__jni_impl::java::io::File arg0, __jni_impl::java::nio::charset::Charset arg1, __jni_impl::java::util::Locale arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		Formatter(__jni_impl::java::io::OutputStream arg0, jstring arg1, __jni_impl::java::util::Locale arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		Formatter(__jni_impl::java::io::OutputStream arg0, __jni_impl::java::nio::charset::Charset arg1, __jni_impl::java::util::Locale arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		Formatter(jstring arg0, jstring arg1, __jni_impl::java::util::Locale arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		Formatter(jstring arg0, __jni_impl::java::nio::charset::Charset arg1, __jni_impl::java::util::Locale arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace java::util

#endif // JAVA_UTIL_FORMATTER

