#pragma once

#include "../../JObject.hpp"

class JObject;
class JString;

namespace java::util
{
	class OptionalInt : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit OptionalInt(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		OptionalInt(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static java::util::OptionalInt empty();
		static java::util::OptionalInt of(jint arg0);
		jboolean equals(JObject arg0);
		jint getAsInt();
		jint hashCode();
		void ifPresent(JObject arg0);
		void ifPresentOrElse(JObject arg0, JObject arg1);
		jboolean isEmpty();
		jboolean isPresent();
		jint orElse(jint arg0);
		jint orElseGet(JObject arg0);
		jint orElseThrow();
		jint orElseThrow(JObject arg0);
		JObject stream();
		JString toString();
	};
} // namespace java::util

