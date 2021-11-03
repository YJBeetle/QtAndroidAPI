#pragma once

#include "../../../JObject.hpp"

class JIntArray;
class JArray;
namespace android::content::res
{
	class Resources;
}
namespace android::content::res
{
	class Resources_Theme;
}
namespace android::os
{
	class Parcel;
}
class JString;

namespace android::content::res
{
	class ColorStateList : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ColorStateList(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ColorStateList(QAndroidJniObject obj);
		
		// Constructors
		ColorStateList(JArray arg0, JIntArray arg1);
		
		// Methods
		static android::content::res::ColorStateList createFromXml(android::content::res::Resources arg0, JObject arg1);
		static android::content::res::ColorStateList createFromXml(android::content::res::Resources arg0, JObject arg1, android::content::res::Resources_Theme arg2);
		static android::content::res::ColorStateList valueOf(jint arg0);
		jint describeContents() const;
		jint getChangingConfigurations() const;
		jint getColorForState(JIntArray arg0, jint arg1) const;
		jint getDefaultColor() const;
		jboolean isOpaque() const;
		jboolean isStateful() const;
		JString toString() const;
		android::content::res::ColorStateList withAlpha(jint arg0) const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::content::res

