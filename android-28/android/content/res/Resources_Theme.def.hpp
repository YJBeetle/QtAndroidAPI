#pragma once

#include "../../../JObject.hpp"

class JIntArray;
namespace android::content::res
{
	class Resources;
}
namespace android::content::res
{
	class TypedArray;
}
namespace android::graphics::drawable
{
	class Drawable;
}
namespace android::util
{
	class TypedValue;
}
class JString;

namespace android::content::res
{
	class Resources_Theme : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Resources_Theme(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Resources_Theme(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		void applyStyle(jint arg0, jboolean arg1) const;
		void dump(jint arg0, JString arg1, JString arg2) const;
		jint getChangingConfigurations() const;
		android::graphics::drawable::Drawable getDrawable(jint arg0) const;
		android::content::res::Resources getResources() const;
		android::content::res::TypedArray obtainStyledAttributes(JIntArray arg0) const;
		android::content::res::TypedArray obtainStyledAttributes(jint arg0, JIntArray arg1) const;
		android::content::res::TypedArray obtainStyledAttributes(JObject arg0, JIntArray arg1, jint arg2, jint arg3) const;
		jboolean resolveAttribute(jint arg0, android::util::TypedValue arg1, jboolean arg2) const;
		void setTo(android::content::res::Resources_Theme arg0) const;
	};
} // namespace android::content::res

