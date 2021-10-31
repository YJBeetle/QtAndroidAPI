#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}
namespace android::service::autofill
{
	class SaveInfo_Builder;
}

namespace android::service::autofill
{
	class SaveInfo : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint FLAG_DELAY_SAVE();
		static jint FLAG_DONT_SAVE_ON_FINISH();
		static jint FLAG_SAVE_ON_ALL_VIEWS_INVISIBLE();
		static jint NEGATIVE_BUTTON_STYLE_CANCEL();
		static jint NEGATIVE_BUTTON_STYLE_REJECT();
		static jint SAVE_DATA_TYPE_ADDRESS();
		static jint SAVE_DATA_TYPE_CREDIT_CARD();
		static jint SAVE_DATA_TYPE_EMAIL_ADDRESS();
		static jint SAVE_DATA_TYPE_GENERIC();
		static jint SAVE_DATA_TYPE_PASSWORD();
		static jint SAVE_DATA_TYPE_USERNAME();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SaveInfo(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SaveInfo(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::service::autofill

