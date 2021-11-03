#pragma once

#include "../../JObject.hpp"

namespace android::content
{
	class ClipData;
}
namespace android::content
{
	class ClipDescription;
}
namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::view
{
	class DragEvent : public JObject
	{
	public:
		// Fields
		static jint ACTION_DRAG_ENDED();
		static jint ACTION_DRAG_ENTERED();
		static jint ACTION_DRAG_EXITED();
		static jint ACTION_DRAG_LOCATION();
		static jint ACTION_DRAG_STARTED();
		static jint ACTION_DROP();
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DragEvent(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DragEvent(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jint getAction() const;
		android::content::ClipData getClipData() const;
		android::content::ClipDescription getClipDescription() const;
		JObject getLocalState() const;
		jboolean getResult() const;
		jfloat getX() const;
		jfloat getY() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::view

