#pragma once

#include "../../JObject.hpp"

class JObject;
class JString;

namespace java::util
{
	class Optional : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Optional(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Optional(QJniObject obj);
		
		// Constructors
		
		// Methods
		static java::util::Optional empty();
		static java::util::Optional of(JObject arg0);
		static java::util::Optional ofNullable(JObject arg0);
		jboolean equals(JObject arg0);
		java::util::Optional filter(JObject arg0);
		java::util::Optional flatMap(JObject arg0);
		JObject get();
		jint hashCode();
		void ifPresent(JObject arg0);
		void ifPresentOrElse(JObject arg0, JObject arg1);
		jboolean isEmpty();
		jboolean isPresent();
		java::util::Optional map(JObject arg0);
		java::util::Optional _or(JObject arg0);
		JObject orElse(JObject arg0);
		JObject orElseGet(JObject arg0);
		JObject orElseThrow();
		JObject orElseThrow(JObject arg0);
		JObject stream();
		JString toString();
	};
} // namespace java::util

