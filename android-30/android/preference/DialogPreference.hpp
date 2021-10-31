#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Preference.hpp"

namespace android::app
{
	class AlertDialog_Builder;
}
namespace android::app
{
	class Dialog;
}
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
namespace android::view
{
	class View;
}

namespace android::preference
{
	class DialogPreference : public android::preference::Preference
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DialogPreference(const char *className, const char *sig, Ts...agv) : android::preference::Preference(className, sig, std::forward<Ts>(agv)...) {}
		DialogPreference(QJniObject obj);
		
		// Constructors
		DialogPreference(android::content::Context arg0);
		DialogPreference(android::content::Context arg0, __JniBaseClass arg1);
		DialogPreference(android::content::Context arg0, __JniBaseClass arg1, jint arg2);
		DialogPreference(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jint arg3);
		
		// Methods
		android::app::Dialog getDialog();
		android::graphics::drawable::Drawable getDialogIcon();
		jint getDialogLayoutResource();
		jstring getDialogMessage();
		jstring getDialogTitle();
		jstring getNegativeButtonText();
		jstring getPositiveButtonText();
		void onActivityDestroy();
		void onClick(__JniBaseClass arg0, jint arg1);
		void onDismiss(__JniBaseClass arg0);
		void setDialogIcon(android::graphics::drawable::Drawable arg0);
		void setDialogIcon(jint arg0);
		void setDialogLayoutResource(jint arg0);
		void setDialogMessage(jint arg0);
		void setDialogMessage(jstring arg0);
		void setDialogTitle(jint arg0);
		void setDialogTitle(jstring arg0);
		void setNegativeButtonText(jint arg0);
		void setNegativeButtonText(jstring arg0);
		void setPositiveButtonText(jint arg0);
		void setPositiveButtonText(jstring arg0);
	};
} // namespace android::preference

