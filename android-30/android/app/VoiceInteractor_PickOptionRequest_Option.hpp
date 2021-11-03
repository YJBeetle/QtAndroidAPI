#pragma once

#include "../../JObject.hpp"

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
	class VoiceInteractor_PickOptionRequest_Option : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit VoiceInteractor_PickOptionRequest_Option(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		VoiceInteractor_PickOptionRequest_Option(QJniObject obj);
		
		// Constructors
		VoiceInteractor_PickOptionRequest_Option(jstring arg0, jint arg1);
		
		// Methods
		android::app::VoiceInteractor_PickOptionRequest_Option addSynonym(jstring arg0);
		jint countSynonyms();
		jint describeContents();
		android::os::Bundle getExtras();
		jint getIndex();
		jstring getLabel();
		jstring getSynonymAt(jint arg0);
		void setExtras(android::os::Bundle arg0);
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::app

