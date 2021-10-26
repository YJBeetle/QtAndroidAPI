#pragma once

#ifndef JAVA_NIO_CHARSET_SPI_CHARSETPROVIDER
#define JAVA_NIO_CHARSET_SPI_CHARSETPROVIDER

#include "../../../../__JniBaseClass.hpp"

namespace __jni_impl::java::lang
{
	class Void;
}
namespace __jni_impl::java::nio::charset
{
	class Charset;
}

namespace __jni_impl::java::nio::charset::spi
{
	class CharsetProvider : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject charsetForName(jstring arg0);
		QAndroidJniObject charsetForName(const QString &arg0);
		QAndroidJniObject charsets();
	};
} // namespace __jni_impl::java::nio::charset::spi

#include "../../../lang/Void.hpp"
#include "../Charset.hpp"

namespace __jni_impl::java::nio::charset::spi
{
	// Fields
	
	// Constructors
	void CharsetProvider::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.nio.charset.spi.CharsetProvider",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject CharsetProvider::charsetForName(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"charsetForName",
			"(Ljava/lang/String;)Ljava/nio/charset/Charset;",
			arg0
		);
	}
	QAndroidJniObject CharsetProvider::charsetForName(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"charsetForName",
			"(Ljava/lang/String;)Ljava/nio/charset/Charset;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject CharsetProvider::charsets()
	{
		return __thiz.callObjectMethod(
			"charsets",
			"()Ljava/util/Iterator;"
		);
	}
} // namespace __jni_impl::java::nio::charset::spi

namespace java::nio::charset::spi
{
	class CharsetProvider : public __jni_impl::java::nio::charset::spi::CharsetProvider
	{
	public:
		CharsetProvider(QAndroidJniObject obj) { __thiz = obj; }
		CharsetProvider()
		{
			__constructor();
		}
	};
} // namespace java::nio::charset::spi

#endif // JAVA_NIO_CHARSET_SPI_CHARSETPROVIDER

