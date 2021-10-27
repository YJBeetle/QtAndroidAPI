#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class Parcel;
}

namespace android::app
{
	class VoiceInteractor_PickOptionRequest_Option : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		VoiceInteractor_PickOptionRequest_Option(QAndroidJniObject obj);
		// Constructors
		VoiceInteractor_PickOptionRequest_Option(jstring &arg0, jint &arg1);
		VoiceInteractor_PickOptionRequest_Option(const QString &arg0, jint &arg1);
		VoiceInteractor_PickOptionRequest_Option() = default;
		
		// Methods
		QAndroidJniObject addSynonym(jstring arg0);
		QAndroidJniObject addSynonym(const QString &arg0);
		jint countSynonyms();
		jint describeContents();
		QAndroidJniObject getExtras();
		jint getIndex();
		jstring getLabel();
		jstring getSynonymAt(jint arg0);
		void setExtras(android::os::Bundle arg0);
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::app

