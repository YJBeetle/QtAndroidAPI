#pragma once

#include "./VerifiedInputEvent.hpp"

namespace android::os
{
	class Parcel;
}
namespace java::lang
{
	class Boolean;
}
class JObject;

namespace android::view
{
	class VerifiedMotionEvent : public android::view::VerifiedInputEvent
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit VerifiedMotionEvent(const char *className, const char *sig, Ts...agv) : android::view::VerifiedInputEvent(className, sig, std::forward<Ts>(agv)...) {}
		VerifiedMotionEvent(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(JObject arg0);
		jint getActionMasked();
		jint getButtonState();
		jlong getDownTimeNanos();
		java::lang::Boolean getFlag(jint arg0);
		jint getMetaState();
		jfloat getRawX();
		jfloat getRawY();
		jint hashCode();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view

