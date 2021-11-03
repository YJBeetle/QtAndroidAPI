#pragma once

#include "../../JObject.hpp"
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
	class ListPreference : public android::preference::DialogPreference
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ListPreference(const char *className, const char *sig, Ts...agv) : android::preference::DialogPreference(className, sig, std::forward<Ts>(agv)...) {}
		ListPreference(QAndroidJniObject obj);
		
		// Constructors
		ListPreference(android::content::Context arg0);
		ListPreference(android::content::Context arg0, JObject arg1);
		ListPreference(android::content::Context arg0, JObject arg1, jint arg2);
		ListPreference(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
		jint findIndexOfValue(jstring arg0);
		jarray getEntries();
		jstring getEntry();
		jarray getEntryValues();
		jstring getSummary();
		jstring getValue();
		void setEntries(jarray arg0);
		void setEntries(jint arg0);
		void setEntryValues(jarray arg0);
		void setEntryValues(jint arg0);
		void setSummary(jstring arg0);
		void setValue(jstring arg0);
		void setValueIndex(jint arg0);
	};
} // namespace android::preference

