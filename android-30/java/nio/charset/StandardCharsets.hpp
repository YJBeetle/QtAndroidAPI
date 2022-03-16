#pragma once

#include "../../../JObject.hpp"

namespace java::nio::charset
{
	class Charset;
}

namespace java::nio::charset
{
	class StandardCharsets : public JObject
	{
	public:
		// Fields
		static java::nio::charset::Charset ISO_8859_1();
		static java::nio::charset::Charset US_ASCII();
		static java::nio::charset::Charset UTF_16();
		static java::nio::charset::Charset UTF_16BE();
		static java::nio::charset::Charset UTF_16LE();
		static java::nio::charset::Charset UTF_8();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit StandardCharsets(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		StandardCharsets(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace java::nio::charset

