#pragma once

#include "../../JObject.hpp"
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
		
		// QJniObject forward
		template<typename ...Ts> explicit AlertDialog(const char *className, const char *sig, Ts...agv) : android::app::Dialog(className, sig, std::forward<Ts>(agv)...) {}
		AlertDialog(QJniObject obj);
		
		// Constructors
		
		// Methods
		android::widget::Button getButton(jint arg0);
		android::widget::ListView getListView();
		jboolean onKeyDown(jint arg0, android::view::KeyEvent arg1);
		jboolean onKeyUp(jint arg0, android::view::KeyEvent arg1);
		void setButton(jstring arg0, JObject arg1);
		void setButton(jstring arg0, android::os::Message arg1);
		void setButton(jint arg0, jstring arg1, JObject arg2);
		void setButton(jint arg0, jstring arg1, android::os::Message arg2);
		void setButton2(jstring arg0, JObject arg1);
		void setButton2(jstring arg0, android::os::Message arg1);
		void setButton3(jstring arg0, JObject arg1);
		void setButton3(jstring arg0, android::os::Message arg1);
		void setCustomTitle(android::view::View arg0);
		void setIcon(android::graphics::drawable::Drawable arg0);
		void setIcon(jint arg0);
		void setIconAttribute(jint arg0);
		void setInverseBackgroundForced(jboolean arg0);
		void setMessage(jstring arg0);
		void setTitle(jstring arg0);
		void setView(android::view::View arg0);
		void setView(android::view::View arg0, jint arg1, jint arg2, jint arg3, jint arg4);
	};
} // namespace android::app

