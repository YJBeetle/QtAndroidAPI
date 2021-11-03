#pragma once

#include "../../JObject.hpp"


namespace android::util
{
	class EventLog : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit EventLog(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		EventLog(QJniObject obj);
		
		// Constructors
		
		// Methods
		static jint getTagCode(jstring arg0);
		static jstring getTagName(jint arg0);
		static void readEvents(jintArray arg0, JObject arg1);
		static jint writeEvent(jint arg0, jobjectArray arg1);
		static jint writeEvent(jint arg0, jfloat arg1);
		static jint writeEvent(jint arg0, jint arg1);
		static jint writeEvent(jint arg0, jstring arg1);
		static jint writeEvent(jint arg0, jlong arg1);
	};
} // namespace android::util

