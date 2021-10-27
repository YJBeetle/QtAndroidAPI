#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::service::carrier
{
	class CarrierIdentifier : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		CarrierIdentifier(QAndroidJniObject obj);
		// Constructors
		CarrierIdentifier(jbyteArray &arg0, jstring &arg1, jstring &arg2);
		CarrierIdentifier(jbyteArray &arg0, const QString &arg1, const QString &arg2);
		CarrierIdentifier(jstring &arg0, jstring &arg1, jstring &arg2, jstring &arg3, jstring &arg4, jstring &arg5);
		CarrierIdentifier(const QString &arg0, const QString &arg1, const QString &arg2, const QString &arg3, const QString &arg4, const QString &arg5);
		CarrierIdentifier(jstring &arg0, jstring &arg1, jstring &arg2, jstring &arg3, jstring &arg4, jstring &arg5, jint &arg6, jint &arg7);
		CarrierIdentifier(const QString &arg0, const QString &arg1, const QString &arg2, const QString &arg3, const QString &arg4, const QString &arg5, jint &arg6, jint &arg7);
		CarrierIdentifier() = default;
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jint getCarrierId();
		jstring getGid1();
		jstring getGid2();
		jstring getImsi();
		jstring getMcc();
		jstring getMnc();
		jint getSpecificCarrierId();
		jstring getSpn();
		jint hashCode();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::service::carrier

