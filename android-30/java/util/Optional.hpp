#pragma once

#include "../../__JniBaseClass.hpp"


namespace java::util
{
	class Optional : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Optional(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Optional(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static java::util::Optional empty();
		static java::util::Optional of(jobject arg0);
		static java::util::Optional ofNullable(jobject arg0);
		jboolean equals(jobject arg0);
		java::util::Optional filter(__JniBaseClass arg0);
		java::util::Optional flatMap(__JniBaseClass arg0);
		jobject get();
		jint hashCode();
		void ifPresent(__JniBaseClass arg0);
		void ifPresentOrElse(__JniBaseClass arg0, __JniBaseClass arg1);
		jboolean isEmpty();
		jboolean isPresent();
		java::util::Optional map(__JniBaseClass arg0);
		java::util::Optional _or(__JniBaseClass arg0);
		jobject orElse(jobject arg0);
		jobject orElseGet(__JniBaseClass arg0);
		jobject orElseThrow();
		jobject orElseThrow(__JniBaseClass arg0);
		__JniBaseClass stream();
		jstring toString();
	};
} // namespace java::util

