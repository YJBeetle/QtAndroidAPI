#include "../../../lang/Void.hpp"
#include "../Charset.hpp"
#include "./CharsetProvider.hpp"

namespace java::nio::charset::spi
{
	// Fields
	
	// QJniObject forward
	CharsetProvider::CharsetProvider(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	java::nio::charset::Charset CharsetProvider::charsetForName(jstring arg0)
	{
		return callObjectMethod(
			"charsetForName",
			"(Ljava/lang/String;)Ljava/nio/charset/Charset;",
			arg0
		);
	}
	JObject CharsetProvider::charsets()
	{
		return callObjectMethod(
			"charsets",
			"()Ljava/util/Iterator;"
		);
	}
} // namespace java::nio::charset::spi

