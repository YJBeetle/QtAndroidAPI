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
		
		// QJniObject forward
		template<typename ...Ts> explicit OptionalInt(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		OptionalInt(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static java::util::OptionalInt empty();
		static java::util::OptionalInt of(jint arg0);
		jboolean equals(JObject arg0) const;
		jint getAsInt() const;
		jint hashCode() const;
		void ifPresent(JObject arg0) const;
		void ifPresentOrElse(JObject arg0, JObject arg1) const;
		jboolean isEmpty() const;
		jboolean isPresent() const;
		jint orElse(jint arg0) const;
		jint orElseGet(JObject arg0) const;
		jint orElseThrow() const;
		jint orElseThrow(JObject arg0) const;
		JObject stream() const;
		JString toString() const;
	};
} // namespace java::util

