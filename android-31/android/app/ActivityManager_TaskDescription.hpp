#pragma once

#include "../../JObject.hpp"

namespace android::graphics
{
	class Bitmap;
}
namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::app
{
	class ActivityManager_TaskDescription : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit ActivityManager_TaskDescription(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ActivityManager_TaskDescription(QJniObject obj);
		
		// Constructors
		ActivityManager_TaskDescription();
		ActivityManager_TaskDescription(android::app::ActivityManager_TaskDescription &arg0);
		ActivityManager_TaskDescription(JString arg0);
		ActivityManager_TaskDescription(JString arg0, android::graphics::Bitmap arg1);
		ActivityManager_TaskDescription(JString arg0, jint arg1);
		ActivityManager_TaskDescription(JString arg0, android::graphics::Bitmap arg1, jint arg2);
		ActivityManager_TaskDescription(JString arg0, jint arg1, jint arg2);
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		android::graphics::Bitmap getIcon() const;
		JString getLabel() const;
		jint getPrimaryColor() const;
		void readFromParcel(android::os::Parcel arg0) const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::app

