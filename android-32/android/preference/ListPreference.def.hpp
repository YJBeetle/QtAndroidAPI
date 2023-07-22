#pragma once

#include "./DialogPreference.def.hpp"

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
		ListPreference(QAndroidJniObject obj) : android::preference::DialogPreference(obj) {}
		
		// Constructors
		ListPreference(android::content::Context arg0);
		ListPreference(android::content::Context arg0, JObject arg1);
		ListPreference(android::content::Context arg0, JObject arg1, jint arg2);
		ListPreference(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
		jint findIndexOfValue(JString arg0) const;
		JArray getEntries() const;
		JString getEntry() const;
		JArray getEntryValues() const;
		JString getSummary() const;
		JString getValue() const;
		void setEntries(JArray arg0) const;
		void setEntries(jint arg0) const;
		void setEntryValues(JArray arg0) const;
		void setEntryValues(jint arg0) const;
		void setSummary(JString arg0) const;
		void setValue(JString arg0) const;
		void setValueIndex(jint arg0) const;
	};
} // namespace android::preference

