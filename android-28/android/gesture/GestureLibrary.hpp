#pragma once

#include "../../JObject.hpp"

namespace android::gesture
{
	class Gesture;
}
namespace android::gesture
{
	class GestureStore;
}
class JString;
namespace java::util
{
	class ArrayList;
}

namespace android::gesture
{
	class GestureLibrary : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit GestureLibrary(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		GestureLibrary(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void addGesture(JString arg0, android::gesture::Gesture arg1);
		JObject getGestureEntries();
		java::util::ArrayList getGestures(JString arg0);
		jint getOrientationStyle();
		jint getSequenceType();
		jboolean isReadOnly();
		jboolean load();
		java::util::ArrayList recognize(android::gesture::Gesture arg0);
		void removeEntry(JString arg0);
		void removeGesture(JString arg0, android::gesture::Gesture arg1);
		jboolean save();
		void setOrientationStyle(jint arg0);
		void setSequenceType(jint arg0);
	};
} // namespace android::gesture

