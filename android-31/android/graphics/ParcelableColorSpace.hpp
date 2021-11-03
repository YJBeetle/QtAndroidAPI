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
class JObject;

namespace android::graphics
{
	class ParcelableColorSpace : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit ParcelableColorSpace(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ParcelableColorSpace(QJniObject obj);
		
		// Constructors
		ParcelableColorSpace(android::graphics::ColorSpace arg0);
		
		// Methods
		static jboolean isParcelable(android::graphics::ColorSpace arg0);
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		android::graphics::ColorSpace getColorSpace() const;
		jint hashCode() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::graphics

