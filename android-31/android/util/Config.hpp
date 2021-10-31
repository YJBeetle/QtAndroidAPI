#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::util
{
	class Config : public __JniBaseClass
	{
	public:
		// Fields
		static jboolean DEBUG();
		static jboolean LOGD();
		static jboolean LOGV();
		static jboolean PROFILE();
		static jboolean RELEASE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Config(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Config(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::util

