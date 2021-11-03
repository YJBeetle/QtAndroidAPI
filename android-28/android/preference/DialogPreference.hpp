#pragma once

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
class JString;

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
		DialogPreference(android::content::Context arg0, JObject arg1);
		DialogPreference(android::content::Context arg0, JObject arg1, jint arg2);
		DialogPreference(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
		android::app::Dialog getDialog();
		android::graphics::drawable::Drawable getDialogIcon();
		jint getDialogLayoutResource();
		JString getDialogMessage();
		JString getDialogTitle();
		JString getNegativeButtonText();
		JString getPositiveButtonText();
		void onActivityDestroy();
		void onClick(JObject arg0, jint arg1);
		void onDismiss(JObject arg0);
		void setDialogIcon(android::graphics::drawable::Drawable arg0);
		void setDialogIcon(jint arg0);
		void setDialogLayoutResource(jint arg0);
		void setDialogMessage(jint arg0);
		void setDialogMessage(JString arg0);
		void setDialogTitle(jint arg0);
		void setDialogTitle(JString arg0);
		void setNegativeButtonText(jint arg0);
		void setNegativeButtonText(JString arg0);
		void setPositiveButtonText(jint arg0);
		void setPositiveButtonText(JString arg0);
	};
} // namespace android::preference

