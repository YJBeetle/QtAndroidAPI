#pragma once

#include "../../__JniBaseClass.hpp"


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
		
		// QJniObject forward
		template<typename ...Ts> explicit FileObserver(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		FileObserver(QJniObject obj);
		
		// Constructors
		FileObserver(jstring arg0);
		FileObserver(jstring arg0, jint arg1);
		
		// Methods
		void onEvent(jint arg0, jstring arg1);
		void startWatching();
		void stopWatching();
	};
} // namespace android::os

