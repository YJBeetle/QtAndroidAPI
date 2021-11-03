#pragma once

#include "./DialogPreference.hpp"

class JArray;
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
class JString;
class JObject;
class JString;

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
		jint findIndexOfValue(JString arg0);
		JArray getEntries();
		JString getEntry();
		JArray getEntryValues();
		JString getSummary();
		JString getValue();
		void setEntries(JArray arg0);
		void setEntries(jint arg0);
		void setEntryValues(JArray arg0);
		void setEntryValues(jint arg0);
		void setSummary(JString arg0);
		void setValue(JString arg0);
		void setValueIndex(jint arg0);
	};
} // namespace android::preference

