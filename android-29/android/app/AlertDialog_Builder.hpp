#pragma once

#include "../../__JniBaseClass.hpp"

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
	class AlertDialog_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AlertDialog_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AlertDialog_Builder(QAndroidJniObject obj);
		
		// Constructors
		AlertDialog_Builder(android::content::Context arg0);
		AlertDialog_Builder(android::content::Context arg0, jint arg1);
		
		// Methods
		QAndroidJniObject create();
		QAndroidJniObject getContext();
		QAndroidJniObject setAdapter(__JniBaseClass arg0, __JniBaseClass arg1);
		QAndroidJniObject setCancelable(jboolean arg0);
		QAndroidJniObject setCursor(__JniBaseClass arg0, __JniBaseClass arg1, jstring arg2);
		QAndroidJniObject setCustomTitle(android::view::View arg0);
		QAndroidJniObject setIcon(android::graphics::drawable::Drawable arg0);
		QAndroidJniObject setIcon(jint arg0);
		QAndroidJniObject setIconAttribute(jint arg0);
		QAndroidJniObject setInverseBackgroundForced(jboolean arg0);
		QAndroidJniObject setItems(jarray arg0, __JniBaseClass arg1);
		QAndroidJniObject setItems(jint arg0, __JniBaseClass arg1);
		QAndroidJniObject setMessage(jint arg0);
		QAndroidJniObject setMessage(jstring arg0);
		QAndroidJniObject setMultiChoiceItems(jarray arg0, jbooleanArray arg1, __JniBaseClass arg2);
		QAndroidJniObject setMultiChoiceItems(jint arg0, jbooleanArray arg1, __JniBaseClass arg2);
		QAndroidJniObject setMultiChoiceItems(__JniBaseClass arg0, jstring arg1, jstring arg2, __JniBaseClass arg3);
		QAndroidJniObject setNegativeButton(jint arg0, __JniBaseClass arg1);
		QAndroidJniObject setNegativeButton(jstring arg0, __JniBaseClass arg1);
		QAndroidJniObject setNeutralButton(jint arg0, __JniBaseClass arg1);
		QAndroidJniObject setNeutralButton(jstring arg0, __JniBaseClass arg1);
		QAndroidJniObject setOnCancelListener(__JniBaseClass arg0);
		QAndroidJniObject setOnDismissListener(__JniBaseClass arg0);
		QAndroidJniObject setOnItemSelectedListener(__JniBaseClass arg0);
		QAndroidJniObject setOnKeyListener(__JniBaseClass arg0);
		QAndroidJniObject setPositiveButton(jint arg0, __JniBaseClass arg1);
		QAndroidJniObject setPositiveButton(jstring arg0, __JniBaseClass arg1);
		QAndroidJniObject setSingleChoiceItems(jarray arg0, jint arg1, __JniBaseClass arg2);
		QAndroidJniObject setSingleChoiceItems(__JniBaseClass arg0, jint arg1, __JniBaseClass arg2);
		QAndroidJniObject setSingleChoiceItems(jint arg0, jint arg1, __JniBaseClass arg2);
		QAndroidJniObject setSingleChoiceItems(__JniBaseClass arg0, jint arg1, jstring arg2, __JniBaseClass arg3);
		QAndroidJniObject setTitle(jint arg0);
		QAndroidJniObject setTitle(jstring arg0);
		QAndroidJniObject setView(android::view::View arg0);
		QAndroidJniObject setView(jint arg0);
		QAndroidJniObject show();
	};
} // namespace android::app

