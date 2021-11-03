#pragma once

#include "../../JObject.hpp"


namespace java::util
{
	class OptionalInt : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit OptionalInt(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		OptionalInt(QJniObject obj);
		
		// Constructors
		
		// Methods
		static java::util::OptionalInt empty();
		static java::util::OptionalInt of(jint arg0);
		jboolean equals(jobject arg0);
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
		jstring toString();
	};
} // namespace java::util

