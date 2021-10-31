#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::lang
{
	class ThreadLocal;
}
namespace java::nio
{
	class ByteBuffer;
}
namespace java::nio
{
	class CharBuffer;
}
namespace java::nio::charset
{
	class CharsetDecoder;
}
namespace java::nio::charset
{
	class CharsetEncoder;
}
namespace java::nio::charset::spi
{
	class CharsetProvider;
}
namespace java::util
{
	class Locale;
}

namespace java::nio::charset
{
	class Charset : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Charset(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Charset(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject availableCharsets();
		static QAndroidJniObject defaultCharset();
		static QAndroidJniObject forName(jstring arg0);
		static jboolean isSupported(jstring arg0);
		QAndroidJniObject aliases();
		jboolean canEncode();
		jint compareTo(jobject arg0);
		jint compareTo(java::nio::charset::Charset arg0);
		jboolean contains(java::nio::charset::Charset arg0);
		QAndroidJniObject decode(java::nio::ByteBuffer arg0);
		jstring displayName();
		jstring displayName(java::util::Locale arg0);
		QAndroidJniObject encode(jstring arg0);
		QAndroidJniObject encode(java::nio::CharBuffer arg0);
		jboolean equals(jobject arg0);
		jint hashCode();
		jboolean isRegistered();
		jstring name();
		QAndroidJniObject newDecoder();
		QAndroidJniObject newEncoder();
		jstring toString();
	};
} // namespace java::nio::charset

