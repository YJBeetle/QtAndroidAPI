#pragma once

#include "../../__JniBaseClass.hpp"
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
		
		AlertDialog(QAndroidJniObject obj);
		// Constructors
		AlertDialog() = default;
		
		// Methods
		QAndroidJniObject getButton(jint arg0);
		QAndroidJniObject getListView();
		jboolean onKeyDown(jint arg0, android::view::KeyEvent arg1);
		jboolean onKeyUp(jint arg0, android::view::KeyEvent arg1);
		void setButton(jstring arg0, __JniBaseClass arg1);
		void setButton(const QString &arg0, __JniBaseClass arg1);
		void setButton(jstring arg0, android::os::Message arg1);
		void setButton(const QString &arg0, android::os::Message arg1);
		void setButton(jint arg0, jstring arg1, __JniBaseClass arg2);
		void setButton(jint arg0, const QString &arg1, __JniBaseClass arg2);
		void setButton(jint arg0, jstring arg1, android::os::Message arg2);
		void setButton(jint arg0, const QString &arg1, android::os::Message arg2);
		void setButton2(jstring arg0, __JniBaseClass arg1);
		void setButton2(const QString &arg0, __JniBaseClass arg1);
		void setButton2(jstring arg0, android::os::Message arg1);
		void setButton2(const QString &arg0, android::os::Message arg1);
		void setButton3(jstring arg0, __JniBaseClass arg1);
		void setButton3(const QString &arg0, __JniBaseClass arg1);
		void setButton3(jstring arg0, android::os::Message arg1);
		void setButton3(const QString &arg0, android::os::Message arg1);
		void setCustomTitle(android::view::View arg0);
		void setIcon(android::graphics::drawable::Drawable arg0);
		void setIcon(jint arg0);
		void setIconAttribute(jint arg0);
		void setInverseBackgroundForced(jboolean arg0);
		void setMessage(jstring arg0);
		void setMessage(const QString &arg0);
		void setTitle(jstring arg0);
		void setTitle(const QString &arg0);
		void setView(android::view::View arg0);
		void setView(android::view::View arg0, jint arg1, jint arg2, jint arg3, jint arg4);
	};
} // namespace android::app

