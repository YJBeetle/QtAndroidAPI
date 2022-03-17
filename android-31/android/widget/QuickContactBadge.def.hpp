#pragma once

#include "./ImageView.def.hpp"

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
		QuickContactBadge(QAndroidJniObject obj) : android::widget::ImageView(obj) {}
		
		// Constructors
		QuickContactBadge(android::content::Context arg0);
		QuickContactBadge(android::content::Context arg0, JObject arg1);
		QuickContactBadge(android::content::Context arg0, JObject arg1, jint arg2);
		QuickContactBadge(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
		void assignContactFromEmail(JString arg0, jboolean arg1) const;
		void assignContactFromEmail(JString arg0, jboolean arg1, android::os::Bundle arg2) const;
		void assignContactFromPhone(JString arg0, jboolean arg1) const;
		void assignContactFromPhone(JString arg0, jboolean arg1, android::os::Bundle arg2) const;
		void assignContactUri(android::net::Uri arg0) const;
		void drawableHotspotChanged(jfloat arg0, jfloat arg1) const;
		JString getAccessibilityClassName() const;
		void onClick(android::view::View arg0) const;
		void setExcludeMimes(JArray arg0) const;
		void setImageToDefault() const;
		void setMode(jint arg0) const;
		void setOverlay(android::graphics::drawable::Drawable arg0) const;
		void setPrioritizedMimeType(JString arg0) const;
	};
} // namespace android::widget

