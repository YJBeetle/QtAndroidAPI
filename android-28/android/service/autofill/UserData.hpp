#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}
namespace android::service::autofill
{
	class UserData_Builder;
}

namespace android::service::autofill
{
	class UserData : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit UserData(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		UserData(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static jint getMaxCategoryCount();
		static jint getMaxFieldClassificationIdsSize();
		static jint getMaxUserDataSize();
		static jint getMaxValueLength();
		static jint getMinValueLength();
		jint describeContents();
		jstring getFieldClassificationAlgorithm();
		jstring getId();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::service::autofill

