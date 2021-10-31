#include "../../../lang/Void.hpp"
#include "../Charset.hpp"
#include "./CharsetProvider.hpp"

namespace java::nio::charset::spi
{
	// Fields
	
	CharsetProvider::CharsetProvider(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject CharsetProvider::charsetForName(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"charsetForName",
			"(Ljava/lang/String;)Ljava/nio/charset/Charset;",
			arg0
		);
	}
	QAndroidJniObject CharsetProvider::charsets()
	{
		return __thiz.callObjectMethod(
			"charsets",
			"()Ljava/util/Iterator;"
		);
	}
} // namespace java::nio::charset::spi

