#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::gesture
{
	class Gesture;
}
namespace java::io
{
	class InputStream;
}
namespace java::io
{
	class OutputStream;
}
namespace java::util
{
	class ArrayList;
}

namespace android::gesture
{
	class GestureStore : public __JniBaseClass
	{
	public:
		// Fields
		static jint ORIENTATION_INVARIANT();
		static jint ORIENTATION_SENSITIVE();
		static jint SEQUENCE_INVARIANT();
		static jint SEQUENCE_SENSITIVE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit GestureStore(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		GestureStore(QAndroidJniObject obj);
		
		// Constructors
		GestureStore();
		
		// Methods
		void addGesture(jstring arg0, android::gesture::Gesture arg1);
		QAndroidJniObject getGestureEntries();
		QAndroidJniObject getGestures(jstring arg0);
		jint getOrientationStyle();
		jint getSequenceType();
		jboolean hasChanged();
		void load(java::io::InputStream arg0);
		void load(java::io::InputStream arg0, jboolean arg1);
		QAndroidJniObject recognize(android::gesture::Gesture arg0);
		void removeEntry(jstring arg0);
		void removeGesture(jstring arg0, android::gesture::Gesture arg1);
		void save(java::io::OutputStream arg0);
		void save(java::io::OutputStream arg0, jboolean arg1);
		void setOrientationStyle(jint arg0);
		void setSequenceType(jint arg0);
	};
} // namespace android::gesture

