#pragma once

#include "../../JObject.hpp"

namespace java::io
{
	class File;
}
class JString;

namespace android::os
{
	class FileObserver : public JObject
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
		template<typename ...Ts> explicit FileObserver(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FileObserver(QJniObject obj);
		
		// Constructors
		FileObserver(java::io::File arg0);
		FileObserver(JString arg0);
		FileObserver(JObject arg0);
		FileObserver(java::io::File arg0, jint arg1);
		FileObserver(JString arg0, jint arg1);
		FileObserver(JObject arg0, jint arg1);
		
		// Methods
		void onEvent(jint arg0, JString arg1);
		void startWatching();
		void stopWatching();
	};
} // namespace android::os

