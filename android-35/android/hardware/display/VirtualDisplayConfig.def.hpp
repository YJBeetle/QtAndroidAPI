#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
namespace android::view
{
	class Surface;
}
class JObject;
class JString;

namespace android::hardware::display
{
	class VirtualDisplayConfig : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit VirtualDisplayConfig(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		VirtualDisplayConfig(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		jint getDensityDpi() const;
		JObject getDisplayCategories() const;
		jint getFlags() const;
		jint getHeight() const;
		JString getName() const;
		jfloat getRequestedRefreshRate() const;
		android::view::Surface getSurface() const;
		jint getWidth() const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::hardware::display

