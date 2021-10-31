#pragma once

#include "../../../../__JniBaseClass.hpp"

namespace java::lang
{
	class Void;
}
namespace java::nio::charset
{
	class Charset;
}

namespace java::nio::charset::spi
{
	class CharsetProvider : public __JniBaseClass
	{
	public:
		// Fields
		
		CharsetProvider(QAndroidJniObject obj);
		// Constructors
		CharsetProvider() = default;
		
		// Methods
		QAndroidJniObject charsetForName(jstring arg0);
		QAndroidJniObject charsets();
	};
} // namespace java::nio::charset::spi

