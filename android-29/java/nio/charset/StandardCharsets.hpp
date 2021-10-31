#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::nio::charset
{
	class Charset;
}

namespace java::nio::charset
{
	class StandardCharsets : public __JniBaseClass
	{
	public:
		// Fields
		static java::nio::charset::Charset ISO_8859_1();
		static java::nio::charset::Charset US_ASCII();
		static java::nio::charset::Charset UTF_16();
		static java::nio::charset::Charset UTF_16BE();
		static java::nio::charset::Charset UTF_16LE();
		static java::nio::charset::Charset UTF_8();
		
		// QJniObject forward
		template<typename ...Ts> explicit StandardCharsets(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		StandardCharsets(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace java::nio::charset

