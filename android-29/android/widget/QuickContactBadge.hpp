#pragma once

#include "./ImageView.hpp"

class JArray;
namespace android::content
{
	class Context;
}
namespace android::graphics
{
	class Canvas;
}
namespace android::graphics::drawable
{
	class Drawable;
}
namespace android::net
{
	class Uri;
}
namespace android::os
{
	class Bundle;
}
namespace android::view
{
	class View;
}
class JString;
class JString;

namespace android::widget
{
	class QuickContactBadge : public android::widget::ImageView
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit QuickContactBadge(const char *className, const char *sig, Ts...agv) : android::widget::ImageView(className, sig, std::forward<Ts>(agv)...) {}
		QuickContactBadge(QAndroidJniObject obj);
		
		// Constructors
		QuickContactBadge(android::content::Context arg0);
		QuickContactBadge(android::content::Context arg0, JObject arg1);
		QuickContactBadge(android::content::Context arg0, JObject arg1, jint arg2);
		QuickContactBadge(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
		void assignContactFromEmail(JString arg0, jboolean arg1);
		void assignContactFromEmail(JString arg0, jboolean arg1, android::os::Bundle arg2);
		void assignContactFromPhone(JString arg0, jboolean arg1);
		void assignContactFromPhone(JString arg0, jboolean arg1, android::os::Bundle arg2);
		void assignContactUri(android::net::Uri arg0);
		void drawableHotspotChanged(jfloat arg0, jfloat arg1);
		JString getAccessibilityClassName();
		void onClick(android::view::View arg0);
		void setExcludeMimes(JArray arg0);
		void setImageToDefault();
		void setMode(jint arg0);
		void setOverlay(android::graphics::drawable::Drawable arg0);
		void setPrioritizedMimeType(JString arg0);
	};
} // namespace android::widget

