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
		
		// QJniObject forward
		template<typename ...Ts> explicit CharsetProvider(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		CharsetProvider(QJniObject obj);
		
		// Constructors
		
		// Methods
		java::nio::charset::Charset charsetForName(jstring arg0);
		__JniBaseClass charsets();
	};
} // namespace java::nio::charset::spi

