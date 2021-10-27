#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::content::pm
{
	class Signature : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		Signature(QAndroidJniObject obj);
		// Constructors
		Signature(jbyteArray &arg0);
		Signature(jstring &arg0);
		Signature(const QString &arg0);
		Signature() = default;
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jint hashCode();
		jbyteArray toByteArray();
		jcharArray toChars();
		jcharArray toChars(jcharArray arg0, jintArray arg1);
		jstring toCharsString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::content::pm

