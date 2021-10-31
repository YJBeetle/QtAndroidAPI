#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::io
{
	class File;
}

namespace android::os
{
	class FileObserver : public __JniBaseClass
	{
	public:
		// Fields
		static jint ACCESS();
		static jint ALL_EVENTS();
		static jint ATTRIB();
		static jint CLOSE_NOWRITE();
		static jint CLOSE_WRITE();
		static jint CREATE();
		static jint DELETE();
		static jint DELETE_SELF();
		static jint MODIFY();
		static jint MOVED_FROM();
		static jint MOVED_TO();
		static jint MOVE_SELF();
		static jint OPEN();
		
		FileObserver(QAndroidJniObject obj);
		// Constructors
		FileObserver(java::io::File arg0);
		FileObserver(jstring arg0);
		FileObserver(__JniBaseClass arg0);
		FileObserver(java::io::File arg0, jint arg1);
		FileObserver(jstring arg0, jint arg1);
		FileObserver(__JniBaseClass arg0, jint arg1);
		FileObserver() = default;
		
		// Methods
		void onEvent(jint arg0, jstring arg1);
		void startWatching();
		void stopWatching();
	};
} // namespace android::os

