#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::system
{
	class StructTimeval : public __JniBaseClass
	{
	public:
		// Fields
		jlong tv_sec();
		jlong tv_usec();
		
		StructTimeval(QAndroidJniObject obj);
		// Constructors
		StructTimeval() = default;
		
		// Methods
		static QAndroidJniObject fromMillis(jlong arg0);
		jboolean equals(jobject arg0);
		jint hashCode();
		jlong toMillis();
		jstring toString();
	};
} // namespace android::system

