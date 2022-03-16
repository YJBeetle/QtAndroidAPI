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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DialogPreference(const char *className, const char *sig, Ts...agv) : android::preference::Preference(className, sig, std::forward<Ts>(agv)...) {}
		DialogPreference(QAndroidJniObject obj) : android::preference::Preference(obj) {}
		
		// Constructors
		DialogPreference(android::content::Context arg0);
		DialogPreference(android::content::Context arg0, JObject arg1);
		DialogPreference(android::content::Context arg0, JObject arg1, jint arg2);
		DialogPreference(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
		android::app::Dialog getDialog() const;
		android::graphics::drawable::Drawable getDialogIcon() const;
		jint getDialogLayoutResource() const;
		JString getDialogMessage() const;
		JString getDialogTitle() const;
		JString getNegativeButtonText() const;
		JString getPositiveButtonText() const;
		void onActivityDestroy() const;
		void onClick(JObject arg0, jint arg1) const;
		void onDismiss(JObject arg0) const;
		void setDialogIcon(android::graphics::drawable::Drawable arg0) const;
		void setDialogIcon(jint arg0) const;
		void setDialogLayoutResource(jint arg0) const;
		void setDialogMessage(jint arg0) const;
		void setDialogMessage(JString arg0) const;
		void setDialogTitle(jint arg0) const;
		void setDialogTitle(JString arg0) const;
		void setNegativeButtonText(jint arg0) const;
		void setNegativeButtonText(JString arg0) const;
		void setPositiveButtonText(jint arg0) const;
		void setPositiveButtonText(JString arg0) const;
	};
} // namespace android::preference

