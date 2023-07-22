#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JString;

namespace android::accessibilityservice
{
	class MagnificationConfig : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint MAGNIFICATION_MODE_DEFAULT();
		static jint MAGNIFICATION_MODE_FULLSCREEN();
		static jint MAGNIFICATION_MODE_WINDOW();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MagnificationConfig(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MagnificationConfig(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jfloat getCenterX() const;
		jfloat getCenterY() const;
		jint getMode() const;
		jfloat getScale() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::accessibilityservice

