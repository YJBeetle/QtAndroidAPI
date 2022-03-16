#pragma once

#include "./Dialog.hpp"

namespace android::content
{
	class Context;
}
namespace android::graphics::drawable
{
	class Drawable;
}
namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class Message;
}
namespace android::view
{
	class KeyEvent;
}
namespace android::view
{
	class View;
}
namespace android::widget
{
	class Button;
}
namespace android::widget
{
	class ListView;
}
class JString;

namespace android::app
{
	class AlertDialog : public android::app::Dialog
	{
	public:
		// Fields
		static jint THEME_DEVICE_DEFAULT_DARK();
		static jint THEME_DEVICE_DEFAULT_LIGHT();
		static jint THEME_HOLO_DARK();
		static jint THEME_HOLO_LIGHT();
		static jint THEME_TRADITIONAL();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AlertDialog(const char *className, const char *sig, Ts...agv) : android::app::Dialog(className, sig, std::forward<Ts>(agv)...) {}
		AlertDialog(QAndroidJniObject obj) : android::app::Dialog(obj) {}
		
		// Constructors
		
		// Methods
		android::widget::Button getButton(jint arg0) const;
		android::widget::ListView getListView() const;
		jboolean onKeyDown(jint arg0, android::view::KeyEvent arg1) const;
		jboolean onKeyUp(jint arg0, android::view::KeyEvent arg1) const;
		void setButton(JString arg0, JObject arg1) const;
		void setButton(JString arg0, android::os::Message arg1) const;
		void setButton(jint arg0, JString arg1, JObject arg2) const;
		void setButton(jint arg0, JString arg1, android::os::Message arg2) const;
		void setButton2(JString arg0, JObject arg1) const;
		void setButton2(JString arg0, android::os::Message arg1) const;
		void setButton3(JString arg0, JObject arg1) const;
		void setButton3(JString arg0, android::os::Message arg1) const;
		void setCustomTitle(android::view::View arg0) const;
		void setIcon(android::graphics::drawable::Drawable arg0) const;
		void setIcon(jint arg0) const;
		void setIconAttribute(jint arg0) const;
		void setInverseBackgroundForced(jboolean arg0) const;
		void setMessage(JString arg0) const;
		void setTitle(JString arg0) const;
		void setView(android::view::View arg0) const;
		void setView(android::view::View arg0, jint arg1, jint arg2, jint arg3, jint arg4) const;
	};
} // namespace android::app

