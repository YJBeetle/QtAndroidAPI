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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Pair(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Pair(QAndroidJniObject obj);
		
		// Constructors
		Pair(jobject arg0, jobject arg1);
		
		// Methods
		static android::util::Pair create(jobject arg0, jobject arg1);
		jboolean equals(jobject arg0);
		jint hashCode();
		jstring toString();
	};
} // namespace android::util

