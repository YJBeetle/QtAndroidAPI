#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::graphics::drawable
{
	class Drawable;
}
namespace android::view
{
	class View;
}

namespace android::app
{
	class ActionBar_Tab : public __JniBaseClass
	{
	public:
		// Fields
		static jint INVALID_POSITION();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ActionBar_Tab(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ActionBar_Tab(QAndroidJniObject obj);
		
		// Constructors
		ActionBar_Tab();
		
		// Methods
		jstring getContentDescription();
		android::view::View getCustomView();
		android::graphics::drawable::Drawable getIcon();
		jint getPosition();
		jobject getTag();
		jstring getText();
		void select();
		android::app::ActionBar_Tab setContentDescription(jint arg0);
		android::app::ActionBar_Tab setContentDescription(jstring arg0);
		android::app::ActionBar_Tab setCustomView(android::view::View arg0);
		android::app::ActionBar_Tab setCustomView(jint arg0);
		android::app::ActionBar_Tab setIcon(android::graphics::drawable::Drawable arg0);
		android::app::ActionBar_Tab setIcon(jint arg0);
		android::app::ActionBar_Tab setTabListener(__JniBaseClass arg0);
		android::app::ActionBar_Tab setTag(jobject arg0);
		android::app::ActionBar_Tab setText(jint arg0);
		android::app::ActionBar_Tab setText(jstring arg0);
	};
} // namespace android::app
