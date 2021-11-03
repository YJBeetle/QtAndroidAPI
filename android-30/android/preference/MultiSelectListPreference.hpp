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
class JObject;
class JString;

namespace android::preference
{
	class MultiSelectListPreference : public android::preference::DialogPreference
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MultiSelectListPreference(const char *className, const char *sig, Ts...agv) : android::preference::DialogPreference(className, sig, std::forward<Ts>(agv)...) {}
		MultiSelectListPreference(QJniObject obj);
		
		// Constructors
		MultiSelectListPreference(android::content::Context arg0);
		MultiSelectListPreference(android::content::Context arg0, JObject arg1);
		MultiSelectListPreference(android::content::Context arg0, JObject arg1, jint arg2);
		MultiSelectListPreference(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
		jint findIndexOfValue(JString arg0);
		JArray getEntries();
		JArray getEntryValues();
		JObject getValues();
		void setEntries(JArray arg0);
		void setEntries(jint arg0);
		void setEntryValues(JArray arg0);
		void setEntryValues(jint arg0);
		void setValues(JObject arg0);
	};
} // namespace android::preference

