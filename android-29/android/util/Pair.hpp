#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::util
{
	class Pair : public __JniBaseClass
	{
	public:
		// Fields
		jobject first();
		jobject second();
		
		Pair(QAndroidJniObject obj);
		// Constructors
		Pair(jobject &arg0, jobject &arg1);
		Pair() = default;
		
		// Methods
		static QAndroidJniObject create(jobject arg0, jobject arg1);
		jboolean equals(jobject arg0);
		jint hashCode();
		jstring toString();
	};
} // namespace android::util

