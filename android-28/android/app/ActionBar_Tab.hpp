#pragma once

#include "../../JObject.hpp"

namespace android::graphics::drawable
{
	class Drawable;
}
namespace android::view
{
	class View;
}
class JString;
class JObject;

namespace android::app
{
	class ActionBar_Tab : public JObject
	{
	public:
		// Fields
		static jint INVALID_POSITION();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ActionBar_Tab(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ActionBar_Tab(QAndroidJniObject obj);
		
		// Constructors
		ActionBar_Tab();
		
		// Methods
		JString getContentDescription();
		android::view::View getCustomView();
		android::graphics::drawable::Drawable getIcon();
		jint getPosition();
		JObject getTag();
		JString getText();
		void select();
		android::app::ActionBar_Tab setContentDescription(jint arg0);
		android::app::ActionBar_Tab setContentDescription(JString arg0);
		android::app::ActionBar_Tab setCustomView(android::view::View arg0);
		android::app::ActionBar_Tab setCustomView(jint arg0);
		android::app::ActionBar_Tab setIcon(android::graphics::drawable::Drawable arg0);
		android::app::ActionBar_Tab setIcon(jint arg0);
		android::app::ActionBar_Tab setTabListener(JObject arg0);
		android::app::ActionBar_Tab setTag(JObject arg0);
		android::app::ActionBar_Tab setText(jint arg0);
		android::app::ActionBar_Tab setText(JString arg0);
	};
} // namespace android::app

