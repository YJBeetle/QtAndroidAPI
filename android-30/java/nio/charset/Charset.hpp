#pragma once

#include "../../../JObject.hpp"

class JObjectArray;
class JArray;
class JObject;
class JString;
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Charset(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Charset(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static JObject availableCharsets();
		static java::nio::charset::Charset defaultCharset();
		static java::nio::charset::Charset forName(JString arg0);
		static jboolean isSupported(JString arg0);
		JObject aliases();
		jboolean canEncode();
		jint compareTo(JObject arg0);
		jint compareTo(java::nio::charset::Charset arg0);
		jboolean contains(java::nio::charset::Charset arg0);
		java::nio::CharBuffer decode(java::nio::ByteBuffer arg0);
		JString displayName();
		JString displayName(java::util::Locale arg0);
		java::nio::ByteBuffer encode(JString arg0);
		java::nio::ByteBuffer encode(java::nio::CharBuffer arg0);
		jboolean equals(JObject arg0);
		jint hashCode();
		jboolean isRegistered();
		JString name();
		java::nio::charset::CharsetDecoder newDecoder();
		java::nio::charset::CharsetEncoder newEncoder();
		JString toString();
	};
} // namespace java::nio::charset

