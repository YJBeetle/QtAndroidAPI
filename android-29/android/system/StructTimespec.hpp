#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::system
{
	class StructTimespec : public __JniBaseClass
	{
	public:
		// Fields
		jlong tv_nsec();
		jlong tv_sec();
		
		StructTimespec(QAndroidJniObject obj);
		// Constructors
		StructTimespec(jlong arg0, jlong arg1);
		StructTimespec() = default;
		
		// Methods
		jint compareTo(android::system::StructTimespec arg0);
		jint compareTo(jobject arg0);
		jboolean equals(jobject arg0);
		jint hashCode();
		jstring toString();
	};
} // namespace android::system

