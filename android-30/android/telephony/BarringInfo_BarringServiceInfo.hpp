#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::telephony
{
	class BarringInfo_BarringServiceInfo : public __JniBaseClass
	{
	public:
		// Fields
		static jint BARRING_TYPE_CONDITIONAL();
		static jint BARRING_TYPE_NONE();
		static jint BARRING_TYPE_UNCONDITIONAL();
		static jint BARRING_TYPE_UNKNOWN();
		static __JniBaseClass CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit BarringInfo_BarringServiceInfo(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		BarringInfo_BarringServiceInfo(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jint getBarringType();
		jint getConditionalBarringFactor();
		jint getConditionalBarringTimeSeconds();
		jint hashCode();
		jboolean isBarred();
		jboolean isConditionallyBarred();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::telephony

