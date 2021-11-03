#pragma once

#include "../../JObject.hpp"

namespace android::app
{
	class AlertDialog;
}
namespace android::content
{
	class Context;
}
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
	class AlertDialog_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit AlertDialog_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AlertDialog_Builder(QJniObject obj);
		
		// Constructors
		AlertDialog_Builder(android::content::Context arg0);
		AlertDialog_Builder(android::content::Context arg0, jint arg1);
		
		// Methods
		android::app::AlertDialog create();
		android::content::Context getContext();
		android::app::AlertDialog_Builder setAdapter(JObject arg0, JObject arg1);
		android::app::AlertDialog_Builder setCancelable(jboolean arg0);
		android::app::AlertDialog_Builder setCursor(JObject arg0, JObject arg1, jstring arg2);
		android::app::AlertDialog_Builder setCustomTitle(android::view::View arg0);
		android::app::AlertDialog_Builder setIcon(android::graphics::drawable::Drawable arg0);
		android::app::AlertDialog_Builder setIcon(jint arg0);
		android::app::AlertDialog_Builder setIconAttribute(jint arg0);
		android::app::AlertDialog_Builder setInverseBackgroundForced(jboolean arg0);
		android::app::AlertDialog_Builder setItems(jarray arg0, JObject arg1);
		android::app::AlertDialog_Builder setItems(jint arg0, JObject arg1);
		android::app::AlertDialog_Builder setMessage(jint arg0);
		android::app::AlertDialog_Builder setMessage(jstring arg0);
		android::app::AlertDialog_Builder setMultiChoiceItems(jarray arg0, jbooleanArray arg1, JObject arg2);
		android::app::AlertDialog_Builder setMultiChoiceItems(jint arg0, jbooleanArray arg1, JObject arg2);
		android::app::AlertDialog_Builder setMultiChoiceItems(JObject arg0, jstring arg1, jstring arg2, JObject arg3);
		android::app::AlertDialog_Builder setNegativeButton(jint arg0, JObject arg1);
		android::app::AlertDialog_Builder setNegativeButton(jstring arg0, JObject arg1);
		android::app::AlertDialog_Builder setNeutralButton(jint arg0, JObject arg1);
		android::app::AlertDialog_Builder setNeutralButton(jstring arg0, JObject arg1);
		android::app::AlertDialog_Builder setOnCancelListener(JObject arg0);
		android::app::AlertDialog_Builder setOnDismissListener(JObject arg0);
		android::app::AlertDialog_Builder setOnItemSelectedListener(JObject arg0);
		android::app::AlertDialog_Builder setOnKeyListener(JObject arg0);
		android::app::AlertDialog_Builder setPositiveButton(jint arg0, JObject arg1);
		android::app::AlertDialog_Builder setPositiveButton(jstring arg0, JObject arg1);
		android::app::AlertDialog_Builder setSingleChoiceItems(jarray arg0, jint arg1, JObject arg2);
		android::app::AlertDialog_Builder setSingleChoiceItems(JObject arg0, jint arg1, JObject arg2);
		android::app::AlertDialog_Builder setSingleChoiceItems(jint arg0, jint arg1, JObject arg2);
		android::app::AlertDialog_Builder setSingleChoiceItems(JObject arg0, jint arg1, jstring arg2, JObject arg3);
		android::app::AlertDialog_Builder setTitle(jint arg0);
		android::app::AlertDialog_Builder setTitle(jstring arg0);
		android::app::AlertDialog_Builder setView(android::view::View arg0);
		android::app::AlertDialog_Builder setView(jint arg0);
		android::app::AlertDialog show();
	};
} // namespace android::app

