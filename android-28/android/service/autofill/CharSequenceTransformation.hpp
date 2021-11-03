#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
namespace android::service::autofill
{
	class CharSequenceTransformation_Builder;
}
class JString;

namespace android::service::autofill
{
	class CharSequenceTransformation : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit CharSequenceTransformation(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		CharSequenceTransformation(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::service::autofill

