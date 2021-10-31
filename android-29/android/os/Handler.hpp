#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Looper;
}
namespace android::os
{
	class Message;
}

namespace android::os
{
	class Handler : public __JniBaseClass
	{
	public:
		// Fields
		
		Handler(QAndroidJniObject obj);
		// Constructors
		Handler();
		Handler(__JniBaseClass arg0);
		Handler(android::os::Looper arg0);
		Handler(android::os::Looper arg0, __JniBaseClass arg1);
		
		// Methods
		static QAndroidJniObject createAsync(android::os::Looper arg0);
		static QAndroidJniObject createAsync(android::os::Looper arg0, __JniBaseClass arg1);
		void dispatchMessage(android::os::Message arg0);
		void dump(__JniBaseClass arg0, jstring arg1);
		QAndroidJniObject getLooper();
		jstring getMessageName(android::os::Message arg0);
		void handleMessage(android::os::Message arg0);
		jboolean hasCallbacks(__JniBaseClass arg0);
		jboolean hasMessages(jint arg0);
		jboolean hasMessages(jint arg0, jobject arg1);
		QAndroidJniObject obtainMessage();
		QAndroidJniObject obtainMessage(jint arg0);
		QAndroidJniObject obtainMessage(jint arg0, jobject arg1);
		QAndroidJniObject obtainMessage(jint arg0, jint arg1, jint arg2);
		QAndroidJniObject obtainMessage(jint arg0, jint arg1, jint arg2, jobject arg3);
		jboolean post(__JniBaseClass arg0);
		jboolean postAtFrontOfQueue(__JniBaseClass arg0);
		jboolean postAtTime(__JniBaseClass arg0, jlong arg1);
		jboolean postAtTime(__JniBaseClass arg0, jobject arg1, jlong arg2);
		jboolean postDelayed(__JniBaseClass arg0, jlong arg1);
		jboolean postDelayed(__JniBaseClass arg0, jobject arg1, jlong arg2);
		void removeCallbacks(__JniBaseClass arg0);
		void removeCallbacks(__JniBaseClass arg0, jobject arg1);
		void removeCallbacksAndMessages(jobject arg0);
		void removeMessages(jint arg0);
		void removeMessages(jint arg0, jobject arg1);
		jboolean sendEmptyMessage(jint arg0);
		jboolean sendEmptyMessageAtTime(jint arg0, jlong arg1);
		jboolean sendEmptyMessageDelayed(jint arg0, jlong arg1);
		jboolean sendMessage(android::os::Message arg0);
		jboolean sendMessageAtFrontOfQueue(android::os::Message arg0);
		jboolean sendMessageAtTime(android::os::Message arg0, jlong arg1);
		jboolean sendMessageDelayed(android::os::Message arg0, jlong arg1);
		jstring toString();
	};
} // namespace android::os

