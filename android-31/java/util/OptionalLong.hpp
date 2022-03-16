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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit OptionalLong(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		OptionalLong(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static java::util::OptionalLong empty();
		static java::util::OptionalLong of(jlong arg0);
		jboolean equals(JObject arg0) const;
		jlong getAsLong() const;
		jint hashCode() const;
		void ifPresent(JObject arg0) const;
		void ifPresentOrElse(JObject arg0, JObject arg1) const;
		jboolean isEmpty() const;
		jboolean isPresent() const;
		jlong orElse(jlong arg0) const;
		jlong orElseGet(JObject arg0) const;
		jlong orElseThrow() const;
		jlong orElseThrow(JObject arg0) const;
		JObject stream() const;
		JString toString() const;
	};
} // namespace java::util

