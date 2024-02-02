#pragma once

#include "../../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
namespace android::view::autofill
{
	class AutofillId;
}
class JString;

namespace android::service::assist::classification
{
	class FieldClassification : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit FieldClassification(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FieldClassification(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		FieldClassification(android::view::autofill::AutofillId arg0, JObject arg1);
		
		// Methods
		jint describeContents() const;
		android::view::autofill::AutofillId getAutofillId() const;
		JObject getHints() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::service::assist::classification

