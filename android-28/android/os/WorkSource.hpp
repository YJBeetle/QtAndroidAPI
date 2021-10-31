#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::os
{
	class WorkSource : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WorkSource(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		WorkSource(QAndroidJniObject obj);
		
		// Constructors
		WorkSource();
		WorkSource(android::os::WorkSource &arg0);
		
		// Methods
		jboolean add(android::os::WorkSource arg0);
		void clear();
		jint describeContents();
		jboolean diff(android::os::WorkSource arg0);
		jboolean equals(jobject arg0);
		jint hashCode();
		jboolean remove(android::os::WorkSource arg0);
		void set(android::os::WorkSource arg0);
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::os

