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
		
		FillContext(QAndroidJniObject obj);
		// Constructors
		FillContext() = default;
		
		// Methods
		jint describeContents();
		QAndroidJniObject getFocusedId();
		jint getRequestId();
		QAndroidJniObject getStructure();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::service::autofill

