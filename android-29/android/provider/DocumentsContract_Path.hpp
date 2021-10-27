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
		static QAndroidJniObject CREATOR();
		
		DocumentsContract_Path(QAndroidJniObject obj);
		// Constructors
		DocumentsContract_Path(jstring &arg0, __JniBaseClass &arg1);
		DocumentsContract_Path(const QString &arg0, __JniBaseClass &arg1);
		DocumentsContract_Path() = default;
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		QAndroidJniObject getPath();
		jstring getRootId();
		jint hashCode();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::provider

