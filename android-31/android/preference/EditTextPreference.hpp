#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Preference.hpp"
#include "./DialogPreference.hpp"

namespace android::content
{
	class Context;
}
namespace android::content::res
{
	class TypedArray;
}
namespace android::os
{
	class Bundle;
}
namespace android::view
{
	class View;
}
namespace android::widget
{
	class EditText;
}

namespace android::preference
{
	class EditTextPreference : public android::preference::DialogPreference
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit EditTextPreference(const char *className, const char *sig, Ts...agv) : android::preference::DialogPreference(className, sig, std::forward<Ts>(agv)...) {}
		EditTextPreference(QAndroidJniObject obj);
		
		// Constructors
		EditTextPreference(android::content::Context arg0);
		EditTextPreference(android::content::Context arg0, __JniBaseClass arg1);
		EditTextPreference(android::content::Context arg0, __JniBaseClass arg1, jint arg2);
		EditTextPreference(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jint arg3);
		
		// Methods
		android::widget::EditText getEditText();
		jstring getText();
		void setText(jstring arg0);
		jboolean shouldDisableDependents();
	};
} // namespace android::preference

