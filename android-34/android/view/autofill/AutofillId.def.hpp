#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
namespace android::view
{
	class View;
}
class JObject;
class JString;

namespace android::view::autofill
{
	class AutofillId : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit AutofillId(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AutofillId(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static android::view::autofill::AutofillId create(android::view::View arg0, jint arg1);
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::view::autofill

