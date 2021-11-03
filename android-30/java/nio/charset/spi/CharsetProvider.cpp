#include "../../../../JString.hpp"
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
	java::nio::charset::Charset CharsetProvider::charsetForName(JString arg0) const
	{
		return callObjectMethod(
			"charsetForName",
			"(Ljava/lang/String;)Ljava/nio/charset/Charset;",
			arg0.object<jstring>()
		);
	}
	JObject CharsetProvider::charsets() const
	{
		return callObjectMethod(
			"charsets",
			"()Ljava/util/Iterator;"
		);
	}
} // namespace java::nio::charset::spi

