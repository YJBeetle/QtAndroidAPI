#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class Context;
}
namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class Telephony_Threads : public __JniBaseClass
	{
	public:
		// Fields
		static jint BROADCAST_THREAD();
		static jint COMMON_THREAD();
		static QAndroidJniObject CONTENT_URI();
		static QAndroidJniObject OBSOLETE_THREADS_URI();
		
		Telephony_Threads(QAndroidJniObject obj);
		// Constructors
		Telephony_Threads() = default;
		
		// Methods
		static jlong getOrCreateThreadId(android::content::Context arg0, jstring arg1);
		static jlong getOrCreateThreadId(android::content::Context arg0, const QString &arg1);
		static jlong getOrCreateThreadId(android::content::Context arg0, __JniBaseClass arg1);
	};
} // namespace android::provider

