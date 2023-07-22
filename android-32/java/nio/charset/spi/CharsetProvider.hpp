#pragma once

#include "../../../../JString.hpp"
#include "../../../lang/Void.def.hpp"
#include "../Charset.def.hpp"
#include "./CharsetProvider.def.hpp"

namespace java::nio::charset::spi
{
	// Fields
	
	// Constructors
	
	// Methods
	inline java::nio::charset::Charset CharsetProvider::charsetForName(JString arg0) const
	{
		return callObjectMethod(
			"charsetForName",
			"(Ljava/lang/String;)Ljava/nio/charset/Charset;",
			arg0.object<jstring>()
		);
	}
	inline JObject CharsetProvider::charsets() const
	{
		return callObjectMethod(
			"charsets",
			"()Ljava/util/Iterator;"
		);
	}
} // namespace java::nio::charset::spi

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::nio::charset::spi;
#endif
