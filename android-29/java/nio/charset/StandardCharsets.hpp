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
		static QAndroidJniObject ISO_8859_1();
		static QAndroidJniObject US_ASCII();
		static QAndroidJniObject UTF_16();
		static QAndroidJniObject UTF_16BE();
		static QAndroidJniObject UTF_16LE();
		static QAndroidJniObject UTF_8();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit StandardCharsets(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		StandardCharsets(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace java::nio::charset

