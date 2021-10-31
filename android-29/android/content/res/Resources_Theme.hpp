#pragma once

#include "../../../__JniBaseClass.hpp"

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

namespace android::content::res
{
	class Resources_Theme : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Resources_Theme(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Resources_Theme(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void applyStyle(jint arg0, jboolean arg1);
		void dump(jint arg0, jstring arg1, jstring arg2);
		jintArray getAttributeResolutionStack(jint arg0, jint arg1, jint arg2);
		jint getChangingConfigurations();
		QAndroidJniObject getDrawable(jint arg0);
		jint getExplicitStyle(__JniBaseClass arg0);
		QAndroidJniObject getResources();
		QAndroidJniObject obtainStyledAttributes(jintArray arg0);
		QAndroidJniObject obtainStyledAttributes(jint arg0, jintArray arg1);
		QAndroidJniObject obtainStyledAttributes(__JniBaseClass arg0, jintArray arg1, jint arg2, jint arg3);
		void rebase();
		jboolean resolveAttribute(jint arg0, android::util::TypedValue arg1, jboolean arg2);
		void setTo(android::content::res::Resources_Theme arg0);
	};
} // namespace android::content::res

