#pragma once

#include "../../JObject.hpp"

class JArray;
class JBooleanArray;
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
class JString;
class JString;

namespace android::app
{
	class AlertDialog_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AlertDialog_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AlertDialog_Builder(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		AlertDialog_Builder(android::content::Context arg0);
		AlertDialog_Builder(android::content::Context arg0, jint arg1);
		
		// Methods
		android::app::AlertDialog create() const;
		android::content::Context getContext() const;
		android::app::AlertDialog_Builder setAdapter(JObject arg0, JObject arg1) const;
		android::app::AlertDialog_Builder setCancelable(jboolean arg0) const;
		android::app::AlertDialog_Builder setCursor(JObject arg0, JObject arg1, JString arg2) const;
		android::app::AlertDialog_Builder setCustomTitle(android::view::View arg0) const;
		android::app::AlertDialog_Builder setIcon(android::graphics::drawable::Drawable arg0) const;
		android::app::AlertDialog_Builder setIcon(jint arg0) const;
		android::app::AlertDialog_Builder setIconAttribute(jint arg0) const;
		android::app::AlertDialog_Builder setInverseBackgroundForced(jboolean arg0) const;
		android::app::AlertDialog_Builder setItems(JArray arg0, JObject arg1) const;
		android::app::AlertDialog_Builder setItems(jint arg0, JObject arg1) const;
		android::app::AlertDialog_Builder setMessage(jint arg0) const;
		android::app::AlertDialog_Builder setMessage(JString arg0) const;
		android::app::AlertDialog_Builder setMultiChoiceItems(JArray arg0, JBooleanArray arg1, JObject arg2) const;
		android::app::AlertDialog_Builder setMultiChoiceItems(jint arg0, JBooleanArray arg1, JObject arg2) const;
		android::app::AlertDialog_Builder setMultiChoiceItems(JObject arg0, JString arg1, JString arg2, JObject arg3) const;
		android::app::AlertDialog_Builder setNegativeButton(jint arg0, JObject arg1) const;
		android::app::AlertDialog_Builder setNegativeButton(JString arg0, JObject arg1) const;
		android::app::AlertDialog_Builder setNeutralButton(jint arg0, JObject arg1) const;
		android::app::AlertDialog_Builder setNeutralButton(JString arg0, JObject arg1) const;
		android::app::AlertDialog_Builder setOnCancelListener(JObject arg0) const;
		android::app::AlertDialog_Builder setOnDismissListener(JObject arg0) const;
		android::app::AlertDialog_Builder setOnItemSelectedListener(JObject arg0) const;
		android::app::AlertDialog_Builder setOnKeyListener(JObject arg0) const;
		android::app::AlertDialog_Builder setPositiveButton(jint arg0, JObject arg1) const;
		android::app::AlertDialog_Builder setPositiveButton(JString arg0, JObject arg1) const;
		android::app::AlertDialog_Builder setSingleChoiceItems(JArray arg0, jint arg1, JObject arg2) const;
		android::app::AlertDialog_Builder setSingleChoiceItems(JObject arg0, jint arg1, JObject arg2) const;
		android::app::AlertDialog_Builder setSingleChoiceItems(jint arg0, jint arg1, JObject arg2) const;
		android::app::AlertDialog_Builder setSingleChoiceItems(JObject arg0, jint arg1, JString arg2, JObject arg3) const;
		android::app::AlertDialog_Builder setTitle(jint arg0) const;
		android::app::AlertDialog_Builder setTitle(JString arg0) const;
		android::app::AlertDialog_Builder setView(android::view::View arg0) const;
		android::app::AlertDialog_Builder setView(jint arg0) const;
		android::app::AlertDialog show() const;
	};
} // namespace android::app

