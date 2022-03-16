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
class JString;

namespace android::service::autofill
{
	class UserData : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit UserData(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		UserData(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static jint getMaxCategoryCount();
		static jint getMaxFieldClassificationIdsSize();
		static jint getMaxUserDataSize();
		static jint getMaxValueLength();
		static jint getMinValueLength();
		jint describeContents() const;
		JString getFieldClassificationAlgorithm() const;
		JString getFieldClassificationAlgorithmForCategory(JString arg0) const;
		JString getId() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::service::autofill

