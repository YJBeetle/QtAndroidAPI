#pragma once

#include "../../JObject.hpp"

class JObject;
class JString;

namespace java::util
{
	class OptionalLong : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit OptionalLong(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		OptionalLong(QJniObject obj);
		
		// Constructors
		
		// Methods
		static java::util::OptionalLong empty();
		static java::util::OptionalLong of(jlong arg0);
		jboolean equals(JObject arg0);
		jlong getAsLong();
		jint hashCode();
		void ifPresent(JObject arg0);
		void ifPresentOrElse(JObject arg0, JObject arg1);
		jboolean isEmpty();
		jboolean isPresent();
		jlong orElse(jlong arg0);
		jlong orElseGet(JObject arg0);
		jlong orElseThrow();
		jlong orElseThrow(JObject arg0);
		JObject stream();
		JString toString();
	};
} // namespace java::util

