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
		jint describeContents();
		jint getChangingConfigurations();
		jint getColorForState(JIntArray arg0, jint arg1);
		jint getDefaultColor();
		jboolean isOpaque();
		jboolean isStateful();
		JString toString();
		android::content::res::ColorStateList withAlpha(jint arg0);
		android::content::res::ColorStateList withLStar(jfloat arg0);
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::content::res

