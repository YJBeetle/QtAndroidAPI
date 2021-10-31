#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class Parcel;
}

namespace android::service::autofill
{
	class SaveRequest : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SaveRequest(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SaveRequest(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		android::os::Bundle getClientState();
		__JniBaseClass getDatasetIds();
		__JniBaseClass getFillContexts();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::service::autofill
