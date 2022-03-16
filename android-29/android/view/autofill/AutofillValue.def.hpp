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
		AutofillValue(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static android::view::autofill::AutofillValue forDate(jlong arg0);
		static android::view::autofill::AutofillValue forList(jint arg0);
		static android::view::autofill::AutofillValue forText(JString arg0);
		static android::view::autofill::AutofillValue forToggle(jboolean arg0);
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		jlong getDateValue() const;
		jint getListValue() const;
		JString getTextValue() const;
		jboolean getToggleValue() const;
		jint hashCode() const;
		jboolean isDate() const;
		jboolean isList() const;
		jboolean isText() const;
		jboolean isToggle() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::view::autofill

