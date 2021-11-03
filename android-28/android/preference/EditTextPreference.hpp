#pragma once

#include "./DialogPreference.hpp"

namespace android::content
{
	class Context;
}
namespace android::content::res
{
	class TypedArray;
}
namespace android::view
{
	class View;
}
namespace android::widget
{
	class EditText;
}
class JObject;
class JString;

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
		EditTextPreference(android::content::Context arg0, JObject arg1);
		EditTextPreference(android::content::Context arg0, JObject arg1, jint arg2);
		EditTextPreference(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
		android::widget::EditText getEditText() const;
		JString getText() const;
		void setText(JString arg0) const;
		jboolean shouldDisableDependents() const;
	};
} // namespace android::preference

