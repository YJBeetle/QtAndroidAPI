#pragma once

#include "../../../JObject.hpp"

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
	class Charset : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Charset(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Charset(QJniObject obj);
		
		// Constructors
		
		// Methods
		static JObject availableCharsets();
		static java::nio::charset::Charset defaultCharset();
		static java::nio::charset::Charset forName(jstring arg0);
		static jboolean isSupported(jstring arg0);
		JObject aliases();
		jboolean canEncode();
		jint compareTo(jobject arg0);
		jint compareTo(java::nio::charset::Charset arg0);
		jboolean contains(java::nio::charset::Charset arg0);
		java::nio::CharBuffer decode(java::nio::ByteBuffer arg0);
		jstring displayName();
		jstring displayName(java::util::Locale arg0);
		java::nio::ByteBuffer encode(jstring arg0);
		java::nio::ByteBuffer encode(java::nio::CharBuffer arg0);
		jboolean equals(jobject arg0);
		jint hashCode();
		jboolean isRegistered();
		jstring name();
		java::nio::charset::CharsetDecoder newDecoder();
		java::nio::charset::CharsetEncoder newEncoder();
		jstring toString();
	};
} // namespace java::nio::charset

