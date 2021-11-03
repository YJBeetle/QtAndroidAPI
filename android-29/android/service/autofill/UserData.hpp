#pragma once

#include "../../../JObject.hpp"

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
	class UserData : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit UserData(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		UserData(QJniObject obj);
		
		// Constructors
		
		// Methods
		static jint getMaxCategoryCount();
		static jint getMaxFieldClassificationIdsSize();
		static jint getMaxUserDataSize();
		static jint getMaxValueLength();
		static jint getMinValueLength();
		jint describeContents();
		jstring getFieldClassificationAlgorithm();
		jstring getFieldClassificationAlgorithmForCategory(jstring arg0);
		jstring getId();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::service::autofill

