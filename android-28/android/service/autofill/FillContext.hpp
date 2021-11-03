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
class JString;

namespace android::service::autofill
{
	class FillContext : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit FillContext(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		FillContext(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jint getRequestId();
		android::app::assist::AssistStructure getStructure();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::service::autofill

