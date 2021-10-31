#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::app
{
	class SyncNotedAppOp : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit SyncNotedAppOp(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SyncNotedAppOp(QJniObject obj);
		
		// Constructors
		SyncNotedAppOp(jint arg0, jstring arg1);
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jstring getAttributionTag();
		jstring getOp();
		jint hashCode();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::app

