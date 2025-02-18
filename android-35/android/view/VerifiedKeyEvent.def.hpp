#pragma once

#include "./VerifiedInputEvent.def.hpp"

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
	class VerifiedKeyEvent : public android::view::VerifiedInputEvent
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit VerifiedKeyEvent(const char *className, const char *sig, Ts...agv) : android::view::VerifiedInputEvent(className, sig, std::forward<Ts>(agv)...) {}
		VerifiedKeyEvent(QJniObject obj) : android::view::VerifiedInputEvent(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		jint getAction() const;
		jlong getDownTimeNanos() const;
		java::lang::Boolean getFlag(jint arg0) const;
		jint getKeyCode() const;
		jint getMetaState() const;
		jint getRepeatCount() const;
		jint getScanCode() const;
		jint hashCode() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::view

