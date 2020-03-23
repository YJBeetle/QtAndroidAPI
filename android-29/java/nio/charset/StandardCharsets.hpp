#pragma once

#ifndef JAVA_NIO_CHARSET_STANDARDCHARSETS
#define JAVA_NIO_CHARSET_STANDARDCHARSETS

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::nio::charset
{
	class Charset;
}

namespace __jni_impl::java::nio::charset
{
	class StandardCharsets : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject US_ASCII();
		static QAndroidJniObject ISO_8859_1();
		static QAndroidJniObject UTF_8();
		static QAndroidJniObject UTF_16BE();
		static QAndroidJniObject UTF_16LE();
		static QAndroidJniObject UTF_16();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::java::nio::charset

#include "Charset.hpp"

namespace __jni_impl::java::nio::charset
{
	// Fields
	QAndroidJniObject StandardCharsets::US_ASCII()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.charset.StandardCharsets",
			"US_ASCII",
			"Ljava/nio/charset/Charset;");
	}
	QAndroidJniObject StandardCharsets::ISO_8859_1()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.charset.StandardCharsets",
			"ISO_8859_1",
			"Ljava/nio/charset/Charset;");
	}
	QAndroidJniObject StandardCharsets::UTF_8()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.charset.StandardCharsets",
			"UTF_8",
			"Ljava/nio/charset/Charset;");
	}
	QAndroidJniObject StandardCharsets::UTF_16BE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.charset.StandardCharsets",
			"UTF_16BE",
			"Ljava/nio/charset/Charset;");
	}
	QAndroidJniObject StandardCharsets::UTF_16LE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.charset.StandardCharsets",
			"UTF_16LE",
			"Ljava/nio/charset/Charset;");
	}
	QAndroidJniObject StandardCharsets::UTF_16()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.nio.charset.StandardCharsets",
			"UTF_16",
			"Ljava/nio/charset/Charset;");
	}
	
	// Constructors
	void StandardCharsets::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.nio.charset.StandardCharsets",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::java::nio::charset

namespace java::nio::charset
{
	class StandardCharsets : public __jni_impl::java::nio::charset::StandardCharsets
	{
	public:
		StandardCharsets(QAndroidJniObject obj) { __thiz = obj; }
		StandardCharsets()
		{
			__constructor();
		}
	};
} // namespace java::nio::charset

#endif // JAVA_NIO_CHARSET_STANDARDCHARSETS

