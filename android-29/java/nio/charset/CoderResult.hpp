#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::lang
{
	class Integer;
}

namespace java::nio::charset
{
	class CoderResult : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject OVERFLOW();
		static QAndroidJniObject UNDERFLOW();
		
		CoderResult(QAndroidJniObject obj);
		// Constructors
		CoderResult() = default;
		
		// Methods
		static QAndroidJniObject malformedForLength(jint arg0);
		static QAndroidJniObject unmappableForLength(jint arg0);
		jboolean isError();
		jboolean isMalformed();
		jboolean isOverflow();
		jboolean isUnderflow();
		jboolean isUnmappable();
		jint length();
		void throwException();
		jstring toString();
	};
} // namespace java::nio::charset

