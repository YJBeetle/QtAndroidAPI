#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::util
{
	class EventLog : public __JniBaseClass
	{
	public:
		// Fields
		
		EventLog(QAndroidJniObject obj);
		// Constructors
		EventLog() = default;
		
		// Methods
		static jint getTagCode(jstring arg0);
		static jstring getTagName(jint arg0);
		static void readEvents(jintArray arg0, __JniBaseClass arg1);
		static jint writeEvent(jint arg0, jobjectArray arg1);
		static jint writeEvent(jint arg0, jfloat arg1);
		static jint writeEvent(jint arg0, jint arg1);
		static jint writeEvent(jint arg0, jstring arg1);
		static jint writeEvent(jint arg0, jlong arg1);
	};
} // namespace android::util

