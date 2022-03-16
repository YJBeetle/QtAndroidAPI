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
		
		// QJniObject forward
		template<typename ...Ts> explicit Handler(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Handler(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		Handler();
		Handler(JObject arg0);
		Handler(android::os::Looper arg0);
		Handler(android::os::Looper arg0, JObject arg1);
		
		// Methods
		static android::os::Handler createAsync(android::os::Looper arg0);
		static android::os::Handler createAsync(android::os::Looper arg0, JObject arg1);
		void dispatchMessage(android::os::Message arg0) const;
		void dump(JObject arg0, JString arg1) const;
		android::os::Looper getLooper() const;
		JString getMessageName(android::os::Message arg0) const;
		void handleMessage(android::os::Message arg0) const;
		jboolean hasMessages(jint arg0) const;
		jboolean hasMessages(jint arg0, JObject arg1) const;
		android::os::Message obtainMessage() const;
		android::os::Message obtainMessage(jint arg0) const;
		android::os::Message obtainMessage(jint arg0, JObject arg1) const;
		android::os::Message obtainMessage(jint arg0, jint arg1, jint arg2) const;
		android::os::Message obtainMessage(jint arg0, jint arg1, jint arg2, JObject arg3) const;
		jboolean post(JObject arg0) const;
		jboolean postAtFrontOfQueue(JObject arg0) const;
		jboolean postAtTime(JObject arg0, jlong arg1) const;
		jboolean postAtTime(JObject arg0, JObject arg1, jlong arg2) const;
		jboolean postDelayed(JObject arg0, jlong arg1) const;
		jboolean postDelayed(JObject arg0, JObject arg1, jlong arg2) const;
		void removeCallbacks(JObject arg0) const;
		void removeCallbacks(JObject arg0, JObject arg1) const;
		void removeCallbacksAndMessages(JObject arg0) const;
		void removeMessages(jint arg0) const;
		void removeMessages(jint arg0, JObject arg1) const;
		jboolean sendEmptyMessage(jint arg0) const;
		jboolean sendEmptyMessageAtTime(jint arg0, jlong arg1) const;
		jboolean sendEmptyMessageDelayed(jint arg0, jlong arg1) const;
		jboolean sendMessage(android::os::Message arg0) const;
		jboolean sendMessageAtFrontOfQueue(android::os::Message arg0) const;
		jboolean sendMessageAtTime(android::os::Message arg0, jlong arg1) const;
		jboolean sendMessageDelayed(android::os::Message arg0, jlong arg1) const;
		JString toString() const;
	};
} // namespace android::os

