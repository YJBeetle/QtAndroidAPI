#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}
namespace android::service::autofill
{
	class CharSequenceTransformation_Builder;
}

namespace android::service::autofill
{
	class CharSequenceTransformation : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		CharSequenceTransformation(QAndroidJniObject obj);
		// Constructors
		CharSequenceTransformation() = default;
		
		// Methods
		jint describeContents();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::service::autofill

