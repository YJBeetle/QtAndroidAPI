#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Preference.hpp"
#include "./DialogPreference.hpp"

namespace android::app
{
	class AlertDialog_Builder;
}
namespace android::content
{
	class Context;
}
namespace android::content::res
{
	class TypedArray;
}

namespace android::preference
{
	class MultiSelectListPreference : public android::preference::DialogPreference
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MultiSelectListPreference(const char *className, const char *sig, Ts...agv) : android::preference::DialogPreference(className, sig, std::forward<Ts>(agv)...) {}
		MultiSelectListPreference(QAndroidJniObject obj);
		
		// Constructors
		MultiSelectListPreference(android::content::Context arg0);
		MultiSelectListPreference(android::content::Context arg0, __JniBaseClass arg1);
		MultiSelectListPreference(android::content::Context arg0, __JniBaseClass arg1, jint arg2);
		MultiSelectListPreference(android::content::Context arg0, __JniBaseClass arg1, jint arg2, jint arg3);
		
		// Methods
		jint findIndexOfValue(jstring arg0);
		jarray getEntries();
		jarray getEntryValues();
		QAndroidJniObject getValues();
		void setEntries(jarray arg0);
		void setEntries(jint arg0);
		void setEntryValues(jarray arg0);
		void setEntryValues(jint arg0);
		void setValues(__JniBaseClass arg0);
	};
} // namespace android::preference

