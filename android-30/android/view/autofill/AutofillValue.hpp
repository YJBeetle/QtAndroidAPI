#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JString;
class JObject;
class JString;

namespace android::view::autofill
{
	class AutofillValue : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit AutofillValue(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AutofillValue(QJniObject obj);
		
		// Constructors
		
		// Methods
		static android::view::autofill::AutofillValue forDate(jlong arg0);
		static android::view::autofill::AutofillValue forList(jint arg0);
		static android::view::autofill::AutofillValue forText(JString arg0);
		static android::view::autofill::AutofillValue forToggle(jboolean arg0);
		jint describeContents();
		jboolean equals(JObject arg0);
		jlong getDateValue();
		jint getListValue();
		JString getTextValue();
		jboolean getToggleValue();
		jint hashCode();
		jboolean isDate();
		jboolean isList();
		jboolean isText();
		jboolean isToggle();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::autofill

