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
		
		// QJniObject forward
		template<typename ...Ts> explicit VerifiedMotionEvent(const char *className, const char *sig, Ts...agv) : android::view::VerifiedInputEvent(className, sig, std::forward<Ts>(agv)...) {}
		VerifiedMotionEvent(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		jint getActionMasked() const;
		jint getButtonState() const;
		jlong getDownTimeNanos() const;
		java::lang::Boolean getFlag(jint arg0) const;
		jint getMetaState() const;
		jfloat getRawX() const;
		jfloat getRawY() const;
		jint hashCode() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::view

