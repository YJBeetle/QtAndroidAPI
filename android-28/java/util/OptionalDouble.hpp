#pragma once

#include "../../__JniBaseClass.hpp"


namespace java::util
{
	class OptionalDouble : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit OptionalDouble(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		OptionalDouble(QJniObject obj);
		
		// Constructors
		
		// Methods
		static java::util::OptionalDouble empty();
		static java::util::OptionalDouble of(jdouble arg0);
		jboolean equals(jobject arg0);
		jdouble getAsDouble();
		jint hashCode();
		void ifPresent(__JniBaseClass arg0);
		void ifPresentOrElse(__JniBaseClass arg0, __JniBaseClass arg1);
		jboolean isEmpty();
		jboolean isPresent();
		jdouble orElse(jdouble arg0);
		jdouble orElseGet(__JniBaseClass arg0);
		jdouble orElseThrow();
		jdouble orElseThrow(__JniBaseClass arg0);
		__JniBaseClass stream();
		jstring toString();
	};
} // namespace java::util

