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
		void addGesture(JString arg0, android::gesture::Gesture arg1) const;
		JObject getGestureEntries() const;
		java::util::ArrayList getGestures(JString arg0) const;
		jint getOrientationStyle() const;
		jint getSequenceType() const;
		jboolean isReadOnly() const;
		jboolean load() const;
		java::util::ArrayList recognize(android::gesture::Gesture arg0) const;
		void removeEntry(JString arg0) const;
		void removeGesture(JString arg0, android::gesture::Gesture arg1) const;
		jboolean save() const;
		void setOrientationStyle(jint arg0) const;
		void setSequenceType(jint arg0) const;
	};
} // namespace android::gesture

