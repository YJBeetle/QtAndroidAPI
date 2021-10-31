#pragma once

#include "../../../__JniBaseClass.hpp"

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

namespace android::service::autofill
{
	class FillContext : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit FillContext(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		FillContext(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		QAndroidJniObject getFocusedId();
		jint getRequestId();
		QAndroidJniObject getStructure();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::service::autofill

