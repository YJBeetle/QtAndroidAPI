#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JString;

namespace android::view
{
	class SurfaceControl : public JObject
	{
	public:
		// Fields
		static jint BUFFER_TRANSFORM_IDENTITY();
		static jint BUFFER_TRANSFORM_MIRROR_HORIZONTAL();
		static jint BUFFER_TRANSFORM_MIRROR_VERTICAL();
		static jint BUFFER_TRANSFORM_ROTATE_180();
		static jint BUFFER_TRANSFORM_ROTATE_270();
		static jint BUFFER_TRANSFORM_ROTATE_90();
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SurfaceControl(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SurfaceControl(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean isValid() const;
		void readFromParcel(android::os::Parcel arg0) const;
		void release() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::view

