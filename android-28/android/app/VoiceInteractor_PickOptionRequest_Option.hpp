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
class JString;

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
		VoiceInteractor_PickOptionRequest_Option(JString arg0, jint arg1);
		
		// Methods
		android::app::VoiceInteractor_PickOptionRequest_Option addSynonym(JString arg0) const;
		jint countSynonyms() const;
		jint describeContents() const;
		android::os::Bundle getExtras() const;
		jint getIndex() const;
		JString getLabel() const;
		JString getSynonymAt(jint arg0) const;
		void setExtras(android::os::Bundle arg0) const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::app

