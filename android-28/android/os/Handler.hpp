#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Looper;
}
namespace android::os
{
	class Message;
}
class JObject;
class JString;

namespace android::os
{
	class Handler : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Handler(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Handler(QAndroidJniObject obj);
		
		// Constructors
		Handler();
		Handler(JObject arg0);
		Handler(android::os::Looper arg0);
		Handler(android::os::Looper arg0, JObject arg1);
		
		// Methods
		static android::os::Handler createAsync(android::os::Looper arg0);
		static android::os::Handler createAsync(android::os::Looper arg0, JObject arg1);
		void dispatchMessage(android::os::Message arg0);
		void dump(JObject arg0, JString arg1);
		android::os::Looper getLooper();
		JString getMessageName(android::os::Message arg0);
		void handleMessage(android::os::Message arg0);
		jboolean hasMessages(jint arg0);
		jboolean hasMessages(jint arg0, JObject arg1);
		android::os::Message obtainMessage();
		android::os::Message obtainMessage(jint arg0);
		android::os::Message obtainMessage(jint arg0, JObject arg1);
		android::os::Message obtainMessage(jint arg0, jint arg1, jint arg2);
		android::os::Message obtainMessage(jint arg0, jint arg1, jint arg2, JObject arg3);
		jboolean post(JObject arg0);
		jboolean postAtFrontOfQueue(JObject arg0);
		jboolean postAtTime(JObject arg0, jlong arg1);
		jboolean postAtTime(JObject arg0, JObject arg1, jlong arg2);
		jboolean postDelayed(JObject arg0, jlong arg1);
		jboolean postDelayed(JObject arg0, JObject arg1, jlong arg2);
		void removeCallbacks(JObject arg0);
		void removeCallbacks(JObject arg0, JObject arg1);
		void removeCallbacksAndMessages(JObject arg0);
		void removeMessages(jint arg0);
		void removeMessages(jint arg0, JObject arg1);
		jboolean sendEmptyMessage(jint arg0);
		jboolean sendEmptyMessageAtTime(jint arg0, jlong arg1);
		jboolean sendEmptyMessageDelayed(jint arg0, jlong arg1);
		jboolean sendMessage(android::os::Message arg0);
		jboolean sendMessageAtFrontOfQueue(android::os::Message arg0);
		jboolean sendMessageAtTime(android::os::Message arg0, jlong arg1);
		jboolean sendMessageDelayed(android::os::Message arg0, jlong arg1);
		JString toString();
	};
} // namespace android::os

