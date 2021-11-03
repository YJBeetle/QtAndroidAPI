#pragma once

#include "../../JObject.hpp"


namespace java::util
{
	class Optional : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Optional(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Optional(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static java::util::Optional empty();
		static java::util::Optional of(jobject arg0);
		static java::util::Optional ofNullable(jobject arg0);
		jboolean equals(jobject arg0);
		java::util::Optional filter(JObject arg0);
		java::util::Optional flatMap(JObject arg0);
		jobject get();
		jint hashCode();
		void ifPresent(JObject arg0);
		void ifPresentOrElse(JObject arg0, JObject arg1);
		jboolean isEmpty();
		jboolean isPresent();
		java::util::Optional map(JObject arg0);
		java::util::Optional _or(JObject arg0);
		jobject orElse(jobject arg0);
		jobject orElseGet(JObject arg0);
		jobject orElseThrow();
		jobject orElseThrow(JObject arg0);
		JObject stream();
		jstring toString();
	};
} // namespace java::util

