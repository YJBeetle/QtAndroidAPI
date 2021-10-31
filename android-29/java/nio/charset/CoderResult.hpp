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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CoderResult(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		CoderResult(QAndroidJniObject obj);
		
		// Constructors
		
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

