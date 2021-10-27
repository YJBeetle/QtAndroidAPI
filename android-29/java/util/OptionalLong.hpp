#pragma once

#include "../../__JniBaseClass.hpp"


namespace java::util
{
	class OptionalLong : public __JniBaseClass
	{
	public:
		// Fields
		
		OptionalLong(QAndroidJniObject obj);
		// Constructors
		OptionalLong() = default;
		
		// Methods
		static QAndroidJniObject empty();
		static QAndroidJniObject of(jlong arg0);
		jboolean equals(jobject arg0);
		jlong getAsLong();
		jint hashCode();
		void ifPresent(__JniBaseClass arg0);
		void ifPresentOrElse(__JniBaseClass arg0, __JniBaseClass arg1);
		jboolean isEmpty();
		jboolean isPresent();
		jlong orElse(jlong arg0);
		jlong orElseGet(__JniBaseClass arg0);
		jlong orElseThrow();
		jlong orElseThrow(__JniBaseClass arg0);
		QAndroidJniObject stream();
		jstring toString();
	};
} // namespace java::util

