#pragma once

#include "../../JObject.hpp"

namespace android::graphics
{
	class ColorSpace;
}
namespace android::os
{
	class Parcel;
}

namespace android::graphics
{
	class ParcelableColorSpace : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ParcelableColorSpace(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ParcelableColorSpace(QAndroidJniObject obj);
		
		// Constructors
		ParcelableColorSpace(android::graphics::ColorSpace arg0);
		
		// Methods
		static jboolean isParcelable(android::graphics::ColorSpace arg0);
		jint describeContents();
		jboolean equals(jobject arg0);
		android::graphics::ColorSpace getColorSpace();
		jint hashCode();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::graphics

