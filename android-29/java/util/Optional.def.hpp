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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Optional(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Optional(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static java::util::Optional empty();
		static java::util::Optional of(JObject arg0);
		static java::util::Optional ofNullable(JObject arg0);
		jboolean equals(JObject arg0) const;
		java::util::Optional filter(JObject arg0) const;
		java::util::Optional flatMap(JObject arg0) const;
		JObject get() const;
		jint hashCode() const;
		void ifPresent(JObject arg0) const;
		void ifPresentOrElse(JObject arg0, JObject arg1) const;
		jboolean isEmpty() const;
		jboolean isPresent() const;
		java::util::Optional map(JObject arg0) const;
		java::util::Optional or_(JObject arg0) const;
		JObject orElse(JObject arg0) const;
		JObject orElseGet(JObject arg0) const;
		JObject orElseThrow() const;
		JObject orElseThrow(JObject arg0) const;
		JObject stream() const;
		JString toString() const;
	};
} // namespace java::util

