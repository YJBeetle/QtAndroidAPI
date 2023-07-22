#pragma once

#include "../../JObject.hpp"

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
class JString;
namespace java::util
{
	class ArrayList;
}

namespace android::gesture
{
	class GestureStore : public JObject
	{
	public:
		// Fields
		static jint ORIENTATION_INVARIANT();
		static jint ORIENTATION_SENSITIVE();
		static jint SEQUENCE_INVARIANT();
		static jint SEQUENCE_SENSITIVE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit GestureStore(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		GestureStore(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		GestureStore();
		
		// Methods
		void addGesture(JString arg0, android::gesture::Gesture arg1) const;
		JObject getGestureEntries() const;
		java::util::ArrayList getGestures(JString arg0) const;
		jint getOrientationStyle() const;
		jint getSequenceType() const;
		jboolean hasChanged() const;
		void load(java::io::InputStream arg0) const;
		void load(java::io::InputStream arg0, jboolean arg1) const;
		java::util::ArrayList recognize(android::gesture::Gesture arg0) const;
		void removeEntry(JString arg0) const;
		void removeGesture(JString arg0, android::gesture::Gesture arg1) const;
		void save(java::io::OutputStream arg0) const;
		void save(java::io::OutputStream arg0, jboolean arg1) const;
		void setOrientationStyle(jint arg0) const;
		void setSequenceType(jint arg0) const;
	};
} // namespace android::gesture

