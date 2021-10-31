#pragma once

#include "../../__JniBaseClass.hpp"


namespace java::util
{
	class OptionalInt : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit OptionalInt(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		OptionalInt(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject empty();
		static QAndroidJniObject of(jint arg0);
		jboolean equals(jobject arg0);
		jint getAsInt();
		jint hashCode();
		void ifPresent(__JniBaseClass arg0);
		void ifPresentOrElse(__JniBaseClass arg0, __JniBaseClass arg1);
		jboolean isEmpty();
		jboolean isPresent();
		jint orElse(jint arg0);
		jint orElseGet(__JniBaseClass arg0);
		jint orElseThrow();
		jint orElseThrow(__JniBaseClass arg0);
		QAndroidJniObject stream();
		jstring toString();
	};
} // namespace java::util

