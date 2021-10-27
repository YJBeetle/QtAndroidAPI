#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::content
{
	class Context;
}
namespace android::content
{
	class Intent;
}
namespace android::os
{
	class Parcel;
}

namespace android::os::storage
{
	class StorageVolume : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jstring EXTRA_STORAGE_VOLUME();
		
		StorageVolume(QAndroidJniObject obj);
		// Constructors
		StorageVolume() = default;
		
		// Methods
		QAndroidJniObject createAccessIntent(jstring arg0);
		QAndroidJniObject createAccessIntent(const QString &arg0);
		QAndroidJniObject createOpenDocumentTreeIntent();
		jint describeContents();
		jboolean equals(jobject arg0);
		jstring getDescription(android::content::Context arg0);
		jstring getState();
		jstring getUuid();
		jint hashCode();
		jboolean isEmulated();
		jboolean isPrimary();
		jboolean isRemovable();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::os::storage

