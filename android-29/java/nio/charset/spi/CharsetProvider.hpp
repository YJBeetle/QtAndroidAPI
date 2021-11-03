#pragma once

#include "../../../../JObject.hpp"

class JString;
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
	class CharsetProvider : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit CharsetProvider(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CharsetProvider(QJniObject obj);
		
		// Constructors
		
		// Methods
		java::nio::charset::Charset charsetForName(JString arg0) const;
		JObject charsets() const;
	};
} // namespace java::nio::charset::spi

