#pragma once

#include "../../../JObject.hpp"

namespace android::app::assist
{
	class AssistStructure;
}
namespace android::os
{
	class Parcel;
}
namespace android::view::autofill
{
	class AutofillId;
}
class JString;

namespace android::service::autofill
{
	class FillContext : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit FillContext(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FillContext(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		android::view::autofill::AutofillId getFocusedId() const;
		jint getRequestId() const;
		android::app::assist::AssistStructure getStructure() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::service::autofill

