#pragma once

#include "../../JObject.hpp"

class JObject;
class JString;

namespace java::util
{
	class OptionalDouble : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit OptionalDouble(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		OptionalDouble(QJniObject obj);
		
		// Constructors
		
		// Methods
		static java::util::OptionalDouble empty();
		static java::util::OptionalDouble of(jdouble arg0);
		jboolean equals(JObject arg0) const;
		jdouble getAsDouble() const;
		jint hashCode() const;
		void ifPresent(JObject arg0) const;
		void ifPresentOrElse(JObject arg0, JObject arg1) const;
		jboolean isEmpty() const;
		jboolean isPresent() const;
		jdouble orElse(jdouble arg0) const;
		jdouble orElseGet(JObject arg0) const;
		jdouble orElseThrow() const;
		jdouble orElseThrow(JObject arg0) const;
		JObject stream() const;
		JString toString() const;
	};
} // namespace java::util

