#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::provider
{
	class DocumentsContract_Path : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DocumentsContract_Path(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		DocumentsContract_Path(QAndroidJniObject obj);
		
		// Constructors
		DocumentsContract_Path(jstring arg0, __JniBaseClass arg1);
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		__JniBaseClass getPath();
		jstring getRootId();
		jint hashCode();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::provider

