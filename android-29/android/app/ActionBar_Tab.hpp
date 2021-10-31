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
		QAndroidJniObject getCustomView();
		QAndroidJniObject getIcon();
		jint getPosition();
		jobject getTag();
		jstring getText();
		void select();
		QAndroidJniObject setContentDescription(jint arg0);
		QAndroidJniObject setContentDescription(jstring arg0);
		QAndroidJniObject setCustomView(android::view::View arg0);
		QAndroidJniObject setCustomView(jint arg0);
		QAndroidJniObject setIcon(android::graphics::drawable::Drawable arg0);
		QAndroidJniObject setIcon(jint arg0);
		QAndroidJniObject setTabListener(__JniBaseClass arg0);
		QAndroidJniObject setTag(jobject arg0);
		QAndroidJniObject setText(jint arg0);
		QAndroidJniObject setText(jstring arg0);
	};
} // namespace android::app

