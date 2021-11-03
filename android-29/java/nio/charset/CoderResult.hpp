#pragma once

#include "../../../JObject.hpp"

namespace java::lang
{
	class Integer;
}

namespace java::nio::charset
{
	class CoderResult : public JObject
	{
	public:
		// Fields
		static java::nio::charset::CoderResult OVERFLOW();
		static java::nio::charset::CoderResult UNDERFLOW();
		
		// QJniObject forward
		template<typename ...Ts> explicit CoderResult(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CoderResult(QJniObject obj);
		
		// Constructors
		
		// Methods
		static java::nio::charset::CoderResult malformedForLength(jint arg0);
		static java::nio::charset::CoderResult unmappableForLength(jint arg0);
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

