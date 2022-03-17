#pragma once

#include "../../../JObject.hpp"

class JArray;
class JArray;
namespace java::lang
{
	class Integer;
}
class JString;

namespace java::nio::charset
{
	class CoderResult : public JObject
	{
	public:
		// Fields
		static java::nio::charset::CoderResult OVERFLOW();
		static java::nio::charset::CoderResult UNDERFLOW();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CoderResult(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CoderResult(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static java::nio::charset::CoderResult malformedForLength(jint arg0);
		static java::nio::charset::CoderResult unmappableForLength(jint arg0);
		jboolean isError() const;
		jboolean isMalformed() const;
		jboolean isOverflow() const;
		jboolean isUnderflow() const;
		jboolean isUnmappable() const;
		jint length() const;
		void throwException() const;
		JString toString() const;
	};
} // namespace java::nio::charset

