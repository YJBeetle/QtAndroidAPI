#pragma once

#include "../../__JniBaseClass.hpp"
#include "./VerifiedInputEvent.hpp"

namespace android::os
{
	class Parcel;
}
namespace java::lang
{
	class Boolean;
}

namespace android::view
{
	class VerifiedKeyEvent : public android::view::VerifiedInputEvent
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit VerifiedKeyEvent(const char *className, const char *sig, Ts...agv) : android::view::VerifiedInputEvent(className, sig, std::forward<Ts>(agv)...) {}
		VerifiedKeyEvent(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jint getAction();
		jlong getDownTimeNanos();
		java::lang::Boolean getFlag(jint arg0);
		jint getKeyCode();
		jint getMetaState();
		jint getRepeatCount();
		jint getScanCode();
		jint hashCode();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view

